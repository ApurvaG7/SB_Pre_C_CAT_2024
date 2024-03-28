// Command Line Arguments

// we pass the arguments while running the program
// with the file.exe
//      .\day15_3.exe One Two Three
// .\day15_3.exe        is the exe file
// One Two Three        are the char arguments we are passing to the main function
// One Two Three        are 3 arguments so the number of count ie. argc becomes 3

#include<stdio.h>

int main(int argc,char *argv[],char *envp[])
{

    for(int i=0 ; i<argc ; i++)
    {
        printf("\n%s",argv[i]);
    }

    printf("\n\nThe Argument Vectors are printed above\n\n");
    // we can also print the evnironment variables
}
/*
    argc    maintain the count of actual agruments  // argument count
    argv    it is an array of pointers which will be holding the base address of string that is passed  // argument vector
    envp    it holds all the environment variables // environment variables

*/
