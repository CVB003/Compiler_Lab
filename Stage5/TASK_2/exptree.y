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
%type <no> expr program stmt slist inputstmt outputstmt assgstmt ifstmt whilestmt repeatstmt dowhilestmt type Gdeclblock Fdefblock Mainblock Gdecllist Gdecl Gidlist Gid Fdef Paramlist Param Ldecllist Ldeclblock Ldecl Idlist body retstmt Arglist
%token <no> NUM ID READ WRITE BREAK CONTINUE INT STR STRING
%token PLUS MINUS MUL DIV END BEGN LT GT LE GE NE EQ IF THEN ELSE ENDIF WHILE DO ENDWHILE DECL ENDDECL REPEAT UNTIL MAIN RETURN

%left LT GT LE GE NE EQ
%left PLUS MINUS
%left MUL DIV MOD

%%

program : Gdeclblock Fdefblock Mainblock	{
						struct tnode* t1=createTree(-1,notype,"",cnn,$2,$3);
						 $$=createTree(-1,notype,"",cnn,$1,t1);
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
     | ID '(' ')'	{$$=createTree(-1,notype,"",funcdecl,$1,NULL);}
     | ID	{$$=$1;}
     ;
  
Fdefblock : Fdefblock Fdef	{$$=createTree(-1,notype,"",fdefblk,$1,$2);}
	    | Fdef	{$$=$1;
	    		printf("\n Printing Local symbol table\n");
			struct Lsymbol* t=$1->Lentry;
			while(t!=NULL){
				if(t->type==inttype){
					printf("INT ");
				}else{
					printf("STR ");
				}
				printf("%s ",t->name);
				printf("%d ",t->binding);
							
				t=t->next;
							
			}
	    
	    
	    		}
	    ;
	
Fdef : type ID '(' Paramlist ')' '{' Ldeclblock body '}'	{if(lookup($2->varname)==NULL){
	 								printf("1Funcn %s is undeclared\n",$2->varname);
	 								exit(1);
	 			 				}
	 			 				$$=createTree(-1,$1->type,"",fndef,createTree(-1,notype,"",cnn,$1,$2),createTree(-1,notype,"",cnn,$4,createTree(-1,notype,"",cnn,$7,$8)));
	 			 				
	 			 				check_decl($1->type,$8);}
      | type ID '(' ')' '{' Ldeclblock body '}'			{if(lookup($2->varname)==NULL){
	 								printf("2Funcn %s is undeclared\n",$2->varname);
	 								exit(1);
	 			 				}
	 			 				$$=createTree(-1,$1->type,"",fndef,createTree(-1,notype,"",cnn,$1,$2),createTree(-1,notype,"",cnn,NULL,createTree(-1,notype,"",cnn,$6,$7)));
	 			 				check_decl($1->type,$7);
	 			 				}
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
	    
Ldecl : type Idlist ';'{$$=createTree(-1,notype,"",ldecl,$1,$2);}
	;

Idlist : Idlist ',' ID {$$=createTree(-1,notype,"",idlst,$1,$3);}
	| ID {$$=$1;}
	;

Mainblock : INT MAIN '(' ')' '{' Ldeclblock body '}' {
							$$=createTree(-1,notype,"",mainnd,$6,$7);
							printf("\n Printing Local symbol table\n");
							struct Lsymbol* t=$1->Lentry;
							while(t!=NULL){
								if(t->type==inttype){
									printf("INT ");
								}else{
									printf("STR ");
							}
							printf("%s ",t->name);
							printf("%d ",t->binding);
							
							t=t->next;
							
							}
							check_decl(inttype,$7);
							}
	    ;
	 
body : BEGN slist END {$$=$2;}
	;
			
slist : slist stmt	{$$=createTree(-1,notype,"",cnn,$1,$2);}
	| stmt		{$$ = $1;}
	;

ifstmt : IF '(' expr ')' THEN slist ELSE slist ENDIF ';'	{struct tnode* t=createTree(-1,notype,"",el,$6,$8);$$=createTree(-1,notype,"",ifel,$3,t);}
	| IF '(' expr ')' THEN slist ENDIF ';'	{ struct tnode* t=createTree(-1,notype,"",el,$6,NULL);
						  
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
       | retstmt	{$$=$1;}
       ;

retstmt : RETURN expr ';'	{
				$$=createTree(-1,$2->type,"",retnd,$2,NULL);
				}
	;
 
inputstmt : READ '(' ID ')' ';' {
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

assgstmt : ID '=' expr ';' {
	 			 
	 			 $$ = createTree(-1,notype,"",asg,$1,$3);}
	  | ID '=' STRING ';' {
	 			 $$=createTree(-1,notype,"",asg,$1,$3);}
	  | ID '[' expr ']' '=' expr ';' {if(lookup($1->varname)==NULL){
	 					printf("Variable %s is undeclared\n",$1->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup($1->varname);
	 			        
	 			 	struct tnode* temp=createTree(-1,t->type,"",arrasg,$1,$3);
	 			 	$$=createTree(-1,notype,"",asg,temp,$6);
	 			 	
	  
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
	 | ID			{$$ = $1;}
	 | ID '[' expr ']'	{if(lookup($1->varname)==NULL){
	 				printf("Variable %s is undeclared\n",$1->varname);
	 				exit(1);
	 			 }
	 			 struct Gsymbol* t=lookup($1->varname);
	 			 
	 			 $$=createTree(-1,t->type,"",arrval,$1,$3);
	 			}
	 | ID '(' ')'		{
	 			 struct Gsymbol* t=lookup($1->varname);
	 			 if(lookup($1->varname)==NULL){
	 				printf("3Funcn %s is undeclared\n",$1->varname);
	 				exit(1);
	 			 }
	 			 if(t->paramlist!=NULL){
	 			 	printf("No arguments provided to funcn %s\n",t->name);
	 			 	exit(1);
	 			 }
	 			 $$=createTree(-1,t->type,"",fncall,$1,NULL);
	 			 }
	 | ID '(' Arglist ')'	{
	 			if(lookup($1->varname)==NULL){
	 				printf("4Funcn %s is undeclared\n",$1->varname);
	 				exit(1);
	 			 }
	 			 struct Gsymbol* t=lookup($1->varname);
	 			 
	 			 $$=createTree(-1,t->type,"",fncall,$1,$3);
	 			 }
	 ;

Arglist: Arglist ',' expr	{$$=createTree(-1,notype,"",arglst,$1,$3);}
	| expr	 {$$=$1;}
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
