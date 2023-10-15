%{
    /*Пролог*/
%}

%token NUMBER_VAL
%token STRING_VAL
%token BOOL_VAL
%token ID
%token IF DO WHILE ELSE CLASS PUBLIC PROTECTED PRIVATE FUNC
%token NUMBER STRING BOOLEAN


%right ASSIGN PLUS_ASSIGN MINUS_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN
%left ';' ENDL
%left '[' ']'
%left OR AND
%left EQUALS NOT_EQUALS LESS GREATER LESS_OR_EQUAL GREATER_OR_EQUAL
%left '+' '-' '*' '/' '%'
%left NOT UPLUS UMINUS
%right PREF_INCREMENT PREF_DECREMENT
%left POST_INCREMENT POST_DECREMENT
%left '.'
%nonassoc ')'

%%
Секция правил
%%
Секция пользовательского кода 
