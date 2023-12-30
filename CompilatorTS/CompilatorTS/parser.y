%{
    #include "modifier_head.h"
    #include "parsing_tree.h"
    void yyerror(char const * s);
    extern int yylex(void);
%}

%union {
    int intLit;
    struct ExpressionNode * expression;
    struct ExpressionListNode * exprList;
	struct KotlinFileNode * file;
	struct KotlinFileElementListNode * elemList;
}

%define lr.type ielr

%token ENDL
%token <intLit> INT_LITERAL

%left '+' '-'

%start expr_list

%type <expression> expr
%type <exprList> expr_list

%%

// Определение стартового символа
expr_list: expr {$$ = root = createExpressionListNode($1);}
;


expr: expr DECREMENT %prec POST_DECREMENT {$$ = createPostDecrementExpressionNode($1);}
| DECREMENT endl_opt expr %prec PREF_DECREMENT {$$ = createPrefDecrementExpressionNode($3);}
| expr INCREMENT %prec POST_INCREMENT {$$ = createPostIncrementExpressionNode($1);}
| INCREMENT endl_opt expr %prec PREF_INCREMENT {$$ = createPrefIncrementExpressionNode($3);}
| '-' endl_opt expr %prec UMINUS {$$ = createUnaryMinusExpressionNode($3);}
| '+' endl_opt expr %prec UPLUS
| INT_LITERAL
| FLOAT_LITERAL {$$ = createFloatLiteralExpressionNode($1);}
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
| expr AND endl_opt expr {$$ = createAndExpressionNode($1, $4);}
| expr OR endl_opt expr {$$ = createOrExpressionNode($1, $4);}
| expr '?' endl_opt expr endl_opt ':' endl_opt expr {$$ = createTernaryExpressionNode($1, $4, $8);}
| expr '[' endl_opt expr endl_opt ']' // Обращение к элементу массива
| ID '(' endl_opt expr_list_endl_opt ')' // Вызов функции
| '[' endl_opt expr_list_endl_opt ']'
;

%%

void yyerror(char const * s)
{
       printf("%s\n", s);
}

