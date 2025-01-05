%{
#include <stdio.h>

int input_count = 0; // Tracks the number of input reads
%}

%%
.|\n    { printf("%s", yytext); } // Echo input to output
%%

int yywrap() {
    if (input_count < 1) {
        input_count++;
        yyin = stdin; // Reset yyin to read again from standard input
        return 0; // Indicate that there's more input to process
    }
    return 1; // Indicate the program should terminate
}

int main() {
    printf("Reading input for the first time:\n");
    yylex(); // Process the first input

    printf("\nReading input for the second time:\n");
    yylex(); // Process the second input

    printf("\nProgram completed after reading input twice.\n");
    return 0;
}
