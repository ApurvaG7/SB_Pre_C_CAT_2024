// Predefined Constants
// these symbolic constants are available from there delaration till the end of file
// their scope is not limited to the function.

#include<stdio.h>
void main()
{
    printf("Current Line no : %d\n",__LINE__);
    // prints the current line number
    
    printf("Current File = %s\n",__FILE__);
    // prints the name of the current file

    printf("Todays Date = %s\n",__DATE__);
    // prints the current date of the system

    printf("Current Time = %s\n",__TIME__);
    // prints the current time of the system

    #line 100
//100    // we have a line preprocessor which changes the current line number to the desired line number
//101    // here we have made the line 22 to line 100
//102    // so the rest of the line below 22 will start from 100
//103    // and if we print the current line number we will get
    printf("Current Line no : %d\n",__LINE__);      //104
}