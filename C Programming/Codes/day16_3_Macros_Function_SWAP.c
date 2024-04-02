// macros
// SWAP Function

#include<stdio.h>

#define SWAP(a,b,type) {type t; t=a ; a=b ; b=t;}
// here we are performing swap using 3 variables
// why we took type and casted it as type t will know later
/*
    SWAP(a,b,int)
    {
        int t; 
        t=a; 
        a=b; 
        b=t;
    }
*/
// we can also do it for 
#define ADD(a,b) (a + b)
#define SUB(a,b) (a - b)
#define DIV(a,b) (a / b)

void main()
{
    int n1=123, n2=456;
    printf("\nBefore Swap n1 = %d\t n2 = %d",n1,n2);
    SWAP(n1,n2,int);
    /*
        SWAP(n1,n2,int)
        {
            int t; 
            t=n1; 
            n1=n2; 
            n2=t;
        }
        // this is how the code is in preprocessor
        // here we have taken type 
        // the use of 'type' is to be able to replace each and every type of variable
        // lets say we want to replace float variables
        // for that we need to tell the preprocessor that declare the third variable as float 
        // and to do that we take 'type' and define our data type 'int, float, double' and it will be replaced in preprocessor
        // we can also do it with 2 variables by doing arithmatic calculations


    */
    printf("\nAfter Swap n1 = %d\t n2 = %d",n1,n2);

}