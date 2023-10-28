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

%token LET
%token CONST
%token FUNC
%token DECLARE

%token UNKNOWN
%token ANY
%token NUMBER
%token STRING
%token VOID
%token BOOL

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

id_list : ID
| id_list ',' ID
;

try_catch_block : TRY block catch_clauses
;

catch_clauses : catch_clause
| catch_clauses catch_clause
;

catch_clause: CATCH '(' error_type ID ')' block
;

error_type : TYPE_IDENTIFIER
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

/*Оператор перевода строки*/
endl: ENDL
| endl ENDL
;

endl_opt: /*empty*/
| endl
;

stmt_sep: ';'
| endl
;

stmt: expr stmt_sep
| assign_stmt
| access stmt_sep
| if_stmt
| while_stmt
| for_stmt
| do_while_stmt
| switch_stmt
| DECLARE ID ';'
;

stmt_list: stmt
| stmt_list stmt
;

stmt_list_opt: /*empty*/
| stmt_list
;

type: NUMBER
| STRING
| BOOLEAN
| ANY
;

type_mark: ID ':' type
;

expr: NUMBER_LITERAL
| STRING_LITERAL
| BOOL_LITERAL
| '(' expr ')'
| NOT expr
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

assign_stmt: ID ASSIGN expr stmt_sep
| ID PLUS_ASSIGN expr stmt_sep
| ID MINUS_ASSIGN expr stmt_sep
| ID MUL_ASSIGN expr stmt_sep
| ID DIV_ASSIGN expr stmt_sep
| ID MOD_ASSIGN expr stmt_sep
;

kw: LET
| CONST
;

param: kw ID type_mark ASSIGN expr
| kw ID ASSIGN expr
;

%%
{/*Секция пользовательского кода*/}
