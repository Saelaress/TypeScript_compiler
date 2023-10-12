%{

%}

%union {
    int INT;
    char SYMBOLS;
    string STRING;
}

%token EOL /* конец строки*/
%token<num> NUMBER
%%

expr: INT
| ID
| expr '+' expr
| expr '-' expr
| expr '*' expr
| expr '/' expr
| expr '=' expr
| expr '<' expr
| expr '>' expr
| expr '%' expr
| expr '&' expr
| expr '~' expr
| expr '^' expr
| '!' expr
| expr DPLUS 
| expr DMINUS
| expr EQ expr
| expr NE expr
| expr EQTYPE expr
| expr NETYPE expr
| expr LOGAND expr
| expr LOGOR expr
| expr BORE expr 
| expr SORE expr
| expr PLUSE expr
| expr MINUSE expr
| expr DIV expr
| expr MULT expr
| expr MOD expr 
| '(' expr ')'
| '-' expr %prec UMINUS
;



%%

int main(){
    yyparse();
    return 0 ;

}