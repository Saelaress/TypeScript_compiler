%{ /*Пролог*/ %}

%token INTERFACE
%token IMPLEMENTS
%token ABSTRACT 

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

---------------------
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

expr: 
| expr '+' expr
| expr '-' expr
| expr '*' expr
| expr '/' expr
| expr '%' expr
| '-' SimpleExpression %prec UMINUS
| '+' SimpleExpression %prec UPLUS
| expr AND expr
| expr OR expr
| NOT expr
| expr '?' expr ':' expr
| expr LESS expr
| expr GREATER expr
| expr LESS_OR_EQUAL expr
| expr GREATER_OR_EQUAL expr
| expr EQUALS expr
| expr NOT_EQUALS expr
| expr '(' expr ')'
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

arithmetic_expr: 
| PREF_DECREMENT left_hand_side_expr
| PREF_INCREMENT left_hand_side_expr
| left_hand_side_expr POST_DECREMENT
| left_hand_side_expr POST_INCREMENT
;





primary_expr: NUMBER_VAL
| STRING_VAL
| BOOL_VAL
| ID
;



%%
{/*Секция пользовательского кода*/}
