// integer  octal   hexadecimal numbers

#include<stdio.h>
void main()
{

    int n1 = 100;   // decimal format
    int n2 = 0100;  // octal format
    int n3 = 0X100; // hexadecimal format

    printf("\n n1 = %d",n1);
    printf("\n n2 in octal = %o \t n2 in decimal = %d",n2,n2);
    // to print an octal number in decimal we use %o    %d will print its decimal value
    printf("\n n3 in hexadecimal = %x \t n3 in decimal = %d",n3,n3);
    // to print an hexadecimal nnumber in decimal we use %x     %d will print its decimal value
}
