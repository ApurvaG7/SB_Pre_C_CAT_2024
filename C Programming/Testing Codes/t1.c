#include<stdio.h>
int main( void )
{/*
int val1 = 0x64;
printf("\n %d", val1);
int val2 = 064;
printf("\n %d", val2);
int val3 = 0x72 + 072 + 72 - val1 + val2;
printf("\nval2=%d val3=%d\n",val2,val3);
*/


    int n1 = 100;   // decimal format
    int n2 = 0100;  // octal format
    int n3 = 0X100; // hexadecimal format

    printf("\n n1 = %d",n1);
    printf("\n n2 in octal = %o \t n2 in decimal = %d",n2,n2);
    // to print an octal number in decimal we use %o    %d will print its decimal value
    printf("\n n3 in hexadecimal = %x \t n3 in decimal = %d",n3,n3);
    // to print an hexadecimal nnumber in decimal we use %x     %d will print its decimal value

    return 0;
}