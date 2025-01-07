%{

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define max(a,b) ((a) > (b) ? (a) : (b))
extern FILE* yyin;
%}


%token LETTER DIGIT true false IF ELSE arithop1 arithop2 relop
%left arithop1
%left arithop2

%%
start : stmt '\n'		{printf("VALID %d\n",$1); exit(1);}
      ;
    
stmt: IF '(' bool ')' '{' stmt '}' ELSE '{' stmt '}' {$$=1+max($6,$10);}
    | expr '=' expr ';' {$$=0; printf("here1\n");}
    ;
    
bool: expr relop expr 
    | true  
    | false
    ;
	
expr:  expr arithop1 expr        
  | '(' expr ')'
  | LETTER             
  | DIGIT     
  | expr arithop2 expr
  ;

%%


yyerror(char const *s)
{
    printf("INVALID %s",s);
}

yylex(){
    char c;
    c = getchar();
    
    if(c=='+' || c=='-'){
         return arithop1;
    }
    else if(c=='*' || c=='/'){
        return arithop2;         
    }else if(c=='>' || c=='<'){
    	c=getchar();
    	if(c=='='){
    		return relop;
    	}
    	ungetc(c,stdin);
    	return relop;
    
    }else if(isdigit(c)){
    	
    	return DIGIT;
    }else if(isalpha(c)){
        if(c=='t'){
        	c=getchar();
        	if(c=='r'){
        		c=getchar();
        		if(c=='u'){
        			c=getchar();
        			if(c=='e'){
        				return true;
        			}
        			return c;
        		}
        		return c;
        	
        	}
        	ungetc(c,stdin);
        	return LETTER;
        }else if(c=='f'){
        	c=getchar();
        	if(c=='a'){
        		c=getchar();
        		if(c=='l'){
        			c=getchar();
        			if(c=='s'){
        				c=getchar();
        				if(c=='e'){
        					return true;
        				}
        				return c;
        			}
        			return c;
        		}
        		return c;
        	
        	}
        	ungetc(c,stdin);
        	return LETTER;
        }else if(c=='i'){
        	c=getchar();
        	if(c=='f'){
        	        
        		return IF;
        	}
        	ungetc(c,stdin);
        	return LETTER;
        }else if(c=='e'){
        	c=getchar();
        	if(c=='l'){
        		c=getchar();
        		if(c=='s'){
        			c=getchar();
        			if(c=='e'){
        			   
        				return ELSE;
        			}
        			return c;
        		}
        		return c;
        	}
        	ungetc(c,stdin);
        	return LETTER;
        }
   
    	return LETTER;
    }else if(c==' '){
        return yylex();
    }else if(c=='='){
      
        return c;
    }else if(c==';'){
    	return c;
    }
    return c;
}

main(int argc,char*argv[])
{
	
	yyparse();
	return 1;
}
