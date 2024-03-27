// command line arguments
#include<stdio.h>

int main(int argc, char *argv[],char *envp[])
{

    for(int i =0;i<argc;i++)// i<5
    {
        printf("%s\n",argv[i]);
    }

printf("\n Environment Variables :\n");
    for(int i =0;i<20;i++)
    {
        printf("%s\n",envp[i]);
    }
    return 0;
}

/*
argc : argument count : maintains the count of actual arguments passed
argv : argument vector
envp : environment variables 

*/