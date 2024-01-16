%{

#include "modifier_head.h"
#include "parsing_tree.h"

%}

%union {
}

%define lr.type ielr

%token RETURN DO IF ELSE FOR IN WHILE BREAK CONTINUE DEFAULT
%token SWITCH CASE TRY CATCH THROW FINALLY INSTANCEOF
%token LET CONST FUNC
%token UNKNOWN ANY NUMBER STRING VOID BOOLEAN ENUM

%token INT_LITERAL
%token FLOAT_LITERAL
%token STRING_LITERAL
%token ID
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

function_declaration: FUNC endl_opt ID endl_opt param_list_0_or_more endl_opt type_mark endl_opt '{' endl_opt stmt_list_opt '}'
| FUNC endl_opt ID endl_opt param_list_0_or_more endl_opt '{' endl_opt stmt_list_opt '}'
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

expr_opt: /*empty*/
| endl_opt expr endl_opt
;

expr: expr DECREMENT %prec POST_DECREMENT
| DECREMENT endl_opt expr %prec PREF_DECREMENT
| expr INCREMENT %prec POST_INCREMENT
| INCREMENT endl_opt expr %prec PREF_INCREMENT
| expr AS endl_opt type
| '-' endl_opt expr %prec UMINUS
| '+' endl_opt expr %prec UPLUS
| INT_LITERAL
| FLOAT_LITERAL
| STRING_LITERAL
| TRUE_LITERAL
| FALSE_LITERAL
| ID
| '(' endl_opt expr endl_opt ')'
| expr '+' endl_opt expr
| expr '-' endl_opt expr
| expr '*' endl_opt expr
| expr '/' endl_opt expr
| expr '%' endl_opt expr
| expr '<' endl_opt expr
| expr '>' endl_opt expr
| expr LESS_OR_EQUAL endl_opt expr
| expr GREATER_OR_EQUAL endl_opt expr
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
| expr '[' endl_opt expr endl_opt ']' // Обращение к элементу массива
| ID '(' endl_opt expr_list_endl_opt ')' // Вызов функции
| '[' endl_opt expr_list_endl_opt ']'
;

block_statement: '{' endl_opt stmt_list_opt '}'
;

if_stmt: IF endl_opt '(' endl_opt expr endl_opt ')' endl_opt stmt 
| IF endl_opt '(' endl_opt expr endl_opt ')' endl_opt stmt ELSE endl_opt stmt
;

while_stmt: WHILE endl_opt '(' endl_opt expr endl_opt ')' endl_opt stmt
;

do_while_stmt: DO endl_opt stmt WHILE endl_opt '(' endl_opt expr endl_opt ')' stmt_sep
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

return_statement: RETURN stmt_sep
| RETURN expr stmt_sep
;

try_catch_block: TRY endl_opt block_statement endl_opt catch_clause
|TRY endl_opt block_statement endl_opt catch_clause FINALLY endl_opt block_statement
|TRY endl_opt block_statement endl_opt FINALLY endl_opt block_statement
;

catch_clause: CATCH endl_opt '(' endl_opt ID endl_opt ')' endl_opt block_statement endl_opt
| CATCH endl_opt '(' endl_opt ID endl_opt ':' endl_opt error_type endl_opt ')' endl_opt block_statement endl_opt
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
| block_statement endl_opt
| modifier endl_opt ID stmt_sep
| modifier endl_opt var_list_stmt
| enum_declaration endl_opt
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
