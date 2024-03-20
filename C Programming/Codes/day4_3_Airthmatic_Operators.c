// arithmetic operators : + - * / %

#include<stdio.h>

int main()
{
    int num1,num2;

    printf("Enter the value for num1 and num2 :");
    scanf("%d%d",&num1,&num2);

    printf("num1 + num2 = %d\n",num1+num2);
    printf("num1 - num2 = %d\n",num1-num2);
    printf("num1 * num2 = %d\n",num1*num2);
    printf("num1 / num2 = %d\n",num1/num2);
    printf("num1 %% num2 = %d\n",num1%num2); 
    // %% is taken bcoz % acts as an escape sequence so to skip that and
    // % should be printed we use %%
    
}