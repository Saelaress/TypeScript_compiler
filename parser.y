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
    struct ModifierHead * modHead;
    char * ident;
    struct TSFileNode * file;
}

%define lr.type ielr

%token RETURN DO IF ELSE FOR IN WHILE BREAK CONTINUE DEFAULT
%token SWITCH CASE TRY CATCH THROW FINALLY INSTANCEOF
%token LET CONST FUNC
%token UNKNOWN ANY NUMBER STRING VOID BOOLEAN ENUM

%token <intLit> INT_LITERAL
%token <floatLit> FLOAT_LITERAL
%token <stringLit> STRING_LITERAL
%token <ident> ID
%token TRUE_LITERAL FALSE_LITERAL

%nonassoc INCREMENT DECREMENT
%left ';' ENDL
%right '=' PLUS_ASSIGN MINUS_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN
%left '[' ']'
%left '?' ':'
%left  OR
%left  AND
%left EQUALS NOT_EQUALS '<' '>' LESS_OR_EQUAL GREATER_OR_EQUAL IS AS
%left '+' '-'
%left '*' '/' '%'
%right NEW
%right PREF_INCREMENT PREF_DECREMENT
%left POST_INCREMENT POST_DECREMENT
%left NOT UPLUS UMINUS
%left '.'
%nonassoc ')'

%start TSFile

%type <expression> expr
%type <exprList> expr_list
%type <statement> stmt if_stmt while_stmt for_stmt do_while_stmt switch_stmt try_catch_block enum_declaration return_statement
%type <stmtList> stmt_list block_statement
%type <file> TSFile
%type <elemList> program_elem_list
%type <elem> program_elem
%type <function> function_declaration



%%

// Определение стартового символа
TSFile: program_elem_list
;

program_elem_list: program_elem
| program_elem_list program_elem
;

program_elem: stmt_top
| function_declaration
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

expr_list: expr
| expr_list endl_opt ',' endl_opt expr
;

expr_list_endl_opt: /* empty */
| expr_list_endl
;

expr_list_endl: expr_list endl_opt
;

expr: expr DECREMENT %prec POST_DECREMENT {$$ = createPostDecrementExpressionNode($1);}
| DECREMENT endl_opt expr %prec PREF_DECREMENT {$$ = createPrefDecrementExpressionNode($3);}
| expr INCREMENT %prec POST_INCREMENT {$$ = createPostIncrementExpressionNode($1);}
| INCREMENT endl_opt expr %prec PREF_INCREMENT {$$ = createPrefIncrementExpressionNode($3);}
| expr AS endl_opt type {$$ = createAsTypeConversionExpressionNode($1, $4);}
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
| NOT endl_opt expr {$$ = createNotExpressionNode($3);}
| expr AND endl_opt expr {$$ = createAndExpressionNode($1, $4);}
| expr OR endl_opt expr {$$ = createOrExpressionNode($1, $4);}
| expr '?' endl_opt expr endl_opt ':' endl_opt expr {$$ = createTernaryExpressionNode($1, $4, $8);}
| expr '[' endl_opt expr endl_opt ']' {$$ = createArrayElementAccessExpression($1, $4);} // Обращение к элементу массива
| ID '(' endl_opt expr_list_endl_opt ')' {$$ = createFunctionCallExpressionNode($1, $4);} // Вызов функции
| '[' endl_opt expr_list_endl_opt ']' {$$ = createSquareBracketExpressionNode($3);}
;

block_statement: '{' endl_opt stmt_list_opt '}'

if_stmt: IF endl_opt '(' endl_opt expr endl_opt ')' endl_opt stmt 
| IF endl_opt '(' endl_opt expr endl_opt ')' endl_opt stmt ELSE endl_opt stmt
;

while_stmt: WHILE endl_opt '(' endl_opt expr endl_opt ')' endl_opt stmt
;

do_while_stmt: DO endl_opt stmt WHILE endl_opt '(' endl_opt expr endl_opt ')' stmt_sep
;

expr_opt: /*empty*/
| endl_opt expr endl_opt
;

for_stmt: FOR endl_opt '(' expr_opt ';' expr_opt ';' expr_opt ')' endl_opt stmt
| FOR endl_opt '(' endl_opt modifier endl_opt var_list ';' expr_opt ';' expr_opt ')' endl_opt stmt
| FOR endl_opt '(' endl_opt modifier endl_opt ID ';' expr_opt ';' expr_opt ')' endl_opt stmt
;

switch_stmt: SWITCH endl_opt '(' endl_opt expr endl_opt ')' endl_opt '{' endl_opt case_list_break '}' endl_opt
;

case_list: case_stmt
| case_list case_stmt
;

case_list_break: case_stmt_break
| case_list case_stmt_break
;

case_stmt_break: CASE endl_opt expr endl_opt ':' endl_opt stmt_list_opt break_opt_special
| DEFAULT endl_opt ':' endl_opt stmt_list_opt break_opt_special
;

break_opt_special:/* empty */
| BREAK endl
| BREAK ';' endl_opt
| BREAK
;

case_stmt: CASE endl_opt expr endl_opt ':' endl_opt stmt_list_opt break_opt
| DEFAULT endl_opt ':' endl_opt stmt_list_opt break_opt
;

break_opt: /* empty */
| BREAK endl
| BREAK ';' endl_opt
;

return_statement: RETURN expr stmt_sep
;

