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
}

%define lr.type ielr

%token RETURN DO IF ELSE FOR IN WHILE BREAK CONTINUE DEFAULT ENDL
%token SWITCH CASE TRY CATCH THROW FINALLY INSTANCEOF
%token LET CONST FUNC
%token UNKNOWN ANY NUMBER STRING VOID BOOLEAN ENUM

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

%start stmt_list

%type <expression> expr

%type <statement>stmt stmt_top return_statement while_stmt block_statement
%type <stmtList>stmt_list stmt_list_opt

%%

// function_declaration: FUNC endl_opt ID endl_opt param_list_0_or_more endl_opt type_mark endl_opt '{' endl_opt stmt_list_opt '}'
// | FUNC endl_opt ID endl_opt param_list_0_or_more endl_opt '{' endl_opt stmt_list_opt '}'
// ;

endl: ENDL
| endl ENDL
;

endl_opt: /* empty */
| endl
;

stmt_sep: ';' endl_opt
| endl
;

// expr_list: expr {$$ = createExpressionListNode($1);}
// | expr_list endl_opt ',' endl_opt expr {$$ = addExpressionToExpressionList($1, $5);}
// ;

// expr_list_endl_opt: /* empty */
// | expr_list_endl
// ;

// expr_list_endl: expr_list endl_opt
// ;

// expr_opt: /*empty*/
// | endl_opt expr endl_opt
// ;

expr: expr DECREMENT %prec POST_DECREMENT {$$ = createPostDecrementExpressionNode($1);}
| DECREMENT endl_opt expr %prec PREF_DECREMENT {$$ = createPrefDecrementExpressionNode($3);}
| expr INCREMENT %prec POST_INCREMENT {$$ = createPostIncrementExpressionNode($1);}
| INCREMENT endl_opt expr %prec PREF_INCREMENT {$$ = createPrefIncrementExpressionNode($3);}
| '-' endl_opt expr %prec UMINUS {$$ = createUnaryMinusExpressionNode($3);}
| '+' endl_opt expr %prec UPLUS {$$ = createUnaryPlusExpressionNode($3);}
| INT_LITERAL {$$ = createIntLiteralExpressionNode($1);}
| FLOAT_LITERAL {$$ = createFloatLiteralExpressionNode($1);}
// | STRING_LITERAL {$$ = createStringLiteralExpressionNode($1);}
| TRUE_LITERAL {$$ = createTrueLiteralExpressionNode();}
| FALSE_LITERAL {$$ = createFalseLiteralExpressionNode();}
| ID {$$ = createIDExpressionNode($1);}
// | '(' endl_opt expr endl_opt ')'
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
//| expr '?' endl_opt expr endl_opt ':' endl_opt expr {$$ = createTernaryExpressionNode($1, $4, $8);}
| expr '[' endl_opt expr endl_opt ']' {$$ = createArrayElementAccessExpression($1, $4);} // Обращение к элементу массива
// | ID '(' endl_opt expr_list_endl_opt ')' {$$ = createFunctionCallExpressionNode($1, $4);} // Вызов функции
// | '[' endl_opt expr_list_endl_opt ']'
;

block_statement: '{' endl_opt stmt_list_opt '}' {$$ = $3;}

// if_stmt: IF endl_opt '(' endl_opt expr endl_opt ')' endl_opt stmt
// | IF endl_opt '(' endl_opt expr endl_opt ')' endl_opt stmt ELSE endl_opt stmt
// ;

while_stmt: WHILE endl_opt '(' endl_opt expr endl_opt ')' endl_opt stmt {$$ = createWhileStatement($5, $9);}
;

// do_while_stmt: DO endl_opt stmt WHILE endl_opt '(' endl_opt expr endl_opt ')' stmt_sep
// ;

// for_stmt: FOR endl_opt '(' expr_opt ';' expr_opt ';' expr_opt ')' endl_opt stmt
// | FOR endl_opt '(' endl_opt modifier endl_opt var_list ';' expr_opt ';' expr_opt ')' endl_opt stmt
// | FOR endl_opt '(' endl_opt modifier endl_opt ID ';' expr_opt ';' expr_opt ')' endl_opt stmt
// ;

// switch_stmt: SWITCH endl_opt '(' endl_opt expr endl_opt ')' endl_opt '{' endl_opt case_list_break '}' endl_opt
// ;

// case_list: case_stmt
// | case_list case_stmt
// ;

// case_list_break: case_stmt_break
// | case_list case_stmt_break
// ;

// case_stmt_break: CASE endl_opt expr endl_opt ':' endl_opt stmt_list_opt break_opt_special
// | DEFAULT endl_opt ':' endl_opt stmt_list_opt break_opt_special
// ;

// break_opt_special:/* empty */
// | BREAK endl
// | BREAK ';' endl_opt
// | BREAK
// ;

// case_stmt: CASE endl_opt expr endl_opt ':' endl_opt stmt_list_opt break_opt
// | DEFAULT endl_opt ':' endl_opt stmt_list_opt break_opt
// ;

// break_opt: /* empty */
// | BREAK endl
// | BREAK ';' endl_opt
// ;

return_statement: RETURN stmt_sep {$$ = createReturnStatement(NULL);}
| RETURN expr stmt_sep {$$ = createReturnStatement($2);}
;

// try_catch_block: TRY endl_opt block_statement endl_opt catch_clause
// |TRY endl_opt block_statement endl_opt catch_clause FINALLY endl_opt block_statement
// |TRY endl_opt block_statement endl_opt FINALLY endl_opt block_statement
// ;

// catch_clause: CATCH endl_opt '(' endl_opt ID endl_opt ')' endl_opt block_statement endl_opt
// | CATCH endl_opt '(' endl_opt ID endl_opt ':' endl_opt error_type endl_opt ')' endl_opt block_statement endl_opt
// ;

// error_type: UNKNOWN
// | ANY
// ;

stmt_list_opt: /* empty */ {$$ = createStatementListNode(NULL);}
| stmt_list {$$ = $1;}
;

stmt_list: stmt {$$ = root = createStatementListNode($1);}
| stmt_list stmt {$$ = root = addStatementToStatementList($1, $2);}
;

stmt_top: expr stmt_sep {$$ = createStatementFromExpression($1);}
// | if_stmt
| while_stmt {$$ = $1;}
// | for_stmt
// | do_while_stmt
// | switch_stmt
// | try_catch_block
| block_statement endl_opt {$$ = createStatementFromBlockStatement($1);}
// | modifier endl_opt ID stmt_sep
// | modifier endl_opt var_list_stmt
// | enum_declaration endl_opt
| ';' endl_opt {$$ = createEmptyStatement();}
// | THROW expr stmt_sep
;

stmt: stmt_top
| return_statement {$$ = $1;}
;

%%

void yyerror(char const * s)
{
       printf("%s\n", s);
}

