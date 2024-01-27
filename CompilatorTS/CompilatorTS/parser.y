%{
    #include "modifier_head.h"
    #include "parsing_tree.h"
    void yyerror(char const * s);
    extern int yylex(void);
%}

%union {
    int intLit;
    float floatLit;
    struct stringBuffer * stringLit;
    char * ident;
    struct ExpressionNode * expression;
    struct ExpressionListNode * exprList;
	struct StatementNode * statement;
    struct StatementListNode * stmtList;
    struct ModifierNode * mod;
    struct TypeNode * typ;
    struct VarDeclarationListNode * varDeclList;
    struct VarDeclarationNode * varDecl;
    struct DimensionNode * dimension;
    struct FunctionNode * function;
    struct ParamListNode * paramList;
    struct ParamForFuncNode * param;
    struct TSFileElementNode * elem;
    struct TSFileElementListNode * elemList;
    struct TSFileNode * file;
}

%define lr.type ielr

%token RETURN DO IF ELSE FOR IN WHILE BREAK CONTINUE DEFAULT ENDL
%token SWITCH CASE TRY CATCH THROW FINALLY INSTANCEOF FUNC ENUM

%token CONST
%token LET 
%token UNKNOWN ANY STRING VOID BOOLEAN
%token NUMBER
%token <intLit> INT_LITERAL
%token <floatLit> FLOAT_LITERAL
%token <stringLit> STRING_LITERAL
%token <ident> ID
%token TRUE_LITERAL FALSE_LITERAL

%nonassoc INCREMENT DECREMENT 
%nonassoc ENDL
%left ';'
%left '?' ':'
%right '=' PLUS_ASSIGN MINUS_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN
%left  OR
%left  AND
%left EQUALS NOT_EQUALS
%left '<' '>' LESS_OR_EQUAL GREATER_OR_EQUAL IS AS
%left '+' '-'
%left '*' '/' '%'
%right NOT PREF_INCREMENT PREF_DECREMENT UPLUS UMINUS
%nonassoc POST_INCREMENT POST_DECREMENT 
%left '[' ']' '.'
%nonassoc '(' ')'

%start TSFile


%type <statement>stmt stmt_top return_statement while_stmt block_statement do_while_stmt if_stmt for_stmt
%type <varDeclList> var_list_stmt var_list
%type <varDecl> variable_stmt variable_endl
%type <function> function_declaration
%type <param> param
%type <paramList> param_list param_list_0_or_more
%type <expression>expr var_init expr_opt
%type <exprList>expr_list expr_list_endl_opt expr_list_endl


%type <stmtList>stmt_list stmt_list_opt
%type <mod>modifier
%type <typ>type type_mark
%type <dimension>dimensions_list

%type <elem>program_elem
%type <elemList>program_elem_list
%type <file>TSFile

%%
// Определение стартового символа
TSFile: program_elem_list {$$ = root = createTSFileNode($1);}
;

program_elem_list: endl_opt program_elem {$$ = createTSFileElementListNode($2);}
| program_elem_list program_elem {$$ = addTSFileElementToList($1, $2);}
;

program_elem: stmt_top {$$ = createElementFromStatement($1);}
| function_declaration {$$ = createElementFromFunction($1);}
;

function_declaration: FUNC endl_opt ID endl_opt param_list_0_or_more endl_opt type_mark endl_opt '{' endl_opt stmt_list_opt '}' {$$ = createFunctionNode($3, $5, $7, $11);}
| FUNC endl_opt ID endl_opt param_list_0_or_more endl_opt '{' endl_opt stmt_list_opt '}' {$$ = createFunctionNode($3, $5, NULL, $9);}
;

param: ID endl_opt type_mark {$$ = createParamForFunc($1, $3);}
| ID endl_opt '?' endl_opt type_mark {$$ = createOptParamForFunc($1, $5);}
;

param_list: param {$$ = createParamListNode($1);}
| param_list endl_opt ',' endl_opt param {$$ = addParamToListNode($1, $5);}
;

