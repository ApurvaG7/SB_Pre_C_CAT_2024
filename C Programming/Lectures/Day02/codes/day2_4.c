// Escape sequence \n \r \t \b \" \'  %%  \\n

#include<stdio.h>

int main()
{

    printf("Hello\n PH-27\n"); // \n -> new line
    printf("good morning \rGreat\n"); 
    // \r -> carriage return, takes cursor to beginning of the current line
    printf("Hello PH-26\b7\n"); 
    // \b -> backspace -> it goes 1 char back

    printf("\t Good Morning !\n");
    printf("I scored 80%% \n");
    printf("\"Good Morning\" \n");
    // "Good Morning"

    printf("\\n is the newline escape sequence !");
    //  \n is the newline escape sequence
    return 0;
}
