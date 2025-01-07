%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "exptree.h"
	#include "exptree.c"
	int yylex(void);
	extern FILE* fp;
	
%}

%union{
	struct tnode *no;
	
}
%type <no> expr program
%token <no> NUM 
%token PLUS MINUS MUL DIV END 

%left PLUS MINUS
%left MUL DIV

%%

program : expr END	{
                     
				printf("Answer : %d\n",evaluate($1));
				printf("Prefix:\n");
				prefix($1);
				printf("\nPostfix:\n");
				postfix($1);
				printf("\n");
				before_code();
				int i=code_gen($1);
				after_code(i);
				exit(1);
			}
		;

expr : PLUS expr expr		{$$ = makeOperatorNode('+',$2,$3);}
	 | MINUS expr expr  	{$$ = makeOperatorNode('-',$2,$3);}
	 | MUL expr expr	{$$ = makeOperatorNode('*',$2,$3);}
	 | DIV expr expr	{$$ = makeOperatorNode('/',$2,$3);}
	 | '(' expr ')'		{$$ = $2;}
	 | NUM			{$$ = $1;}
	 ;

%%

yyerror(char const *s)
{
    printf("yyerror %s",s);
}


int main(void) {
	yyparse();
	
	return 0;
}
