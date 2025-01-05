%{
    #include <stdio.h> 
    #include "y.tab.h"

%}

OP1 [-+]
OP2 [*/]
%%

[a-zA-Z]+	{
	
	  
          yylval.c = (char*)malloc(yyleng*sizeof(char));
          strcpy(yylval.c,yytext);
          return STR;
        }
{OP1}	  {yylval.c = (char*)malloc(yyleng*sizeof(char));
          strcpy(yylval.c,yytext);return OP1;}
{OP2}	  {yylval.c = (char*)malloc(yyleng*sizeof(char));
          strcpy(yylval.c,yytext);return OP2;}
[()]	  {return *yytext;}
[\n]      {return *yytext;}

%%

yywrap()
{
	return 1;
}
