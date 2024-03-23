// const
#include<stdio.h>

int main()
{
    float const PI = 3.14;

    float const *ptr = &PI;
    float fvar = 1.2;

    // the const keyword before the *ptr denotes that
    // the ptr cannot change the value of PI

  //  *ptr = 2.13; // error

  ptr = &fvar;
  // ptr can hold the address of another variable


    return 0;
}