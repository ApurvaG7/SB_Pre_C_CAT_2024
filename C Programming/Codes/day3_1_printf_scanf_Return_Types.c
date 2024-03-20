// printf & scanf return types

#include<stdio.h>
void main()
{
    int count = printf("Hell");
    printf("the value of count will be = %d\n",count);
    // 5

    int num = 123456;
    count = printf("num = %d\n",num);
    // 13

    int num1,num2;
    printf("\nEnter 2 numbers:");
    
    count = scanf("%d",&num1,&num2);
    printf("Count of scanf will be = %d",count);
    // scanf returns how much values you have scaned in the scanf statement so the value will be 2 as only 2 values are scanned.

}