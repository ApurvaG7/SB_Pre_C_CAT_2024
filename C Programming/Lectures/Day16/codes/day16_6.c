// conditional macros
#include<stdio.h>
// #define PI 3.14

int main()
{
    #ifdef PI     // if defined
        printf("PI is defined !");
    #else
        printf("PI is not defined !");
    #endif
    return 0;
}