// file handling : read mode
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr = fopen("day18_1.c","r");

    char ch;

   if(fptr == NULL)
    printf("File not opened !");

    while((ch = fgetc(fptr)) != EOF)
    {
       // printf("%c",ch);
       fputc(ch,stdout);
    } 
    fclose(fptr);
    return 0;
}