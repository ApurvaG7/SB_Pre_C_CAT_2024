// AND OR NOT Gates
// returns 0(false)     1(true)
// && AND
// || OR
// ! NOT

// 
#include<stdio.h>
void main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2); // 15 12

    printf("\n n1 && n2 = %d", n1 && n2);
    // if both are true then only its ture so ans will be 1 

    printf("\n n1 || n2 = %d", n1 || n2);
    // if any one of it is true so the answer will be true so ans is 1

    printf("\n !n1 = %d", !n1);
    // since the value is not 0 then its true
    // then ans is inverse of true so false = 0

    // if the value is 0 then its false 
    // then ans is inverse if false so true = 1
    
    printf("\n !n2 = %d", !n2);
}