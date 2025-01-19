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
%type <no> expr program stmt slist inputstmt outputstmt assgstmt ifstmt whilestmt repeatstmt dowhilestmt type declarations declist decl varlist
%token <no> NUM ID READ WRITE BREAK CONTINUE INT STR STRING
%token PLUS MINUS MUL DIV END BEGN LT GT LE GE NE EQ IF THEN ELSE ENDIF WHILE DO ENDWHILE DECL ENDDECL REPEAT UNTIL

%left LT GT LE GE NE EQ
%left PLUS MINUS
%left MUL DIV MOD
%left ADDR

%%

program : declarations BEGN slist END ';'	{ $$=createTree(-1,notype,"",cnn,$1,$3);
						  
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
						  
						  printf("\n Generating code\n");
						  before_code();
						  code_gen($$);
						  after_code();
						  exit(0);
							
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
	 | READ '(' ID '[' expr ']' '[' expr ']' ')' ';' {if(lookup($3->varname)==NULL){
	 					printf("Variable %s is undeclared\n",$3->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup($3->varname);
	 			 
	 			 	struct tnode* temp=createTree(-1,t->type,"",arr2dasg,$3,createTree(-1,notype,"",cnn,$5,$8));
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
	  | ID '[' expr ']''[' expr ']' '=' expr ';' {if(lookup($1->varname)==NULL){
	 					printf("Variable %s is undeclared\n",$1->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup($1->varname);
	 			        printf("Reaching assg for id[ex]=expr\n");
	 			 	struct tnode* temp=createTree(-1,t->type,"",arr2dasg,$1,createTree(-1,notype,"",cnn,$3,$6));
	 			 	$$=createTree(-1,notype,"",asg,temp,$9);
	 			 	printf("Exiting assg for id[ex]=expr\n");
	  
	  				 }
	  | ID '[' expr ']' '=' STRING ';' {if(lookup($1->varname)==NULL){
	 					printf("Variable %s is undeclared\n",$1->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup($1->varname);
	 			 
	 			 	struct tnode* temp=createTree(-1,t->type,"",arrasg,$1,$3);
	 			 	$$=createTree(-1,notype,"",asg,temp,$6);}
	 | ID '[' expr ']' '[' expr ']' '=' STRING ';' {if(lookup($1->varname)==NULL){
	 							printf("Variable %s is undeclared\n",$1->varname);
	 							exit(1);
	 			 			}
	 			 			struct Gsymbol* t=lookup($1->varname);
	 			        		printf("Reaching assg for id[ex]=expr\n");
	 			 			struct tnode* temp=createTree(-1,t->type,"",arr2dasg,$1,createTree(-1,notype,"",cnn,$3,$6));
	 			 			$$=createTree(-1,notype,"",asg,temp,$9);
	 			 		printf("Exiting assg for id[ex]=expr\n");
	  
	  				 }
	  
	  | ID '=' ADDR ID ';'	{
	  			printf("Here..\n");
	  			if(lookup($1->varname)==NULL){
	  				printf("Ptr variable undeclared\n");
	  				exit(1);
	  			}
	  			if(lookup($4->varname)==NULL){
	  				printf("Variable undeclared\n");
	  				exit(1);
	  			}
	  			struct tnode*temp=createTree(-1,inttype,"",addr_id,$4,NULL);
	  			struct tnode*temp2=createTree(-1,inttype,"",addr_id,$1,NULL);
	  			$$=createTree(-1,notype,"",asg2,temp2,temp);
	  			}
	  | MUL expr '=' expr ';' {
	  			  struct tnode* temp=NULL;
	  			  if($2->type!=intptrtype ){
	  			  	printf("Type mismatch\n");
	  			  	exit(1);
	  			  }
	  			  temp=createTree(-1,inttype,"",ptrasg,$2,NULL);
	  			  $$=createTree(-1,notype,"",asg2,temp,$4);
	  
	  			  }
	  | MUL expr '=' STRING ';' {struct tnode* temp=NULL;
	  			  if($2->type!=strptrtype ){
	  			  	printf("Type mismatch\n");
	  			  	exit(1);
	  			  }
	  			  temp=createTree(-1,strtype,"",ptrasg,$2,NULL);
	  			  $$=createTree(-1,notype,"",asg2,temp,$4);}
	  
	  
	
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
	  | ID '[' NUM ']' {$$=createTree(-1,notype,"",arrdecl,$1,$3);}
	  | ID '[' NUM ']' '[' NUM ']' {$$=createTree(-1,notype,"",arr2ddecl,$1,createTree(-1,notype,"",cnn,$3,$6));}
	  | varlist ',' ID '[' NUM ']' {$$=createTree(-1,notype,"",varlst,$1,createTree(-1,notype,"",arrdecl,$3,$5));}
	  | varlist ',' ID '[' NUM ']' '[' NUM ']' {$$=createTree(-1,notype,"",varlst,$1,createTree(-1,notype,"",arr2ddecl,$3,createTree(-1,notype,"",cnn,$5,$8)));}
	  | MUL ID	{$$=createTree(-1,notype,"",ptrdecl,$2,NULL);}
	  | varlist ',' MUL ID	{$$=createTree(-1,notype,"",varlst,$1,createTree(-1,notype,"",ptrdecl,$4,NULL));}
	  ;

expr : expr PLUS expr		{if($1->type==intptrtype || $1->type==strptrtype){
					$$ = createTree(-1,$1->type,"",ps,$1,$3);
				}else if($3->type==intptrtype || $3->type==strptrtype){
					$$ = createTree(-1,$3->type,"",ps,$1,$3);
				}else{
					
					$$ = createTree(-1,inttype,"",ps,$1,$3);
				}
				}
				
	 | expr MINUS expr  	{if($1->type==intptrtype || $1->type==strptrtype){
					$$ = createTree(-1,$1->type,"",ps,$1,$3);
				}else if($3->type==intptrtype || $3->type==strptrtype){
					$$ = createTree(-1,$3->type,"",ps,$1,$3);
				}else{
					
					$$ = createTree(-1,inttype,"",ps,$1,$3);
				}}
	 | expr MUL expr	{if($1->type==intptrtype || $1->type==strptrtype){
					$$ = createTree(-1,$1->type,"",ps,$1,$3);
				}else if($3->type==intptrtype || $3->type==strptrtype){
					$$ = createTree(-1,$3->type,"",ps,$1,$3);
				}else{
					
					$$ = createTree(-1,inttype,"",ps,$1,$3);
				}}
	 | expr DIV expr	{if($1->type==intptrtype || $1->type==strptrtype){
					$$ = createTree(-1,$1->type,"",ps,$1,$3);
				}else if($3->type==intptrtype || $3->type==strptrtype){
					$$ = createTree(-1,$3->type,"",ps,$1,$3);
				}else{
					
					$$ = createTree(-1,inttype,"",ps,$1,$3);
				}}
	 | expr MOD expr	{if($1->type==intptrtype || $1->type==strptrtype){
					$$ = createTree(-1,$1->type,"",ps,$1,$3);
				}else if($3->type==intptrtype || $3->type==strptrtype){
					$$ = createTree(-1,$3->type,"",ps,$1,$3);
				}else{
					
					$$ = createTree(-1,inttype,"",ps,$1,$3);
				}}
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
	 | ID '[' expr ']' '[' expr ']'	{if(lookup($1->varname)==NULL){
	 				printf("Variable %s is undeclared\n",$1->varname);
	 				exit(1);
	 			 }
	 			 struct Gsymbol* t=lookup($1->varname);
	 			 
	 			 $$=createTree(-1,t->type,"",arr2dval,$1,createTree(-1,notype,"",cnn,$3,$6));
	 			}
	 | MUL '(' expr ')'	{if($3->type==intptrtype){
	 			$$=createTree(-1,inttype,"",ptrval,$3,NULL);
	 		}else if($3->type==strptrtype){
	 			$$=createTree(-1,strtype,"",ptrval,$3,NULL);
	 		}else{
	 			printf("Type mismatch in pointer,non-int and non-str type found\n");
	 			exit(1);
	 		}	
	 		 }
	 | MUL ID	{if($2->type==intptrtype){
	 			$$=createTree(-1,inttype,"",ptrval,$2,NULL);
	 		}else if($2->type==strptrtype){
	 			$$=createTree(-1,strtype,"",ptrval,$2,NULL);
	 		}else{
	 			printf("Type mismatch in pointer,non-int and non-str type found\n");
	 			exit(1);
	 		}}
	 
	 
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
