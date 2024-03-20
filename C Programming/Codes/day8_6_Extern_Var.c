// Extern Variable

#include<stdio.h>
extern int n1;
void incre();

void main()
{
    printf("\n Number First Value = %d",n1);

    incre();

    printf("\n Number Value again in main() after incre() is executed = %d",n1);

}

int n1 = 10;

void incre()
{
    n1++;
    printf("\n Number Value in incre() after increment = %d",n1);
}

// Extern keyword is used before a variable to tell the compiler that
// this variable is declared somewhere else in the program file go and find its value
// it also tells that this variable is a global variable by default so treat it like that
// this variable can be accessed by the program anytime during execution and also be updated like the global variable
// Extern is used if we want to use or assign a value in any other program file
// its basically for linking process
// not much use in same file 
// rather use global for same files 
// and Extern for Multiple Files