param_list_0_or_more: '(' endl_opt param_list endl_opt ')' {$$ = $3;}
| '(' endl_opt ')' {$$ = createParamListNode(NULL);}
;

endl: ENDL
| endl ENDL
;

endl_opt: /* empty */
| endl
;

stmt_sep: ';' endl_opt
| endl
;

expr_list: expr {$$ = createExpressionListNode($1);}
| expr_list endl_opt ',' endl_opt expr {$$ = addExpressionToExpressionList($1, $5);}
;

expr_list_endl_opt: /* empty */ {$$ = createExpressionListNode(NULL);}
| expr_list_endl {$$ = $1;}
;

expr_list_endl: expr_list endl_opt {$$ = $1;}
;


expr_opt: /*empty*/ {$$ = NULL;}
| endl_opt expr endl_opt {$$ = $2;}
;

expr: expr DECREMENT %prec POST_DECREMENT {$$ = createPostDecrementExpressionNode($1);}
| DECREMENT endl_opt expr %prec PREF_DECREMENT {$$ = createPrefDecrementExpressionNode($3);}
| expr INCREMENT %prec POST_INCREMENT {$$ = createPostIncrementExpressionNode($1);}
| INCREMENT endl_opt expr %prec PREF_INCREMENT {$$ = createPrefIncrementExpressionNode($3);}
| '-' endl_opt expr %prec UMINUS {$$ = createUnaryMinusExpressionNode($3);}
| '+' endl_opt expr %prec UPLUS {$$ = createUnaryPlusExpressionNode($3);}
| INT_LITERAL {$$ = createIntLiteralExpressionNode($1);}
| FLOAT_LITERAL {$$ = createFloatLiteralExpressionNode($1);}
| STRING_LITERAL {$$ = createStringLiteralExpressionNode($1);}
| TRUE_LITERAL {$$ = createTrueLiteralExpressionNode();}
| FALSE_LITERAL {$$ = createFalseLiteralExpressionNode();}
| ID {$$ = createIDExpressionNode($1);}
| '(' endl_opt expr endl_opt ')' {$$ = createBracketExpressionNode($3);}
| expr '+' endl_opt expr {$$ = createPlusExpressionNode($1, $4);}
| NOT endl_opt expr {$$ = createNotExpressionNode($3);}
| expr '-' endl_opt expr {$$ = createMinusExpressionNode($1, $4);}
| expr '*' endl_opt expr {$$ = createMulExpressionNode($1, $4);}
| expr '/' endl_opt expr {$$ = createDivExpressionNode($1, $4);}
| expr '%' endl_opt expr {$$ = createModExpressionNode($1, $4);}
| expr '<' endl_opt expr {$$ = createLessExpressionNode($1, $4);}
| expr '>' endl_opt expr {$$ = createGreatExpressionNode($1, $4);}
| expr LESS_OR_EQUAL endl_opt expr {$$ = createLessEqualExpressionNode($1, $4);}
| expr GREATER_OR_EQUAL endl_opt expr {$$ = createGreatEqualExpressionNode($1, $4);}
| expr EQUALS endl_opt expr {$$ = createEqualExpressionNode($1, $4);}
| expr NOT_EQUALS endl_opt expr {$$ = createNotEqualExpressionNode($1, $4);}
| expr '=' endl_opt expr {$$ = createAssignmentExpressionNode($1, $4);}
| expr PLUS_ASSIGN endl_opt expr {$$ = createPlusAssignmentExpressionNode($1, $4);}
| expr MINUS_ASSIGN endl_opt expr {$$ = createMinusAssignmentExpressionNode($1, $4);}
| expr MUL_ASSIGN endl_opt expr {$$ = createMulAssignmentExpressionNode($1, $4);}
| expr DIV_ASSIGN endl_opt expr {$$ = createDivAssignmentExpressionNode($1, $4);}
| expr MOD_ASSIGN endl_opt expr {$$ = createModAssignmentExpressionNode($1, $4);}
| expr AND endl_opt expr {$$ = createAndExpressionNode($1, $4);}
| expr OR endl_opt expr {$$ = createOrExpressionNode($1, $4);}
| expr '[' endl_opt expr endl_opt ']' {$$ = createArrayElementAccessExpression($1, $4);} // Обращение к элементу массива
| ID '(' endl_opt expr_list_endl_opt ')' {$$ = createFunctionCallExpressionNode($1, $4);} // Вызов функции
| '[' endl_opt expr_list_endl_opt ']' {$$ = createSquareBracketExpressionNode($3);}
;

