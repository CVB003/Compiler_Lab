%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "exptree.h"
	#include <string.h>
	#include "exptree.c"
	int yylex(void);
	extern FILE* fp;
	extern FILE* yyin;
	extern struct Gsymbol* symbtable;
	
%}

%union{
	struct tnode *no;
	
}
%type <no> expr program stmt slist inputstmt outputstmt assgstmt ifstmt whilestmt type declarations declist decl varlist
%token <no> NUM ID READ WRITE BREAK CONTINUE INT STR STRING
%token PLUS MINUS MUL DIV END BEGN LT GT LE GE NE EQ IF THEN ELSE ENDIF WHILE DO ENDWHILE DECL ENDDECL

%left LT GT LE GE NE EQ
%left PLUS MINUS
%left MUL DIV

%%

program : declarations BEGN slist END ';'	{ $$=createTree(-1,notype,"",cnn,$1,$3);
						  prefix($$);
						  printf("\n Printing symbol table\n");
						  struct Gsymbol* t=symbtable;
						  while(t!=NULL){
						  	if(t->type==inttype){
						  		printf("INT ");
						  	}else{
								printf("STR ");
							}
							printf("%s ",t->name);
							printf("%d ",t->size);
							printf("%d ",t->binding);
							t=t->next;
							
						  }
							
						}
	| declarations BEGN END ';'	{$$=$1;
					 printf("Program is empty\n");
					 printf("\n Printing symbol table\n");
						  struct Gsymbol* t=symbtable;
						  while(t!=NULL){
						  	if(t->type==inttype){
						  		printf("INT ");
						  	}else{
								printf("STR ");
							}
							printf("%s ",t->name);
							printf("%d ",t->size);
							printf("%d ",t->binding);
							t=t->next;
							
						  }
					}
		;
		
slist : slist stmt	{$$=createTree(-1,notype,"",cnn,$1,$2);}
	| stmt		{$$ = $1;}
	;

ifstmt : IF '(' expr ')' THEN slist ELSE slist ENDIF ';'	{struct tnode* t=createTree(-1,notype,"",el,$6,$8);$$=createTree(-1,notype,"",ifel,$3,t);}
	| IF '(' expr ')' THEN slist ENDIF ';'	{struct tnode* t=createTree(-1,notype,"",el,$6,NULL);$$=createTree(-1,notype,"",ifel,$3,$6);}
	;

whilestmt : WHILE '(' expr ')' DO slist ENDWHILE ';'	{$$=createTree(-1,notype,"",whl,$3,$6);}
	  ;
	
stmt : inputstmt	{$$ = $1;}
       | outputstmt	{$$ = $1;}
       | assgstmt	{$$ = $1;}
       | ifstmt		{$$= $1;}
       | whilestmt	{$$ = $1;}
       | BREAK ';'	{$$=$1;}
       | CONTINUE ';'	{$$=$1;}
       ;
 
inputstmt : READ '(' ID ')' ';' {if(lookup($3->varname)==NULL){
	 				printf("Variable %s is undeclared\n",$3->varname);
	 				exit(1);
	 			 }
	 			 $$=createTree(-1,notype,"",rd,$3,NULL);}
		;
		
outputstmt : WRITE '(' expr ')' ';' {$$ = createTree(-1,notype,"",wr,$3,NULL);}
	    | WRITE '(' STRING ')' ';' {$$ = createTree(-1,notype,"",wr,$3,NULL);}
	       ;

assgstmt : ID '=' expr ';' {if(lookup($1->varname)==NULL){
	 				printf("Variable %s is undeclared\n",$1->varname);
	 				exit(1);
	 			 }
	 			 $$ = createTree(-1,notype,"",asg,$1,$3);}
	  | ID '=' STRING ';' {if(lookup($1->varname)==NULL){
	 				printf("Variable %s is undeclared\n",$1->varname);
	 				exit(1);
	 			 }
	 			 $$=createTree(-1,notype,"",asg,$1,$3);}
	   ;

declarations : DECL declist ENDDECL	{$$=$2;}
	       | DECL ENDDECL	{$$=NULL;}
	       ;

declist : declist decl {$$=createTree(-1,notype,"",declst,$1,$2);}
	   | decl	{$$=$1;}
	   ;
	   
decl : type varlist ';'	{assign_type($2,$1->type);$$=createTree(-1,notype,"",decl,$1,$2);}

type : INT	{$$=$1;}
       | STR	{$$=$1;}
       ;
       
varlist : varlist ',' ID  {$$=createTree(-1,notype,"",varlst,$1,$3);}
	  | ID	{$$=$1;}
	  ;

expr : expr PLUS expr		{$$ = createTree(-1,inttype,"",ps,$1,$3);}
	 | expr MINUS expr  	{$$ = createTree(-1,inttype,"",ms,$1,$3);}
	 | expr MUL expr	{$$ = createTree(-1,inttype,"",ml,$1,$3);}
	 | expr DIV expr	{$$ = createTree(-1,inttype,"",dv,$1,$3);}
	 | expr LT expr		{$$ = createTree(-1,booltype,"",lt,$1,$3);}
	 | expr GT expr		{$$ = createTree(-1,booltype,"",gt,$1,$3);}
	 | expr GE expr		{$$ = createTree(-1,booltype,"",ge,$1,$3);}
	 | expr LE expr		{$$ = createTree(-1,booltype,"",le,$1,$3);}
	 | expr NE expr		{$$ = createTree(-1,booltype,"",ne,$1,$3);}
	 | expr EQ expr		{$$ = createTree(-1,booltype,"",eq,$1,$3);}
	 | '(' expr ')'		{$$ = $2;}
	 | NUM			{$$ = $1;}
	 | ID			{if(lookup($1->varname)==NULL){
	 				printf("Variable %s is undeclared\n",$1->varname);
	 				exit(1);
	 			 }
	 			 $$ = $1;}
	 ;

%%

yyerror(char const *s)
{
    printf("yyerror %s",s);
}


int main(int argc,char* argv[]) {

	if(argc > 1){
		FILE *fp = fopen(argv[1], "r");
		if(fp)
	  		yyin = fp;
  	}
	yyparse();
	
	return 0;
}
