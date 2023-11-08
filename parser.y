%{ /*Пролог*/
#include "tree_nodes.h" %}

%union {
    char* str;
    int num;
}

%token INTERFACE
%token IMPLEMENTS

%token CONSTRUCTOR
%token NEW
%token EXTENDS
%token THIS
%token CLASS
%token STATIC
%token RETURN
%token DELETE
%token EXPORT

%token PUBLIC
%token PROTECTED
%token PRIVATE
%token READONLY

%token DO
%token IF
%token ELSE
%token FOR
%token OF
%token IN
%token WHILE
%token BREAK
%token CONTINUE
%token DEFAULT

%token INCREMENT
%token DECREMENT

%token LET
%token CONST
%token FUNC
%token DECLARE

%token UNKNOWN
%token ANY
%token NUMBER
%token STRING
%token VOID
%token BOOLEAN
%token ENUM

%token NUMBER_LITERAL
%token STRING_LITERAL
%token TRUE_LITERAL
%token FALSE_LITERAL

%token ID

%left ';' ENDL
%right '=' PLUS_ASSIGN MINUS_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN
%left '[' ']'
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

%%

endl: ENDL
| endl ENDL
;

endl_opt: /*empty*/
| endl
;

stmt_sep: ';'
| ENDL
;

expr_list: expr
| expr_list ',' expr
;

expr_list_opt: expr_list
| /*empty*/
;

expr: NUMBER_LITERAL
| STRING_LITERAL
| TRUE_LITERAL
| FALSE_LITERAL
| ID
| '(' endl_opt expr endl_opt ')'
| expr endl_opt '.' endl_opt ID
| expr endl_opt '.' endl_opt ID '(' expr_list_opt ')'
| ID '(' expr_list_opt ')'
| expr '+' endl_opt expr
| expr '-' endl_opt expr
| expr '*' endl_opt expr
| expr '/' endl_opt expr
| expr '%' endl_opt expr
| expr '<' endl_opt expr
| expr '>' endl_opt expr
| expr LESS_OR_EQUAL endl_opt expr
| expr GREATER_OR_EQUAL endl_optexpr
| expr EQUALS endl_opt expr
| expr NOT_EQUALS endl_opt expr
| expr '=' endl_opt expr
| expr PLUS_ASSIGN endl_opt expr
| expr MINUS_ASSIGN endl_opt expr
| expr MUL_ASSIGN endl_opt expr
| expr DIV_ASSIGN endl_opt expr
| expr MOD_ASSIGN endl_opt expr
| '-' endl_opt expr %prec UMINUS
| '+' endl_opt expr %prec UPLUS
| NOT endl_opt expr
| expr DECREMENT
| DECREMENT endl_opt expr
| expr INCREMENT
| INCREMENT endl_opt expr
| expr AND endl_opt expr
| expr OR endl_opt expr
| expr '?' endl_opt expr endl_opt ':' endl_opt expr
| expr '[' endl_opt expr_list endl_opt ']'
| ID AS endl_opt type
;

block_statement: '{' endl_opt stmt_list_opt endl_opt '}'
;

if_expr: NUMBER_LITERAL
| STRING_LITERAL
| TRUE_LITERAL
| FALSE_LITERAL
| ID
| '(' endl_opt expr endl_opt ')'
| expr endl_opt '.' endl_opt ID
| expr endl_opt '.' endl_opt ID '(' expr_list_opt ')'
| ID '(' expr_list_opt ')'
| expr '+' endl_opt expr
| expr '-' endl_opt expr
| expr '*' endl_opt expr
| expr '/' endl_opt expr
| expr '%' endl_opt expr
| expr '<' endl_opt expr
| expr '>' endl_opt expr
| expr LESS_OR_EQUAL endl_opt expr
| expr GREATER_OR_EQUAL endl_optexpr
| expr EQUALS endl_opt expr
| expr NOT_EQUALS endl_opt expr
| expr '=' endl_opt expr
| expr PLUS_ASSIGN endl_opt expr
| expr MINUS_ASSIGN endl_opt expr
| expr MUL_ASSIGN endl_opt expr
| expr DIV_ASSIGN endl_opt expr
| expr MOD_ASSIGN endl_opt expr
| NOT endl_opt expr
| expr AND endl_opt expr
| expr OR endl_opt expr
| expr '?' endl_opt expr endl_opt ':' endl_opt expr
| expr '[' endl_opt expr_list endl_opt ']'
| ID AS endl_opt type
;

if_stmt: IF endl_opt '(' endl_opt if_expr endl_opt ')' endl_opt block_statement
| IF endl_opt '(' endl_opt if_expr endl_opt ')' endl_opt if_expr
| IF endl_opt '(' endl_opt if_expr endl_opt ')' endl_opt block_statement endl_opt ELSE endl_opt block_statement
;

while_stmt: WHILE endl_opt '(' endl_opt if_expr endl_opt ')' endl_opt stmt
| WHILE endl_opt '(' endl_opt if_expr endl_opt ')' endl_opt block_statement
;

do_while_stmt: DO endl_opt block_statement endl_opt WHILE endl_opt '(' endl_opt if_expr endl_opt ')'
| DO endl_opt stmt endl_opt WHILE endl_opt '(' endl_opt if_expr endl_opt ')'
;

for_stmt: FOR endl_opt '(' endl_opt if_expr endl_opt ';' endl_opt if_expr endl_opt ';' endl_opt if_expr endl_opt ')' endl_opt block_statement
| FOR endl_opt '(' endl_opt if_expr endl_opt ';' endl_opt if_expr endl_opt ';' endl_opt if_expr endl_opt ')' endl_opt stmt
;

switch_stmt: SWITCH endl_opt '(' endl_opt ID endl_opt ')' endl_opt '{' endl_opt case_list endl_opt '}'
;

case_list: case_stmt
| case_list endl_opt case_stmt
;

case_stmt: CASE endl_opt expr endl_opt ':' endl_opt stmt endl_opt break_opt
| DEFAULT endl_opt ':' endl_opt stmt endl_opt break_opt
;

break_opt: BREAK endl_opt stmt_sep
;

return_statement_opt: /* empty */
| RETURN expr stmt_sep
;

function_declaration: FUNC endl_opt ID endl_opt param_list_0_or_more endl_opt type_mark endl_opt '{' endl_opt stmt_list_opt endl_opt return_statement_opt endl_opt'}'
| FUNC endl_opt ID endl_opt param_list_0_or_more endl_opt '{' endl_opt stmt_list_opt endl_opt return_statement_opt endl_opt'}'
;

try_catch_block: TRY endl_opt block_statement endl_opt catch_clause
;

catch_clause: CATCH endl_opt '(' endl_opt ID endl_opt ')' endl_opt block_statement
| CATCH endl_opt '(' endl_opt ID endl_opt ':' endl_opt error_type endl_opt ')' endl_opt block_statement
;

error_type: UNKNOWN
| ANY
;

stmt_list_opt: /* empty */
| stmt_list
;

stmt_list: stmt
| stmt_list endl_opt stmt
;

stmt: ';'
| expr stmt_sep
| if_stmt
| while_stmt
| for_stmt
| do_while_stmt stmt_sep
| switch_stmt
| function_declaration
| try_catch_block
;

kw: LET
| CONST
;

type: NUMBER
| STRING
| BOOLEAN
| ANY
| UNKNOWN
| VOID
;

type_mark: ':' endl_opt type
;

id_list: ID endl_opt ',' endl_opt ID
| id_list endl_opt ',' endl_opt ID
;

var_declaration: kw endl_opt param
| kw endl_opt ID
| kw endl_opt id_list endl_opt type_mark
| kw endl_opt id_list
;

param: ID endl_opt type_mark
;

optional_param: ID endl_opt '?' endl_opt type_mark
;

param_list: param
| param_list endl_opt ',' endl_opt param
| optional_param
| param_list endl_opt ',' endl_opt optional_param
;

param_list_0_or_more: '(' endl_opt param_list endl_opt ')'
| '(' ')'
;

extends_decl: /* empty */
| EXTENDS endl_opt ID
;

implements_decl: /* empty */
| IMPLEMENTS endl_opt ID
| implements_decl endl_opt ',' endl_opt ID
;

property_modifier: visibility
| visibility READONLY
| READONLY
| visibility STATIC
| STATIC
| visibility STATIC READONLY
;

visibility: PRIVATE
| PROTECTED
| PUBLIC
;

class_member: property_modifier expr endl_opt stmt_sep
| function_declaration
// | constructor_declaration
| class_declaration
;

сlass_visibility_member: class_member
| visibility endl_opt class_member
;

сlass_visibility_member_list: сlass_visibility_member
| сlass_visibility_member_list endl_opt сlass_visibility_member
;

class_body: /* empty */
| сlass_visibility_member_list
;

class_declaration: CLASS endl_opt ID
| CLASS endl_opt ID endl_opt extends_decl endl_opt implements_decl endl_opt '{' endl_opt class_body endl_opt'}'
;

%%
{/*Секция пользовательского кода*/}
