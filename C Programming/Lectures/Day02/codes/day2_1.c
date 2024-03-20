// Format specifiers
#include<stdio.h>

int main()
{
    int num1 = 15;
    char ch = 'Z';
    float fvar = 1.5;
    double dvar = 1.7;

    printf("num1 = %d\n",num1);
    // %d is the format specifier for integer

    printf("ch = %c\n",ch);
    // %c is the format specifier for char 

    printf("fvar = %.2f\n",fvar);
    // %f is the format specifier for float

    printf("dvar = %.3lf\n",dvar);
    // %lf is the format specifier for double

    return 0;
}