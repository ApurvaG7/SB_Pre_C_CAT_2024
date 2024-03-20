// Ternary op : conditional op
// syntax :
//  condition ? expression 1(if true)  : expression 2(if false)
#include<stdio.h>

int main()
{
    int num1,num2;

    printf("Enter two numbers :");
    scanf("%d%d",&num1,&num2);
    num1 > num2 ? printf("Num1 is greater !") : printf("Num2 is Greater !");
    return 0;
}