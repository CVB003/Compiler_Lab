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
%type <no> expr program stmt slist inputstmt outputstmt assgstmt ifstmt whilestmt repeatstmt dowhilestmt type Gdeclblock Fdefblock Mainblock Gdecllist Gdecl Gidlist Gid Fdef Paramlist Param Ldecllist Ldeclblock Ldecl Idlist body
%token <no> NUM ID READ WRITE BREAK CONTINUE INT STR STRING
%token PLUS MINUS MUL DIV END BEGN LT GT LE GE NE EQ IF THEN ELSE ENDIF WHILE DO ENDWHILE DECL ENDDECL REPEAT UNTIL MAIN

%left LT GT LE GE NE EQ
%left PLUS MINUS
%left MUL DIV MOD

%%

program : Gdeclblock Fdefblock Mainblock	{struct tnode* t=createTree(-1,notype,"",cnn,$2,$3);
						 $$=createTree(-1,notype,"",cnn,$1,t);}
	 | Gdeclblock Mainblock			{ $$=createTree(-1,notype,"",cnn,$1,$2);
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
							printf("\n Paramlist: name type\n");
							struct Paramstruct* p=t->paramlist;
							while(p!=NULL){
								printf("%s ",p->name);
								if(p->type==inttype){
						  			printf("INT ");
						  		}else{
									printf("STR ");
								}
								p=p->next;
							}
							
							t=t->next;
							
						  }
						  }	
	 					
	 | Mainblock				{$$=$1;}
		;

Gdeclblock : DECL Gdecllist ENDDECL	{$$=createTree(-1,notype,"",gdeclblk,$2,NULL);}
	    | DECL ENDDECL	{$$=NULL;}
	    ;
	    
Gdecllist : Gdecllist Gdecl	{$$=createTree(-1,notype,"",gdeclst,$1,$2);}
	    | Gdecl	{$$=$1;}
	    ;
	
Gdecl : type Gidlist ';'	{assign_type($2,$1->type);$$=createTree(-1,notype,"",gdecl,$1,$2);}
	;
	
Gidlist : Gidlist ',' Gid	{$$=createTree(-1,notype,"",gidlst,$1,$3);}
	  | Gid	{$$=$1;}
	  ;    
Gid : ID '[' NUM ']'	{$$=createTree(-1,notype,"",arrdecl,$1,$3);}
     | ID '(' Paramlist ')'	{$$=createTree(-1,notype,"",funcdecl,$1,$3);}
     | ID '(' ')'	{printf("seeing this?\n");$$=createTree(-1,notype,"",funcdecl,$1,NULL);}
     | ID	{printf("how many?\n");$$=$1;}
     ;
  
Fdefblock : Fdefblock Fdef	{}
	    | Fdef	{}
	    ;
	
Fdef : type ID '(' Paramlist ')' '{' Ldeclblock body '}'	{}
      | type ID '(' ')' '{' Ldeclblock body '}'			{}
	;

Paramlist : Paramlist  ',' Param	{$$=createTree(-1,notype,"",paramlst,$1,$3);}
	    | Param	{$$=$1;}
	    ;
	    
Param : type ID	{$$=createTree(-1,notype,"",param,$1,$2);}
	;

type : INT	{$$=$1;}
       | STR	{$$=$1;}
       ;
       
Ldeclblock : DECL Ldecllist ENDDECL {$$=createTree(-1,notype,"",ldeclblk,$2,NULL);}
	    | DECL ENDDECL	{$$=NULL;}
	    ;
	    
Ldecllist : Ldecllist Ldecl {$$=createTree(-1,notype,"",ldecllst,$1,$2);}
	    | Ldecl {$$=$1;}
	    ;
	    
Ldecl : type Idlist {printf("is this happening\n");assign_type($2,$1->type); $$=createTree(-1,notype,"",ldecl,$1,$2);}
	;

Idlist : Idlist ',' ID {$$=createTree(-1,notype,"",idlst,$1,$3);}
	| ID {$$=$1;}
	;

Mainblock : INT MAIN '(' ')' '{' Ldeclblock body '}' {$$=createTree(-1,notype,"",mainnd,$6,$7);}
	    ;
	 
body : BEGN slist END {$$=$2;}
	;
			
slist : slist stmt	{$$=createTree(-1,notype,"",cnn,$1,$2);}
	| stmt		{$$ = $1;}
	;

