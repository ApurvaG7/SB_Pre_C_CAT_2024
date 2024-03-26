// string functions : strcpy, strchr,strstr, strrev
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "Sunbeam";
    char str2[50];
    char str3[] = "beam";
    char ch = 'a';
    strcpy(str2,str1);
    printf("str2 = %s\n",str2);
    char *ptr = NULL;
    ptr = strchr(str1,ch);
    if(ptr == NULL)
        printf("character not found !\n");
    else
        printf("character found at index = %d\n",ptr-str1);

    ptr = strstr(str1,str3);
    if(ptr == NULL)
        printf("String not found !\n");
    else
        printf("String found at index %d\n",ptr - str1);

char rev_str[50] ;
*rev_str = strrev(str1);
        printf("string reverse = %s\n",strrev(str1));
    return 0;
}


/*
int num1 = 10;
int num2;
num2 = num1

*/