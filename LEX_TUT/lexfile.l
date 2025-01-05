
%option noyywrap
%{
	#include <stdio.h>
	int global_variable;
%}



number [0-9]+           
op     [-|+|*|/|^|=]    


%%

{number}  {printf("number");}
{op}      {printf("operator");}

%%

main(int argc, char* argv[])
{
	if(argc > 1)
	{
		FILE *fp = fopen(argv[1], "r");
		if(fp)
			yyin = fp;
	}
	yylex();
	return 1;
}
