// macros - basics and details
// Preprocessor Directives
// all statements starting with # are called as preprocessor directives
// preprocessor is a part of c prog which removes comments from the source code 
// it also expands the source code by replacing all statements starting with  #
// it is executed before compiler
// synatx of macro is
//  #define <symbol> <replaceable text>


// Variable Declaration

#include<stdio.h>

#define PI 3.14 
// here we have predefined value of PI as 3.14
// what this does that it replaces PI with 3.14 in the prog wherever PI is written

#define ROW 3
#define COL 3
// we are replacing values of ROL and COL of an Array throughtout the prog


void main()
{
    printf("Value of PI = %.2f",PI);
    // during preprocessor the above code will be converted to
    // printf("Value of PI = %d",3.14);
    // you can check this code in the temp files  .i  file
    // just while compileing write 
    // gcc file_name.c -save-temps

    // same replacing eg for size of array
    // lets just say we want to change the size of array 
    // each time before compile 
    // so we will replace each ROW and COl in #define 

    int arree[ROW][COL];
    for(int a=0;a<ROW;a++)
    {
        for(int b=0;b<COL;b++)
        {
            // scanf and printf statements

        }
    }
    // go and check the preprocessor .i file and the values of ROW and COl should be replaced by the values in #define
}