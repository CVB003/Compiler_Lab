%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "exptree.h"
	#include "exptree.c"
	int yylex(void);
	extern FILE* fp;
	extern FILE* yyin;
	
%}

%union{
	struct tnode *no;
	
}
%type <no> expr program stmt slist inputstmt outputstmt assgstmt ifstmt whilestmt repeatstmt dowhilestmt
%token <no> NUM ID READ WRITE BREAK CONTINUE
%token PLUS MINUS MUL DIV END BEGN LT GT LE GE NE EQ IF THEN ELSE ENDIF WHILE DO ENDWHILE REPEAT UNTIL

%left LT GT LE GE NE EQ
%left PLUS MINUS
%left MUL DIV

%%

program : BEGN slist END ';'	{
				printf("Generating code\n");
				before_code();
				int i=code_gen($2);
				after_code();
				exit(0);
				}
	| BEGN END ';'	{printf("Empty input program\n");
			exit(0);
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
 
inputstmt : READ '(' ID ')' ';' {$$=createTree(-1,notype,"",rd,$3,NULL);}
		;
		
outputstmt : WRITE '(' expr ')' ';' {$$ = createTree(-1,notype,"",wr,$3,NULL);}
	       ;

assgstmt : ID '=' expr ';' {$$ = createTree(-1,notype,"",asg,$1,$3);}
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
	 | ID			{$$ = $1;}
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
