// Addition using printf

#include<stdio.h>

int main()
{
    int num1 = 15, num2 = 25;

    // num1 + num2 = 40
    printf("num1 + num2 = %d\n",num1+num2);

    // 15 + 25 = 40
    printf("%d + %d = %d\n",num1,num2,num1+num2);

    int num3 = num1 + num2;
    printf("%d",num3);
    return 0;
}