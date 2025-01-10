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
%type <no> expr program stmt slist inputstmt outputstmt assgstmt
%token <no> NUM ID READ WRITE
%token PLUS MINUS MUL DIV END BEGN 

%left PLUS MINUS
%left MUL DIV

%%

program : BEGN slist END ';'	{printf("Prefix Tree :\n");
				prefix($2);
				printf("\nEvaluating Program\n");
				int i=evaluate($2);
				exit(0);
				}
	| BEGN END ';'	{printf("Empty input program\n");
			exit(0);
			}
		;
		
slist : slist stmt	{$$=createTree(-1,-1,"",cnn,$1,$2);}
	| stmt		{$$ = $1;}
	;
	
stmt : inputstmt	{$$ = $1;}
       | outputstmt	{$$ = $1;}
       | assgstmt	{$$ = $1;}
       ;
 
inputstmt : READ '(' ID ')' ';' {$$=createTree(-1,-1,"",rd,$3,NULL);}
		;
		
outputstmt : WRITE '(' expr ')' ';' {$$ = createTree(-1,-1,"",wr,$3,NULL);}
	       ;

assgstmt : ID '=' expr ';' {$$ = createTree(-1,-1,"",asg,$1,$3);}
	   ;



expr : expr PLUS expr		{$$ = createTree(-1,-1,"",ps,$1,$3);}
	 | expr MINUS expr  	{$$ = createTree(-1,-1,"",ms,$1,$3);}
	 | expr MUL expr	{$$ = createTree(-1,-1,"",ml,$1,$3);}
	 | expr DIV expr	{$$ = createTree(-1,-1,"",dv,$1,$3);}
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
