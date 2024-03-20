// function with return type and without parameters

#include<stdio.h>
int addition(void);
int main()
{
   // int sum = addition();
    // printf("sum = %d\n",sum);

    printf("result = %d\n",addition());
    // printf("result = %d\n",30);
    return 0;
}

int addition(void)
{
    int num1 = 10, num2 = 20;

    int result = num1 + num2;
    return result;
}