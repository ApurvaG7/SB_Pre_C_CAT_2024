// function without parameters and without return type

#include<stdio.h>
void addition();
int main()
{
    addition();
    return 0;
}

void addition()
{
    int num1,num2;
    printf("Enter 2 numbers :");
    scanf("%d%d",&num1,&num2);
    int result = num1 + num2;
    printf("REsult = %d\n",result);
   // printf("Result = %d\n",num1+num2);
}