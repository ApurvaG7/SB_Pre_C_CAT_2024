// file handling : fseek()
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr = fopen("sunbeam.txt","r");
    char ch;
    printf("file position = %d\n",ftell(fptr));
    fseek(fptr,3,SEEK_SET); // beginning of the file
    ch = fgetc(fptr);
    printf("File position = %d  ch = %c\n",ftell(fptr),ch);

    fseek(fptr,5,SEEK_CUR);
    ch = fgetc(fptr);
    printf("File position = %d  ch = %c\n",ftell(fptr),ch);
    
    fseek(fptr,-6,SEEK_CUR);
     ch = fgetc(fptr);
    printf("File position = %d  ch = %c\n",ftell(fptr),ch);
    
    fseek(fptr,-7,SEEK_END);
    ch = fgetc(fptr);
    printf("File position = %d  ch = %c\n",ftell(fptr),ch);
    return 0;
}