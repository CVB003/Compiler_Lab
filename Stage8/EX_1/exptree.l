%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	#include "exptree.h"

	int number;
	char string_const[100]="";
	char temp_str[100]="";
	
	
	

%}

%%

[0-9]+	{number = atoi(yytext); yylval.no = createTree(number,"INT","", num,NULL,NULL); return NUM;}
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
[()=;,{}.]	{return *yytext;}
"type"	{return TYPE;}
"endtype" {return ENDTYPE;}
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
"breakpoint" {yylval.no=createTree(-1,"void","",brkpnd,NULL,NULL); return BRKPND;}
"break"	{yylval.no=createTree(-1,"void","",brek,NULL,NULL);return BREAK;}

"continue"  {yylval.no=createTree(-1,"void","",cont,NULL,NULL);return CONTINUE;}
"repeat" {return REPEAT;}
"return" {printf("return seen\n");return RETURN;}
"until" {return UNTIL;}
"main" {printf("main reached\n");return MAIN;}
"decl"	{printf("decl detected\n");return DECL;}
"alloc" {printf("alloc detected\n");return ALLOC;}
"class" {return CLASS;}
"endclass" {return ENDCLASS;}
"self" {yylval.no=createTree(-1,"void","self",selfnd,NULL,NULL);return SELF;}
"extends" {return EXTENDS;}
"delete" {return DELETE;}
"new" {return NEW;}
"null" {return NULL_SPL;}
"free" {return FREE;}
"initialize" {return INITIALIZE;}
"enddecl"	{printf("enddecl detected\n");return ENDDECL;}
"int"	{printf("int detected\n");yylval.no=createTree(-1,"INT","INT",intnd,NULL,NULL);return INT;}
"str"   {yylval.no=createTree(-1,"STR","STR",strnd,NULL,NULL);return STR;}
"AND"   {return AND;}
[A-Za-z][A-Za-z0-9]*   {struct Gsymbol* t=lookup(yytext);
			struct Typetable* ty=TLookup(yytext);
			if(ty!=NULL){
				yylval.no=createTree(-1,ty->name,yytext,id,NULL,NULL);
			}else if(t==NULL){
				yylval.no=createTree(-1,"INT",yytext,id,NULL,NULL);	
			}else{
				if(t->type!=NULL){
					yylval.no=createTree(-1,t->type->name,yytext,id,NULL,NULL);
				}else{
					yylval.no=createTree(-1,"void",yytext,id,NULL,NULL);
				}
					
			}
			 return ID;}
(\")([A-Za-z0-9 ]*)(\") {strncpy(string_const,temp_str,100);strncpy(string_const,yytext+1,yyleng-2); printf("here %s \n",string_const); yylval.no=createTree(-1,"STR",string_const,str_const,NULL,NULL);return STRING;}

.	{yyerror("unknown character\n");exit(1);}


%%

int yywrap(void) {
	return 1;
}
