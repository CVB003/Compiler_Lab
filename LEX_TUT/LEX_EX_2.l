%{

#include<stdio.h>
int count_int=0,count_float=0;
%}

number [0-9]+
%%


[-+]?{number}(\.){number} {count_float++;}

[-+]?{number} {count_int++;}
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
  
  printf("int: %d floats: %d\n",count_int,count_float);
  
  return 1;
}
