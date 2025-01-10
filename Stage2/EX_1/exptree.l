%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	#include "exptree.h"

	int number;

%}

%%
[a-z]   {yylval.no=createTree(-1,-1,yytext,id,NULL,NULL); return ID;}
[0-9]+	{number = atoi(yytext); yylval.no = createTree(number,-1, "", num,NULL,NULL); return NUM;}
"+"	{return PLUS;}
"-"	{return MINUS;}
"*"	{return MUL;}
"/"	{return DIV;}
[ \t\n]	{}
[()=;]	{return *yytext;}
"begin" {return BEGN;}
"end"	{return END;}
"read"	{return READ;}
"write" {return WRITE;}
.	{yyerror("unknown character\n");exit(1);}

%%

int yywrap(void) {
	return 1;
}
