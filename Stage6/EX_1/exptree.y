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
%type <no> expr program stmt slist inputstmt outputstmt assgstmt ifstmt whilestmt repeatstmt dowhilestmt type Gdeclblock Fdefblock Mainblock Gdecllist Gdecl Gidlist Gid Fdef Paramlist Param Ldecllist Ldeclblock Ldecl Idlist body retstmt Arglist Field
Typedefblock Typedeflist Typedef Fielddeclist Fielddecl
%token <no> NUM ID READ WRITE BREAK CONTINUE INT STR STRING
%token PLUS MINUS MUL DIV END BEGN LT GT LE GE NE EQ IF THEN ELSE ENDIF WHILE DO ENDWHILE DECL ENDDECL REPEAT UNTIL MAIN RETURN AND TYPE ENDTYPE ALLOC NULL_SPL FREE INITIALIZE

%left AND
%left LT GT LE GE NE EQ
%left PLUS MINUS
%left MUL DIV MOD

%%

program : Typedefblock Gdeclblock Fdefblock Mainblock	{
						struct tnode* t1=createTree(-1,"void","",cnn,$3,$4);
						 $$=createTree(-1,"void","",cnn,$2,t1);
						printf("\n Printing symbol table\n");
						  struct Gsymbol* t=symbtable;
						 
							
						  }
	 | Typedefblock Gdeclblock Mainblock			{ $$=createTree(-1,"void","",cnn,$2,$3);
	 					 printf("\n Printing symbol table\n");
						  struct Gsymbol* t=symbtable;
						 
						  }	
	 					
	 | Mainblock				{$$=$1;}
		;

Gdeclblock : DECL Gdecllist ENDDECL	{$$=createTree(-1,"void","",gdeclblk,$2,NULL);
					 before_code();
					}
	    | DECL ENDDECL	{$$=NULL;
	    			before_code();
	    			}
	    ;
	    
Gdecllist : Gdecllist Gdecl	{$$=createTree(-1,"void","",gdeclst,$1,$2);}
	    | Gdecl	{$$=$1;}
	    ;
	
Gdecl : type Gidlist ';'	{assign_type($2,$1->type);$$=createTree(-1,"void","",gdecl,$1,$2);}
	;
	
Gidlist : Gidlist ',' Gid	{$$=createTree(-1,"void","",gidlst,$1,$3);}
	  | Gid	{$$=$1;}
	  ;    
Gid : ID '[' NUM ']'	{$$=createTree(-1,"void","",arrdecl,$1,$3);}
     | ID '(' Paramlist ')'	{$$=createTree(-1,"void","",funcdecl,$1,$3);}
     | ID '(' ')'	{$$=createTree(-1,"void","",funcdecl,$1,NULL);}
     | ID	{$$=$1;}
     ;
  
Fdefblock : Fdefblock Fdef	{$$=createTree(-1,"void","",fdefblk,$1,$2);}
	    | Fdef	{$$=$1;
	    		
	    
	    
	    		}
	    ;
	
Fdef : type ID '(' Paramlist ')' '{' Ldeclblock body '}'	{if(lookup($2->varname)==NULL){
	 								printf("1Funcn %s is undeclared\n",$2->varname);
	 								exit(1);
	 			 				}
	 			 				$$=createTree(-1,$1->type->name,"",fndef,createTree(-1,"void","",cnn,$1,$2),createTree(-1,"void","",cnn,$4,createTree(-1,"void","",cnn,$7,$8)));
	 			 				
	 			 				check_decl($1->type,$8);
	 			 				printf("REACH HERE\n");
	 			 				code_gen($$);
	 			 				printf("REACH AND HERE\n");
	 			 				destroy_lsymbtable();
	 			 				
	 			 				
	 			 				
	 			 				}
	 			 				
	 			 				
	 			 				
      | type ID '(' ')' '{' Ldeclblock body '}'			{if(lookup($2->varname)==NULL){
	 								printf("2Funcn %s is undeclared\n",$2->varname);
	 								exit(1);
	 			 				}
	 			 				$$=createTree(-1,$1->type->name,"",fndef,createTree(-1,"void","",cnn,$1,$2),createTree(-1,"void","",cnn,NULL,createTree(-1,"void","",cnn,$6,$7)));
	 			 				check_decl($1->type,$7);
	 			 				
	 			 				code_gen($$);
	 			 				destroy_lsymbtable();
	 			 				}
	;

