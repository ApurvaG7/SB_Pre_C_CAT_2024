// integer, octal,hexadecimal numbers

#include<stdio.h>
int main()
{
    int num1 = 100; // decimal
    int num2 = 0100; // octal
    int num3 = 0X100; // hexadecimal 

    printf("num1 = %d\n",num1);
    printf("num2 = %o num2 in decimal = %d\n",num2,num2);
    printf("num3 = %x num3 in decimal = %d\n",num3,num3);

    return 0;
}