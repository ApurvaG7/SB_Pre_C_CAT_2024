// char arrays using pointer notation
#include<stdio.h>

int main()
{
    char str[] = "Sunbeam";

    printf("str = %s\n",str); // Sunbeam
    printf("str[2] = %c\n",str[2]); // n
    printf("str[2] pointer notation = %c\n",*(str+2)); // n
    printf("str = %s\n", str+3); // 103--> beam
    printf("*str+4 = %c\n",*str+4); // W
    printf("*(str+2)+3 = %c\n",*(str+2)+3); // q
    
/*
str = 100
*str = S
*str + 4 = S + 4

*/

    return 0;
}