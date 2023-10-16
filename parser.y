%{ /*Пролог*/ %}

%token ABSTRACT 
%token INTERFACE

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

%token DO
%token IF
%token ELSE
%token FOR
%token OF
%token IN
%token WHILE

%token LET
%token CONST
%token FUNC

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

program : class_list
;

class_list: /* пусто */
| class
| class_list class
;

class: CLASS ID '{' class_body '}'
;

class_body: /* пусто */
| attribute
| method
| attribute method
;

attribute: ID ':' type ';'
;

type: ID
| NUMBER
| STRING
| BOOLEAN
;

method: FUNC '(' param_list ')' ':' type block_statement
;

param_list: /* пусто */
| param
| param_list ',' param
;

param: ID ':' type
;

block_statement: '{' statement_list '}'
| '{' '}'
;


statement_list: /* пусто */
| statement_list stmt
;

stmt: expr StatementTerminator
| if_stmt
| while_stmt
| for_stmt
| do_while_stmt StatementTerminator
;

StatementTerminator: ENDL
| ';'
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

for_init: expr_stmt
| var_declaration
;

for_iter: expr
;

var_declaration: LET ID ':' type // Объявление переменной с типом
| LET ID '=' expr // Объявление переменной с инициализацией
;

expr: assignment_expr
| arithmetic_expr
| logical_expr
| conditional_expr
| comparison_expr
;

assignment_expr: left_hand_side_expr ASSIGN expr
| left_hand_side_expr PLUS_ASSIGN expr
| left_hand_side_expr MINUS_ASSIGN expr
| left_hand_side_expr MUL_ASSIGN expr
| left_hand_side_expr DIV_ASSIGN expr
| left_hand_side_expr MOD_ASSIGN expr
;

left_hand_side_expr: primary_expr
| left_hand_side_expr '.' ID
| left_hand_side_expr '[' expr ']'
;

arithmetic_expr: expr '+' expr
| expr '-' expr
| expr '*' expr
| expr '/' expr
| expr '%' expr
| PREF_DECREMENT left_hand_side_expr
| PREF_INCREMENT left_hand_side_expr
| left_hand_side_expr POST_DECREMENT
| left_hand_side_expr POST_INCREMENT
| '-' SimpleExpression %prec UMINUS
| '+' SimpleExpression %prec UPLUS
;

logical_expr: expr AND expr
| expr OR expr
| NOT expr
;

conditional_expr: expr '?' expr ':' expr
;

primary_expr: NUMBER_VAL
| STRING_VAL
| BOOL_VAL
| ID
;

comparison_expr: expr LESS expr
| expr GREATER expr
| expr LESS_OR_EQUAL expr
| expr GREATER_OR_EQUAL expr
| expr EQUALS expr
| expr NOT_EQUALS expr
;

%%
{/*Секция пользовательского кода*/}
