%{
    #include <stdio.h> 
    #include "y.tab.h"
%}

%%

[a-zA-Z]	{
          yylval.c = *(yytext);
          return CHAR;
        }
"+"	  {return *(yytext);}
"-"	  {return *(yytext);}
"*"	  {return *(yytext);}
"/"	  {return *(yytext);}
[()]	  {return *yytext;}
[\n]      {return *yytext;}

%%

yywrap()
{
	return 1;
}