Paramlist : Paramlist  ',' Param	{$$=createTree(-1,"void","",paramlst,$1,$3);}
	    | Param	{$$=$1;}
	    ;
	    
Param : type ID	{$$=createTree(-1,"void","",param,$1,$2);}
	;

type : INT	{$$=$1;}
       | STR	{$$=$1;}
       | ID	{$$=$1;}
       ;
       
Ldeclblock : DECL Ldecllist ENDDECL {$$=createTree(-1,"void","",ldeclblk,$2,NULL);}
	    | DECL ENDDECL	{$$=NULL;}
	    ;
	    
Ldecllist : Ldecllist Ldecl {$$=createTree(-1,"void","",ldecllst,$1,$2);}
	    | Ldecl {$$=$1;}
	    ;
	    
Ldecl : type Idlist ';'{$$=createTree(-1,"void","",ldecl,$1,$2);}
	;

Idlist : Idlist ',' ID {$$=createTree(-1,"void","",idlst,$1,$3);}
	| ID {$$=$1;}
	;

Mainblock : INT MAIN '(' ')' '{' Ldeclblock body '}' {
							$$=createTree(-1,"void","",mainnd,$6,$7);
							printf("\n Printing Local symbol table\n");
							struct Lsymbol* t=$1->Lentry;
							
							check_decl(TLookup("INT"),$7);
							
							code_gen($$);
							destroy_lsymbtable();
							}
	    ;
	 
Typedefblock: TYPE Typedeflist ENDTYPE	{$$=$2;}
	     | TYPE ENDTYPE	{$$=NULL;}
	     ;
	     
Typedeflist: Typedeflist Typedef {$$=createTree(-1,"void","",typedeflst,$1,$2);}
	     | Typedef {$$=$1;}
	     ;
	    
Typedef: ID '{' Fielddeclist '}' {struct Fieldlist* fields=convert_fldlst($3,$1->varname);TInstall($1->varname,count_fields(fields),fields);$$=createTree(-1,"void","",typedefnd,$1,$3);}
	;
	
Fielddeclist: Fielddeclist Fielddecl {$$=createTree(-1,"void","",fielddecllst,$1,$2);}
	      | Fielddecl	{$$=$1;}
	      ;
	      
Fielddecl: type ID ';' {$$=createTree(-1,"void","",fielddecl,$1,$2);}
	   ;

Field: Field '.' ID {$$=createTree(-1,"void","",fieldlst,$1,$3);}
	| ID '.' ID {$$=createTree(-1,"void","",field,$1,$3);}
	| ID '[' expr ']' '.' ID {struct Gsymbol* t=lookup($1->varname);struct tnode* g=createTree(-1,t->type->name,"",arrval,$1,$3);$$=createTree(-1,"void","",field,g,$6);}
	;


body : BEGN slist END {$$=$2;}
	;
			
slist : slist stmt	{$$=createTree(-1,"void","",cnn,$1,$2);}
	| stmt		{$$ = $1;}
	;

ifstmt : IF '(' expr ')' THEN slist ELSE slist ENDIF ';'	{struct tnode* t=createTree(-1,"void","",el,$6,$8);$$=createTree(-1,"void","",ifel,$3,t);}
	| IF '(' expr ')' THEN slist ENDIF ';'	{ struct tnode* t=createTree(-1,"void","",el,$6,NULL);
						  
					          $$=createTree(-1,"void","",ifel,$3,t);}
	;

whilestmt : WHILE '(' expr ')' DO slist ENDWHILE ';'	{$$=createTree(-1,"void","",whl,$3,$6);}
	  ;
	
repeatstmt : REPEAT slist UNTIL '(' expr ')' ';'  {$$=createTree(-1,"void","",rpt,$2,$5);}

dowhilestmt: DO slist WHILE '(' expr ')' ';'	{$$=createTree(-1,"void","",dow,$2,$5);}

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
				$$=createTree(-1,$2->type->name,"",retnd,$2,NULL);
				}
	;
 
