// file handling : write mode : fputc
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr = fopen("sunbeam1.txt","w");
    char ch;

    printf("Enter the data !");
    while((ch = getchar()) != EOF) // end of file : -1
    {
        fputc(ch,fptr);
    }
    fclose(fptr);
    return 0;
}