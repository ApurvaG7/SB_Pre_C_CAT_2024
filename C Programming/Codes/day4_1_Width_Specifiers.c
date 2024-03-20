// width specifiers
#include<stdio.h>
int main()
{
    int n = 98745;
    float f = 123.456789;
    printf("\n %d!",n); //  normal number is printed
    printf("\n %9d!",n);    // a number with 9 spaces in front is printed
    printf("\n %-9d!",n);   // a number with 9 spaces in back is printed
    printf("\n %.3f!",f);   // a number with .3 number is printed
    printf("\n %7f!",f);    // a float number with 7 front spaces is printed
    printf("\n %7.3f!",f);  // a float number with 7 front spaces and .3 number is printed
    printf("\n %-7.3f!",f); // a float number with 7 back spaces and .3 number is printed
    printf("\n %-7f!",f);

}