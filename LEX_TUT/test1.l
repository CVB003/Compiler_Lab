%{

#include<stdio.h>
%}

number [0-9]+
op  "+"
%%

{number} {printf("NUMBER");}
{op} {printf("+");}
%%

int yywrap(){
    return 1;
}

int main(int argc,char* argv[])
{

  if(argc > 1){
	FILE *fp = fopen(argv[1], "r");
	if(fp)
	  yyin = fp;
  }
  yylex();
  
  //printf("int: %d floats: %d\n",count_int,count_float);
  
  return 1;
}