block_statement: '{' endl_opt stmt_list_opt '}' {$$ = $3;}

if_stmt: IF endl_opt '(' endl_opt expr endl_opt ')' endl_opt stmt {$$ = createIfStatement($5, $9, NULL);}
| IF endl_opt '(' endl_opt expr endl_opt ')' endl_opt stmt ELSE endl_opt stmt {$$ = createIfStatement($5, $9, $12);}
;

while_stmt: WHILE endl_opt '(' endl_opt expr endl_opt ')' endl_opt stmt {$$ = createWhileStatement($5, $9);}
;

do_while_stmt: DO endl_opt stmt WHILE endl_opt '(' endl_opt expr endl_opt ')' stmt_sep {$$ = createDoWhileStatement($8, $3);}
;

for_stmt: FOR endl_opt '(' expr_opt ';' expr_opt ';' expr_opt ')' endl_opt stmt {$$ = createForStatement(createStatementFromExpression($4), $6, $8, $11);}
| FOR endl_opt '(' endl_opt modifier endl_opt var_list ';' expr_opt ';' expr_opt ')' endl_opt stmt {
    $$ = createForStatement(createStatementFromVarDeclarationList($5, $7), $9, $11, $14);}
| FOR endl_opt '(' endl_opt modifier endl_opt ID ';' expr_opt ';' expr_opt ')' endl_opt stmt {$$ = 
    createForStatement(createStatementFromVarDeclarationList($5, 
    createVarDeclarationList(createVarDeclarationNode($7, NULL, NULL, NULL), NULL)), $9, $11, $14);}
;


return_statement: RETURN stmt_sep {$$ = createReturnStatement(NULL);}
| RETURN expr stmt_sep {$$ = createReturnStatement($2);}
;


stmt_list_opt: /* empty */ {$$ = createStatementListNode(NULL);}
| stmt_list {$$ = $1;}
;

stmt_list: stmt {$$ = createStatementListNode($1);}
| stmt_list stmt {$$ = addStatementToStatementList($1, $2);}
;

stmt_top: expr stmt_sep {$$ = createStatementFromExpression($1);}
| if_stmt {$$ = $1;}
| while_stmt {$$ = $1;}
| for_stmt {$$ = $1;}
| do_while_stmt {$$ = $1;}
| block_statement endl_opt {$$ = createStatementFromBlockStatement($1);}
| modifier endl_opt ID stmt_sep {$$ = createStatementFromVarDeclarationList($1, createVarDeclarationList(createVarDeclarationNode($3, NULL, NULL, NULL), NULL));}
| modifier endl_opt var_list_stmt {$$ = createStatementFromVarDeclarationList($1, $3);}
| ';' endl_opt {$$ = createEmptyStatement();}
;

stmt: stmt_top {$$ = $1;}
| return_statement {$$ = $1;}
;

modifier: LET {$$ = createLetModifierNode();}
| CONST {$$ = createConstModifierNode();}
;

type: NUMBER {$$ = createNumberTypeNode();}
| STRING {$$ = createStringTypeNode();}
| BOOLEAN {$$ = createBooleanTypeNode();}
| ANY {$$ = createAnyTypeNode();}
| UNKNOWN {$$ = createUnknownTypeNode();}
| VOID {$$ = createVoidTypeNode();}
;