inputstmt : READ '(' ID ')' ';' {
	 			 $$=createTree(-1,"void","",rd,$3,NULL);printf("Reachinfg read\n");}
	  | READ '(' ID '[' expr ']' ')' ';' {if(lookup($3->varname)==NULL){
	 					printf("Variable %s is undeclared\n",$3->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup($3->varname);
	 			 
	 			 	struct tnode* temp=createTree(-1,t->type->name,"",arrasg,$3,$5);
	 			 	$$=createTree(-1,"void","",rd,temp,NULL);}
	 | READ '(' Field ')' ';' {$$=createTree(-1,"void","",rd,$3,NULL);}
		;
		
outputstmt : WRITE '(' expr ')' ';' {$$ = createTree(-1,"void","",wr,$3,NULL);}
	    | WRITE '(' STRING ')' ';' {$$ = createTree(-1,"void","",wr,$3,NULL);}
	       ;

assgstmt : ID '=' expr ';' {
	 			 
	 			 $$ = createTree(-1,"void","",asg,$1,$3);
	 			 printf("reaching asg\n");}
	  | ID '=' STRING ';' {
	 			 $$=createTree(-1,"void","",asg,$1,$3);}
	  | ID '[' expr ']' '=' expr ';' {if(lookup($1->varname)==NULL){
	 					printf("Variable %s is undeclared\n",$1->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup($1->varname);
	 			        
	 			 	struct tnode* temp=createTree(-1,t->type->name,"",arrasg,$1,$3);
	 			 	$$=createTree(-1,"void","",asg,temp,$6);
	 			 	
	  
	  				 }
	  | ID '[' expr ']' '=' STRING ';' {if(lookup($1->varname)==NULL){
	 					printf("Variable %s is undeclared\n",$1->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup($1->varname);
	 			 
	 			 	struct tnode* temp=createTree(-1,t->type->name,"",arrasg,$1,$3);
	 			 	$$=createTree(-1,"void","",asg,temp,$6);
	  
	  
	  
	  				   }
	  | Field '=' expr ';' {$$=createTree(-1,"void","",asg,$1,$3);}
	  | Field '=' STRING ';' {$$=createTree(-1,"void","",asg,$1,$3);}
	   ;


expr : expr PLUS expr		{$$ = createTree(-1,"INT","",ps,$1,$3);}
	 | expr MINUS expr  	{$$ = createTree(-1,"INT","",ms,$1,$3);}
	 | expr MUL expr	{$$ = createTree(-1,"INT","",ml,$1,$3);}
	 | expr DIV expr	{$$ = createTree(-1,"INT","",dv,$1,$3);}
	 | expr MOD expr	{$$ = createTree(-1,"INT","",mod,$1,$3);}
	 | expr LT expr		{$$ = createTree(-1,"bool","",lt,$1,$3);}
	 | expr GT expr		{$$ = createTree(-1,"bool","",gt,$1,$3);}
	 | expr GE expr		{$$ = createTree(-1,"bool","",ge,$1,$3);}
	 | expr LE expr		{$$ = createTree(-1,"bool","",le,$1,$3);}
	 | expr NE expr		{$$ = createTree(-1,"bool","",ne,$1,$3);}
	 | expr EQ expr		{$$ = createTree(-1,"bool","",eq,$1,$3);}
	 | expr AND expr	{$$ = createTree(-1,"bool","",andnd,$1,$3);}
	 | '(' expr ')'		{$$ = $2;}
	 | NUM			{$$ = $1;}
	 | ID			{$$ = $1;}
	 | ID '[' expr ']'	{if(lookup($1->varname)==NULL){
	 				printf("Variable %s is undeclared\n",$1->varname);
	 				exit(1);
	 			 }
	 			 struct Gsymbol* t=lookup($1->varname);
	 			 
	 			 $$=createTree(-1,t->type->name,"",arrval,$1,$3);
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
	 			 $$=createTree(-1,t->type->name,"",fncall,$1,NULL);
	 			 }
	 | ID '(' Arglist ')'	{
	 			if(lookup($1->varname)==NULL){
	 				printf("4Funcn %s is undeclared\n",$1->varname);
	 				exit(1);
	 			 }
	 			 struct Gsymbol* t=lookup($1->varname);
	 			 
	 			 $$=createTree(-1,t->type->name,"",fncall,$1,$3);
	 			 }
	 | Field	{$$=createTree(-1,"void","",fieldval,$1,NULL);}
	 | INITIALIZE '(' ')'	{$$=createTree(-1,"INT","",initnd,NULL,NULL);}
	 | ALLOC '(' ')'	{$$=createTree(-1,"INT","",allocnd,NULL,NULL);}
	 | FREE '(' ID ')'	{$$=createTree(-1,"INT","",freend,$3,NULL);}
	 | NULL_SPL	{$$=createTree(-1,"NULL","",nullnd,NULL,NULL);}
	 ;

Arglist: Arglist ',' expr	{$$=createTree(-1,"void","",arglst,$1,$3);}
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
  	TypeTableCreate();
	yyparse();
	
	return 0;
}