ifstmt : IF '(' expr ')' THEN slist ELSE slist ENDIF ';'	{struct tnode* t=createTree(-1,notype,"",el,$6,$8);$$=createTree(-1,notype,"",ifel,$3,t);}
	| IF '(' expr ')' THEN slist ENDIF ';'	{ struct tnode* t=createTree(-1,notype,"",el,$6,NULL);
						  printf("exiting endif\n");
					          $$=createTree(-1,notype,"",ifel,$3,t);}
	;

whilestmt : WHILE '(' expr ')' DO slist ENDWHILE ';'	{$$=createTree(-1,notype,"",whl,$3,$6);}
	  ;
	
repeatstmt : REPEAT slist UNTIL '(' expr ')' ';'  {$$=createTree(-1,notype,"",rpt,$2,$5);}

dowhilestmt: DO slist WHILE '(' expr ')' ';'	{$$=createTree(-1,notype,"",dow,$2,$5);}

stmt : inputstmt	{$$ = $1;}
       | outputstmt	{$$ = $1;}
       | assgstmt	{$$ = $1;}
       | ifstmt		{$$= $1;}
       | whilestmt	{$$ = $1;}
       | BREAK ';'	{$$=$1;}
       | CONTINUE ';'	{$$=$1;}
       | repeatstmt	{$$=$1;}
       | dowhilestmt	{$$=$1;}
       ;
 
inputstmt : READ '(' ID ')' ';' {if(lookup($3->varname)==NULL){
	 				printf("Variable %s is undeclared\n",$3->varname);
	 				exit(1);
	 			 }
	 			 $$=createTree(-1,notype,"",rd,$3,NULL);}
	  | READ '(' ID '[' expr ']' ')' ';' {if(lookup($3->varname)==NULL){
	 					printf("Variable %s is undeclared\n",$3->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup($3->varname);
	 			 
	 			 	struct tnode* temp=createTree(-1,t->type,"",arrasg,$3,$5);
	 			 	$$=createTree(-1,notype,"",rd,temp,NULL);}
		;
		
outputstmt : WRITE '(' expr ')' ';' {$$ = createTree(-1,notype,"",wr,$3,NULL);}
	    | WRITE '(' STRING ')' ';' {$$ = createTree(-1,notype,"",wr,$3,NULL);}
	       ;

assgstmt : ID '=' expr ';' {if(lookup($1->varname)==NULL){
	 				printf("Variable %s is undeclared\n",$1->varname);
	 				exit(1);
	 			 }
	 			 printf("Reaching assg for id=expr\n");
	 			 $$ = createTree(-1,notype,"",asg,$1,$3);}
	  | ID '=' STRING ';' {if(lookup($1->varname)==NULL){
	 				printf("Variable %s is undeclared\n",$1->varname);
	 				exit(1);
	 			 }
	 			 $$=createTree(-1,notype,"",asg,$1,$3);}
	  | ID '[' expr ']' '=' expr ';' {if(lookup($1->varname)==NULL){
	 					printf("Variable %s is undeclared\n",$1->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup($1->varname);
	 			        printf("Reaching assg for id[ex]=expr\n");
	 			 	struct tnode* temp=createTree(-1,t->type,"",arrasg,$1,$3);
	 			 	$$=createTree(-1,notype,"",asg,temp,$6);
	 			 	printf("Exiting assg for id[ex]=expr\n");
	  
	  				 }
	  | ID '[' expr ']' '=' STRING ';' {if(lookup($1->varname)==NULL){
	 					printf("Variable %s is undeclared\n",$1->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup($1->varname);
	 			 
	 			 	struct tnode* temp=createTree(-1,t->type,"",arrasg,$1,$3);
	 			 	$$=createTree(-1,notype,"",asg,temp,$6);
	  
	  
	  
	  				   }
	   ;


expr : expr PLUS expr		{$$ = createTree(-1,inttype,"",ps,$1,$3);}
	 | expr MINUS expr  	{$$ = createTree(-1,inttype,"",ms,$1,$3);}
	 | expr MUL expr	{$$ = createTree(-1,inttype,"",ml,$1,$3);}
	 | expr DIV expr	{$$ = createTree(-1,inttype,"",dv,$1,$3);}
	 | expr MOD expr	{$$ = createTree(-1,inttype,"",mod,$1,$3);}
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
	 | ID '[' expr ']'	{if(lookup($1->varname)==NULL){
	 				printf("Variable %s is undeclared\n",$1->varname);
	 				exit(1);
	 			 }
	 			 struct Gsymbol* t=lookup($1->varname);
	 			 
	 			 $$=createTree(-1,t->type,"",arrval,$1,$3);
	 			}
	 | ID '(' ')'		
	 | ID '(' Arglist ')'	
	 ;

Arglist: Arglist ',' expr
	| expr	 
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