type_mark: ':' endl_opt type {$$ = $3;}
;

variable_endl: ID endl_opt type_mark endl_opt var_init endl_opt {$$ = createVarDeclarationNode($1, $3, NULL, $5);}
| ID endl_opt type_mark endl_opt {$$ = createVarDeclarationNode($1, $3, NULL, NULL);}
| ID endl_opt var_init endl_opt {$$ = createVarDeclarationNode($1, NULL, NULL, $3);}
| ID endl_opt type_mark dimensions_list endl_opt {$$ = createVarDeclarationNode($1, $3, $4, NULL);} // Объявление массива
| ID endl_opt type_mark dimensions_list endl_opt var_init endl_opt {$$ = createVarDeclarationNode($1, $3, $4, $6);} // Инициализация массива
;

var_list: variable_endl ',' endl_opt variable_endl {$$ = createVarDeclarationList($1, $4);}
| ID endl_opt ',' endl_opt variable_endl {$$ = createVarDeclarationList(createVarDeclarationNode($1, NULL, NULL, NULL), $5);}
| variable_endl ',' endl_opt ID endl_opt {$$ = createVarDeclarationList($1, createVarDeclarationNode($4, NULL, NULL, NULL));}
| ID endl_opt ',' endl_opt ID endl_opt {$$ = createVarDeclarationList(createVarDeclarationNode($1, NULL, NULL, NULL), createVarDeclarationNode($5, NULL, NULL, NULL));}
| var_list ',' endl_opt variable_endl {$$ = addVarDeclarationToVarDeclarationList($1, $4);}
| var_list ',' endl_opt ID endl_opt {$$ = addVarDeclarationToVarDeclarationList($1, createVarDeclarationNode($4, NULL, NULL, NULL));}
;

var_list_stmt: variable_stmt {$$ = createVarDeclarationList($1, NULL);}
| variable_endl ',' endl_opt variable_stmt {$$ = createVarDeclarationList($1, $4);}
| ID endl_opt ',' endl_opt variable_stmt {$$ = createVarDeclarationList(createVarDeclarationNode($1, NULL, NULL, NULL), $5);}
| variable_endl ',' endl_opt ID stmt_sep {$$ = createVarDeclarationList($1, createVarDeclarationNode($4, NULL, NULL, NULL));}
| ID endl_opt ',' endl_opt ID stmt_sep {$$ = createVarDeclarationList(createVarDeclarationNode($1, NULL, NULL, NULL), createVarDeclarationNode($5, NULL, NULL, NULL));}
| var_list ',' endl_opt variable_stmt {$$ = addVarDeclarationToVarDeclarationList($1, $4);}
| var_list ',' endl_opt ID stmt_sep {$$ = addVarDeclarationToVarDeclarationList($1, createVarDeclarationNode($4, NULL, NULL, NULL));}
;

variable_stmt: ID endl_opt type_mark endl_opt var_init stmt_sep {$$ = createVarDeclarationNode($1, $3, NULL, $5);}
| ID endl_opt type_mark stmt_sep {$$ = createVarDeclarationNode($1, $3, NULL, NULL);}
| ID endl_opt var_init stmt_sep {$$ = createVarDeclarationNode($1, NULL, NULL, $3);}
| ID endl_opt type_mark dimensions_list stmt_sep {$$ = createVarDeclarationNode($1, $3, $4, NULL);} // Объявление массива
| ID endl_opt type_mark dimensions_list endl_opt var_init stmt_sep {$$ = createVarDeclarationNode($1, $3, $4, $6);} // Инициализация массива
;

var_init: '=' endl_opt expr {$$ = $3;}
;

dimensions: '[' endl_opt ']'
;

dimensions_list: dimensions {$$ = createDimensionNode();}
| dimensions_list dimensions {$$ = incrementDimensionNode($1);}
;

%%

void yyerror(char const * s)
{
       printf("%s\n", s);
}

