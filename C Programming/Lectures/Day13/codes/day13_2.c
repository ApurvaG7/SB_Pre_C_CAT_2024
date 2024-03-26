// string comparison
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "Sunbeam";
    char str2[] = "Sunbeam";
/*
    if (str1 == str2) // if(100 == 500) -> comparing addresses
        printf("Strings are Equal !");
    else
        printf("Strings are not Equal !");
*/

int result = strcmp(str1,str2); // 0 , 1, -1
    if(result == 0)
        printf("Strings are equal !\n");
    else if (result > 0) // 1
        printf("Str1 is greater !\n");
    else // -1
        printf("Str2 is greater !\n");

    return 0;
}