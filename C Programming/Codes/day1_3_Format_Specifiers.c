#include<stdio.h>

void main()
{
    int num = 10;
    char ch = 'A';
    float f = 1.2;
    double df = 3.147;
    char str[] = "yaaaaaar i cant take this anymore";

    printf("num = %d \n", num);
    // %d  is the format specifier for integer
    printf("character = %c \n", ch);
    // %c  is the format specifier for char
    printf("Float num = %.2f \n", f);
    // %f  is the format specifier for float
    printf("Double Float num = %.4lf \n", df);
    // %lf  is the format specifier for double
    printf("String = %s \n", str);
    // %s  is the format specifier for string
}