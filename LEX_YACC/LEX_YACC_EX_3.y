%{
      #include <stdio.h>
      #include <string.h>
%}

%union
{
	char* c;
	
};

%token <c> STR
%token <c> OP1
%token <c> OP2
%left OP1
%left OP2


%%

start : expr '\n'  {
                        printf("%s\n",$<c>1); printf("\nComplete\n");
                        exit(1);
                      }
  ;

expr:  expr OP1 expr        {$<c>$=(char*)malloc((strlen($<c>1)+strlen($<c>3))*sizeof(char));strcpy($<c>$,$<c>2);strcat($<c>$,$<c>1);strcat($<c>$,$<c>3);}
  | expr OP2 expr        {$<c>$=(char*)malloc((strlen($<c>1)+strlen($<c>3))*sizeof(char));strcpy($<c>$,$<c>2);strcat($<c>$,$<c>1);strcat($<c>$,$<c>3);}
  | '(' expr ')'    {$<c>$=(char*)malloc(strlen($<c>2)*sizeof(char)); strcpy($<c>$,$<c>2);}
  | STR             {$<c>$=(char*)malloc(strlen($<c>1)*sizeof(char)); strcpy($<c>$,$<c>1);}
  ;

%%

void yyerror(char const *s)
{
    printf("yyerror  %s\n",s);
    return ;
}
int main()
{
  yyparse();
  return 1;
}
