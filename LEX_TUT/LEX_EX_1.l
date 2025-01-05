%{

#include<stdio.h>
int count_words=0,count_lines=0,count_chars=0;
%}


%%

[^\t\n ]+  {count_words++; count_chars+=yyleng;}

[ \t]+ {count_chars+=yyleng;}

[\n]   {count_lines++; count_chars+=yyleng;}

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
  
  printf("\n words: %d chars: %d lines: %d \n",count_words,count_chars,count_lines);
  
  return 1;
}
