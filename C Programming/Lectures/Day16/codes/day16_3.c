// macros : SWAP function
#include<stdio.h>
#define SWAP(a,b,type) {type t; t=a; a=b;b=t;}

/*
swap ( a,b ,int)
{
    int t;
    t = a;
    a = b;
    b = t;
}

*/
int main()
{
    int num1 = 10, num2 = 20;
    printf("Before Swap num1 = %d  num2 = %d\n",num1,num2);
    SWAP(num1,num2,int);
    /*
     {   int t;
        t= num1;
        num1 = num2;
        num2 = t;
    }
    */

    printf("After Swap num1 = %d  num2 = %d\n",num1,num2);
    return 0;
}