function_declaration: FUNC endl_opt ID endl_opt param_list_0_or_more endl_opt type_mark endl_opt '{' endl_opt stmt_list_opt '}'
| FUNC endl_opt ID endl_opt param_list_0_or_more endl_opt '{' endl_opt stmt_list_opt '}'
;

// if_stmt_catch: IF endl_opt '(' endl_opt ID endl_opt INSTANCEOF endl_opt type endl_opt')' endl_opt stmt 
// | IF endl_opt '(' endl_opt ID endl_opt INSTANCEOF endl_opt type endl_opt ')' endl_opt stmt ELSE endl_opt if_stmt_catch
// | IF endl_opt '(' endl_opt ID endl_opt INSTANCEOF endl_opt type endl_opt')' endl_opt if_stmt_catch 
// | IF endl_opt '(' endl_opt ID endl_opt INSTANCEOF endl_opt type endl_opt ')' endl_opt if_stmt_catch ELSE endl_opt if_stmt_catch
// | IF endl_opt '(' endl_opt ID endl_opt INSTANCEOF endl_opt type endl_opt ')' endl_opt if_stmt_catch ELSE endl_opt stmt
// | IF endl_opt '(' endl_opt ID endl_opt INSTANCEOF endl_opt type endl_opt ')' endl_opt stmt ELSE endl_opt stmt
// ;

try_catch_block: TRY endl_opt block_statement endl_opt catch_clause
|TRY endl_opt block_statement endl_opt catch_clause FINALLY endl_opt block_statement
|TRY endl_opt block_statement endl_opt FINALLY endl_opt block_statement
;

catch_clause: CATCH endl_opt '(' endl_opt ID endl_opt ')' endl_opt block_statement endl_opt
| CATCH endl_opt '(' endl_opt ID endl_opt ':' endl_opt error_type endl_opt ')' endl_opt block_statement endl_opt
//| CATCH endl_opt '(' endl_opt ID endl_opt ')' endl_opt '{' endl_opt if_stmt_catch '}' endl_opt
//| CATCH endl_opt '(' endl_opt ID endl_opt ':' endl_opt error_type endl_opt ')' endl_opt '{' endl_opt if_stmt_catch '}' endl_opt
;

error_type: UNKNOWN
| ANY
;

stmt_list_opt: /* empty */
| stmt_list 
;

stmt_list: stmt
| stmt_list stmt
;

stmt_top: expr stmt_sep
| if_stmt
| while_stmt
| for_stmt
| do_while_stmt
| switch_stmt
| try_catch_block
| block_statement
| modifier endl_opt ID stmt_sep
| modifier endl_opt var_list_stmt
| enum_declaration
| ';' endl_opt
| THROW expr stmt_sep
;

stmt: stmt_top
| return_statement
;

modifier: LET
| CONST
;

type: NUMBER
| STRING
| BOOLEAN
| ANY
| UNKNOWN
| VOID
// | ID
;

type_mark:  ':' endl_opt type
;

variable_endl: ID endl_opt type_mark endl_opt var_init endl_opt
| ID endl_opt type_mark endl_opt
| ID endl_opt var_init endl_opt
| ID endl_opt type_mark dimensions_list endl_opt // Объявление массива
| ID endl_opt type_mark dimensions_list endl_opt '=' endl_opt '[' endl_opt expr_list_endl_opt ']' endl_opt // Инициализация массива
;

variable_stmt: ID endl_opt type_mark endl_opt var_init stmt_sep
| ID endl_opt type_mark stmt_sep
| ID endl_opt var_init stmt_sep
| ID endl_opt type_mark dimensions_list stmt_sep // Объявление массива
| ID endl_opt type_mark dimensions_list endl_opt '=' endl_opt '[' endl_opt expr_list_endl_opt ']' stmt_sep // Инициализация массива
;

var_init: '=' endl_opt expr
;

var_list: variable_endl ',' endl_opt variable_endl
| ID endl_opt ',' endl_opt variable_endl
| variable_endl ',' endl_opt ID endl_opt
| ID endl_opt ',' endl_opt ID endl_opt
| var_list ',' endl_opt variable_endl
;

var_list_stmt: variable_stmt
| variable_endl ',' endl_opt variable_stmt
| ID endl_opt ',' endl_opt variable_stmt
| variable_endl ',' endl_opt ID stmt_sep
| ID endl_opt ',' endl_opt ID stmt_sep
| var_list ',' endl_opt variable_stmt
;

dimensions: '[' endl_opt ']'
;

dimensions_list: dimensions
| dimensions_list dimensions
;

param: ID endl_opt type_mark
| ID endl_opt '?' endl_opt type_mark
;

param_list: param
| param_list endl_opt ',' endl_opt param
;

param_list_0_or_more: '(' endl_opt param_list endl_opt ')'
| '(' endl_opt ')'
;

enum_declaration: ENUM endl_opt ID endl_opt '{' endl_opt id_list_endl '}'
| ENUM endl_opt ID endl_opt '{' endl_opt id_list_init endl_opt '}'
| ENUM endl_opt ID endl_opt '{' endl_opt id_list_endl ',' endl_opt id_list_init endl_opt '}'
| ENUM endl_opt ID endl_opt '{' endl_opt '}'
;

id_list_init: ID endl_opt var_init
| id_list_init endl_opt ',' endl_opt ID endl_opt var_init 
;

id_list_endl: ID endl_opt
| id_list_endl ',' endl_opt ID endl_opt
;

%%
{/*Секция пользовательского кода*/}
