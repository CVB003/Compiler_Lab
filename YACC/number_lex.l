%{
  #include "y.tab.h"
  #include<stdlib.h>
  #include<stdio.h>
%}

number  [0-9]+

%%

{number} {yylval = atoi(yytext); return DIGIT;}

(.|\n)	{yylval=atoi(yytext); return *yytext;}

%%
int yywrap()
{
	return 1;
}

