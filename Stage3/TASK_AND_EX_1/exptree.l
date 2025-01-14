%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	#include "exptree.h"

	int number;

%}

%%
[a-z]   {yylval.no=createTree(-1,inttype,yytext,id,NULL,NULL); return ID;}
[0-9]+	{number = atoi(yytext); yylval.no = createTree(number,inttype, "", num,NULL,NULL); return NUM;}
"+"	{return PLUS;}
"-"	{return MINUS;}
"*"	{return MUL;}
"/"	{return DIV;}
">"	{return GT;}
"<"	{return LT;}
">="	{return GE;}
"<="	{return LE;}
"!="	{return NE;}
"=="	{return EQ;}
[ \t\n]	{}
[()=;]	{return *yytext;}
"begin" {return BEGN;}
"end"	{return END;}
"read"	{return READ;}
"write" {return WRITE;}
"if"	{printf("If seen\n");return IF;}
"then"	{printf("then seen\n");return THEN;}
"while"	{return WHILE;}
"do"	{return DO;}
"endif"	{return ENDIF;}
"else"	{return ELSE;}
"endwhile" {return ENDWHILE;}

.	{yyerror("unknown character\n");exit(1);}

%%

int yywrap(void) {
	return 1;
}
