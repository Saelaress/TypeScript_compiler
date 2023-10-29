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
%token BOOLEAN_LITERAL

%token ID

%left ';' ENDL
%right ASSIGN PLUS_ASSIGN MINUS_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN
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

class_: CLASS ID modifier_decl '{' class_body '}'
;

modifier_decl: /* пусто */
| extends_decl
| implements_decl
| extends_decl implements_decl
;

extends_decl: EXTENDS ID
;

implements_decl: IMPLEMENTS ID
| implements_decl ',' ID
;

class_body: /* пусто */
| class_member_decl_list
;

class_member_decl_list: class_member_decl
| class_member_decl_list class_member_decl
;

class_member_declaration: property_declaration
| method_declaration
| constructor_declaration
| class_declaration
;

property_declaration: property_modifier type ID ';'
                 | property_modifier type ID '=' expr ';'
                 | property_modifier type_name ID ';'
                 | property_modifier type_name ID '=' expr ';'
                 | property_modifier array_type ID ';'
                 | property_modifier array_type ID '=' expr ';'
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

if_stmt: IF '(' expr ')' stmt
| IF '(' expr ')' stmt ELSE stmt
;

while_stmt: WHILE '(' expr ')' stmt
| WHILE '(' expr ')' if_stmt BREAK
| WHILE '(' expr ')' if_stmt CONTINUE
;

for_stmt: FOR '(' for_init ';' expr ';' for_iter ')' stmt
| FOR '(' for_init ';' expr ';' for_iter ')' if_stmt BREAK
| FOR '(' for_init ';' expr ';' for_iter ')' if_stmt CONTINUE
;

do_while_stmt: DO stmt WHILE '(' expr ')'
| DO stmt WHILE '(' expr ')' if_stmt BREAK
| DO stmt WHILE '(' expr ')' if_stmt CONTINUE
;

var_declaration: LET ID ':' type // Объявление переменной с типом
| LET ID '=' expr // Объявление переменной с инициализацией
| CONST id_list ':' type '=' expr ';'//объявление неизменяемой переменной
;

id_list: ID
| id_list ',' ID
;

try_catch_block: TRY block_statement catch_clauses
;

catch_clauses: catch_clause
| catch_clauses endl_opt catch_clause
;

catch_clause: CATCH '(' ID ')' block_statement
| CATCH '(' ID ':' error_type ')' block_statement
;

error_type: UNKNOWN
| ANY
;

as_expr: ID 'as' ID
| ID 'as' type
;

switch_stmt: SWITCH '(' ID ')' '{' case_list '}'
;

case_list: case_list case_stmt
| case_stmt 
| case_stmt BREAK
;

case_stmt: CASE expr ':' stmt
| DEFAULT ':' stmt 
;

function_declaration: FUNC ID param_list_0_or_more type_mark block_statement
| FUNC ID param_list_0_or_more block_statement
;

block_statement: '{' stmt_list_opt '}'
;

stmt_list_opt: /* empty */
| stmt_list
;

stmt_list: stmt
| stmt_list endl_opt stmt
;

return_statement: RETURN expr stmt_sep
;

enum_declaration : ENUM ID '{' enum_body '}'
;

enum_body : enum_list
| empty
;

enum_list : ID '=' NUMBER_LITERAL
| enum_list ',' ID '=' NUMBER_LITERAL
| ID '=' STRING_LITERAL
| enum_list ',' ID '=' STRING_LITERAL
| ID '=' BOOL_LITERAL
| enum_list ',' ID '=' BOOL_LITERAL
;

access: 			 ID
| qualification_list ID
| 					 ID '(' expr_list_opt ')'
| qualification_list ID '(' expr_list_opt ')'
;

qualification_list: qualification
| qualification_list qualification
;

qualification: ID '.'
| THIS '.'
| qualification '(' expr_list_opt ')' '.'
;

stmt: expr stmt_sep
| assign_stmt stmt_sep
| access stmt_sep
| if_stmt
| while_stmt
| for_stmt
| do_while_stmt
| switch_stmt
| DECLARE ID ';'
| function_declaration
| return_statement
;

type: NUMBER
| STRING
| BOOLEAN
| ANY
| UNKNOWN
| VOID
;

type_mark: ':' type
;

expr: NUMBER_LITERAL
| STRING_LITERAL
| BOOL_LITERAL
| '(' expr ')'
| NOT expr
| expr DECREMENT
| DECREMENT expr
| expr INCREMENT
| INCREMENT expr 
| '-' expr %prec UMINUS
| '+' expr %prec UPLUS
| expr '+' expr
| expr '-' expr
| expr '*' expr
| expr '/' expr
| expr '%' expr
| expr LESS expr
| expr GREATER expr
| expr LESS_OR_EQUAL expr
| expr GREATER_OR_EQUAL expr
| expr EQUALS expr
| expr NOT_EQUALS expr
| expr AND expr
| expr OR expr
| expr '?' expr ':' expr
| expr '[' expr_list ']'
| expr '.' ID
;

expr_list: expr
| expr_list ',' expr
;

expr_list_opt: expr_list
| /*empty*/
;

assign_stmt: ID assign_type expr
| vars_declaration assign_type expr
;

assign_type: ASSIGN
| PLUS_ASSIGN
| MINUS_ASSIGN
| MUL_ASSIGN
| DIV_ASSIGN
| MOD_ASSIGN
;

param_list_0_or_more: '(' param_list ')'
| '(' ')'
;

param_list: param
| param_list ',' param
| optional_param
| param_list ',' optional_param
;

param: ID type_mark
;

optional_param: ID '?' type_mark
;

return_value: type_mark
;

return_value_opt: return_value
| /*empty*/
;

kw: LET
| CONST
;

vars_declaration: kw param
| kw ID
| kw id_list type_mark
| kw id_list
;

id_list: ID ',' ID
| id_list ',' ID
;

/*Оператор перевода строки*/
endl: ENDL
| endl ENDL
;

endl_opt: /*empty*/
| endl
;

stmt_sep: ';'
| ENDL
;

%%
{/*Секция пользовательского кода*/}
