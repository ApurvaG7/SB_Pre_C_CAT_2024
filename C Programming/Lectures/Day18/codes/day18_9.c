// file handling : append mode

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr = fopen("sunbeam.txt","a");

    char ch;

    while ((ch = getchar()) != EOF)
    {
        fputc(ch,fptr);
    }
    fclose(fptr);

    return 0;
}