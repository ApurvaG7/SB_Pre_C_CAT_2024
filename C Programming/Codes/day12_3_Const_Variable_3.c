// Const Variable
// Adding Const to Pointer and Pointer Variable
// solving previous issues

#include<stdio.h>
void main()
{
    float const PI = 3.123;
    // here we have declared a constant variable 

    float const * const ptr = &PI;
    // and here to make that variable constant and also its pointer and address
    // we add const to *    and const to ptr (its variable)

    /*
    float const *ptr = &PI;
    here ptr cannot change the value of PI

    float * const ptr = &PI;
    here ptr cannot point to another variable

    float const * const ptr = &PI;
    here ptr cannot change the value of PI
    also it cannot point to any other variable
    */
    printf("\n %f",PI);
    printf("\n %f",*ptr);
    



}