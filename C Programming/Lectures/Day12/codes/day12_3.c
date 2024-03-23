// const
#include<stdio.h>

int main()
{
    float const PI = 3.14;

    float const * const ptr = &PI;

    return 0;
}

/*
float const *ptr = &PI ; 
here ptr cannot change the value of PI

float * const ptr = &PI;
here ptr cannot point to another variable

float const * const ptr = &PI;
here ptr cannot change the value of PI
as well as it cannot point to any another variable

*/