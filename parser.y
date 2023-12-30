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


expr: INT_LITERAL {$$ = createIntLiteralExpressionNode($1);}
| expr '+' expr {$$ = createPlusExpressionNode($1, $3);}
;

%%

void yyerror(char const * s)
{
       printf("%s\n", s);
}

