%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	#include "exptree.h"

	int number;
	char string_const[100]="";
	
	
	

%}

%%

[0-9]+	{number = atoi(yytext); yylval.no = createTree(number,inttype, "", num,NULL,NULL); return NUM;}
"+"	{return PLUS;}
"-"	{return MINUS;}
"*"	{return MUL;}
"/"	{return DIV;}
"%"	{return MOD;}
">"	{return GT;}
"<"	{return LT;}
">="	{return GE;}
"<="	{return LE;}
"!="	{return NE;}
"=="	{return EQ;}
[\[\]]  {return *yytext;}
[ \t\n]	{}
[()=;,{}]	{return *yytext;}
"begin" {return BEGN;}
"end"	{return END;}
"read"	{printf("read \n");return READ;}
"write" {printf("write \n");return WRITE;}
"if"	{printf("If seen\n");return IF;}
"then"	{printf("then seen\n");return THEN;}
"while"	{return WHILE;}
"do"	{return DO;}
"endif"	{printf("endif seen\n");return ENDIF;}
"else"	{printf("else seen\n");return ELSE;}
"endwhile" {printf("endwhil seen\n");return ENDWHILE;}
"break"	{yylval.no=createTree(-1,notype,"",brek,NULL,NULL);return BREAK;}
"continue"  {yylval.no=createTree(-1,notype,"",cont,NULL,NULL);return CONTINUE;}
"repeat" {return REPEAT;}
"return" {printf("return seen\n");return RETURN;}
"until" {return UNTIL;}
"main" {printf("main reached\n");return MAIN;}
"decl"	{printf("decl detected\n");return DECL;}
"enddecl"	{printf("enddecl detected\n");return ENDDECL;}
"int"	{printf("int detected\n");yylval.no=createTree(-1,inttype,"",intnd,NULL,NULL);return INT;}
"str"   {yylval.no=createTree(-1,strtype,"",strnd,NULL,NULL);return STR;}
[A-Za-z][A-Za-z0-9]*   {struct Gsymbol* t=lookup(yytext);
			if(t==NULL){
				yylval.no=createTree(-1,inttype,yytext,id,NULL,NULL);	
			}else{
				yylval.no=createTree(-1,t->type,yytext,id,NULL,NULL);	
			}
			 return ID;}
(\")([A-Za-z0-9 ]*)(\") {strncpy(string_const,yytext+1,yyleng-2); printf("here %s \n",string_const); yylval.no=createTree(-1,strtype,string_const,str_const,NULL,NULL);return STRING;}

.	{yyerror("unknown character\n");exit(1);}


%%

int yywrap(void) {
	return 1;
}
