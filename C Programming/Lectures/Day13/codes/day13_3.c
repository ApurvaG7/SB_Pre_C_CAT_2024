// string comparison using string pointer
#include<stdio.h>

int main()
{
    char *str1 = "Sunbeam";
    char *str2 = "Sunbeam";

    if(str1 == str2)
        printf("Strings are Equal !");
    else
        printf("Strings are not Equal !");
    return 0;
}