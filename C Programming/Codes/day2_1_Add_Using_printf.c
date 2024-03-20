// Add using printf
#include<stdio.h>

void main()
{
    int num1 = 12, num2 = 24, num3;
    printf("num1 + num2 = %d\n", num1+num2);

    printf("%d + %d = %d\n", num1,num2,num1+num2);

    num3 = num1+num2;
    printf("num3 = %d\n",num3);
}