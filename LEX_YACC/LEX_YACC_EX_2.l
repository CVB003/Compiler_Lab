%{
    #include <stdio.h> 
    #include "y.tab.h"

%}

%%

[a-zA-Z]+	{
	
	  
          yylval.c = (char*)malloc(yyleng*sizeof(char));
          strcpy(yylval.c,yytext);
          return STR;
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
