%{

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
extern FILE* yyin;
%}


%token LETTER
%token DIGIT

%%
start : STRING '\n'		{printf("VALID\n"); exit(1);}
      ;
    
STRING: STRING LETTER  
	| STRING DIGIT 
	| LETTER    
	;

%%


yyerror(char const *s)
{
    printf("INVALID");
}

yylex(){
    char c;
    c = getchar();
    if(isalpha(c)){
         return LETTER;
    }
    else if(isdigit(c)){
        return DIGIT;         
    }
    else if(c==' '){
        yylex();
    }else{
        return c;
    }
}

main(int argc,char*argv[])
{
	
	yyparse();
	return 1;
}
