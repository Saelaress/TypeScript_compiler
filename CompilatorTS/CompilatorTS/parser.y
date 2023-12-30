%{
    #include "modifier_head.h"
    #include "parsing_tree.h"
    void yyerror(char const * s);
    extern int yylex(void);
%}

%union {
    int intLit;
    float floatLit;
    struct ExpressionNode * expression;
    struct ExpressionListNode * exprList;
	struct KotlinFileNode * file;
	struct KotlinFileElementListNode * elemList;
}

%define lr.type ielr

%token RETURN DO IF ELSE FOR IN WHILE BREAK CONTINUE DEFAULT ENDL
%token SWITCH CASE TRY CATCH THROW FINALLY INSTANCEOF
%token LET CONST FUNC
%token UNKNOWN ANY NUMBER STRING VOID BOOLEAN ENUM

%token <intLit> INT_LITERAL
%token <floatLit> FLOAT_LITERAL
%token STRING_LITERAL
%token ID
%token TRUE_LITERAL FALSE_LITERAL

%nonassoc INCREMENT DECREMENT
%nonassoc ENDL
%left ';'
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

%start expr_list

%type <expression> expr
%type <exprList> expr_list

%%

endl: ENDL
| endl ENDL
;

endl_opt: /* empty */
| endl
;

// Определение стартового символа
expr_list: expr {$$ = root = createExpressionListNode($1);}
| expr_list endl_opt ',' endl_opt expr {$$ = root = addExpressionToExpressionList($1, $5);}
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
| '-' endl_opt expr %prec UMINUS {$$ = createUnaryMinusExpressionNode($3);}
| '+' endl_opt expr %prec UPLUS {$$ = createUnaryPlusExpressionNode($3);}
| INT_LITERAL {$$ = createIntLiteralExpressionNode($1);}
| FLOAT_LITERAL {$$ = createFloatLiteralExpressionNode($1);}
// | STRING_LITERAL
// | TRUE_LITERAL
// | FALSE_LITERAL
// | ID
// | '(' endl_opt expr endl_opt ')'
| expr '+' endl_opt expr {$$ = createPlusExpressionNode($1, $4);}
// | expr '-' endl_opt expr
// | expr '*' endl_opt expr
// | expr '/' endl_opt expr
// | expr '%' endl_opt expr
// | expr '<' endl_opt expr
// | expr '>' endl_opt expr
// | expr LESS_OR_EQUAL endl_opt expr
// | expr GREATER_OR_EQUAL endl_opt expr
// | expr EQUALS endl_opt expr
// | expr NOT_EQUALS endl_opt expr
// | expr '=' endl_opt expr
// | expr PLUS_ASSIGN endl_opt expr
// | expr MINUS_ASSIGN endl_opt expr
// | expr MUL_ASSIGN endl_opt expr
// | expr DIV_ASSIGN endl_opt expr
// | expr MOD_ASSIGN endl_opt expr
// | NOT endl_opt expr
| expr AND endl_opt expr {$$ = createAndExpressionNode($1, $4);}
| expr OR endl_opt expr {$$ = createOrExpressionNode($1, $4);}
| expr '?' endl_opt expr endl_opt ':' endl_opt expr {$$ = createTernaryExpressionNode($1, $4, $8);}
// | expr '[' endl_opt expr endl_opt ']' // Обращение к элементу массива
// | ID '(' endl_opt expr_list_endl_opt ')' // Вызов функции
// | '[' endl_opt expr_list_endl_opt ']'
;

%%

void yyerror(char const * s)
{
       printf("%s\n", s);
}

