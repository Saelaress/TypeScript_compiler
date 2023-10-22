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
%token CASE DEFAULT

%token LET
%token CONST
%token FUNC

%token UNKNOWN
%token ANY
%token NUMBER
%token STRING
%token VOID
%token BOOL
%token CONST

%token NUMBER_LITERAL
%token STRING_LITERAL
%token BOOLEAN_LITERAL

%token ID

%right ASSIGN PLUS_ASSIGN MINUS_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN
%left  OR
%left  AND
%left EQUALS NOT_EQUALS
%left  '<' '>' LESS_OR_EQUAL GREATER_OR_EQUAL IS AS
%left  '+' '-'
%left  '*' '/' '%'
%left NOT UPLUS UMINUS
%left '.' '[' ']'
%right NEW
%right PREF_INCREMENT PREF_DECREMENT
%left POST_INCREMENT POST_DECREMENT
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

type: ID
| NUMBER
| STRING
| BOOLEAN
| ANY
;

stmt: expr StatementTerminator
| if_stmt
| while_stmt
| for_stmt
| do_while_stmt StatementTerminator
| switch_statement 
| CONTINUE ';'
;

StatementTerminator: ENDL
| ';'
| BREAK
;

if_stmt: IF '(' expr ')' stmt
| IF '(' expr ')' stmt ELSE stmt
;

while_stmt: WHILE '(' expr ')' stmt
;

for_stmt: FOR '(' for_init ';' expr ';' for_iter ')' stmt
;

do_while_stmt: DO stmt WHILE '(' expr ')'
;

var_declaration: LET ID ':' type // Объявление переменной с типом
| LET ID '=' expr // Объявление переменной с инициализацией
| CONST identifier_list ':' type '=' expr ';'//объявление неизменяемой переменной
;

identifier_list : ID
| identifier_list ',' ID
;

try_catch_block
    : TRY block catch_clauses
    ;

catch_clauses
    : catch_clause
    | catch_clauses catch_clause
    ;

catch_clause
    : CATCH '(' error_type ID ')' block
    ;

error_type
    : TYPE_IDENTIFIER
    | ANY
    ;

as_expression: ID 'as' ID
    | ID 'as' type

switch_statement: SWITCH '(' ID ')' '{' case_list '}' ;

case_list: case_list case_statement
         | case_statement ;

case_statement: CASE expression ':' stamt
              | DEFAULT ':' stamt ;

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

%%
{/*Секция пользовательского кода*/}
