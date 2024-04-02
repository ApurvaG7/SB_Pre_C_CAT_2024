// macros 
// SQR function     Square of a number function

#include<stdio.h>
#define SQR(a) (a) * (a)
// here we are replacing SQR(a)     with    (a) * (a)
// #define just replaces the text so we can perform any replacement within it
// just like arithmatic calculations too


void main()
{
    int num = 5;
    printf("\n Square of %d = %d",num,SQR(num));
//  printf("\n Square of %d = %d",num,num * num);   // preprocessor file
//  printf("\n Square of %d = %d",5,5 * 5);

}