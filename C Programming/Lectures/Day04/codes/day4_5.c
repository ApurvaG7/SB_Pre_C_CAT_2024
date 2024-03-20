// short hand operators :+= -= *= /=

#include<stdio.h>
int main()
{
    int num1 = 15,num2 = 10;
    printf("num1 = %d  num2 = %d\n",num1,num2); // 15 10
    num1 += num2;
    printf("num1 = %d  num2 = %d\n",num1,num2); // 25  10
    num1 -= num2;
    printf("num1 = %d  num2 = %d\n",num1,num2); // 15  10
    num1 =-num2;
    printf("num1 = %d  num2 = %d\n",num1,num2); //-10  10
    return 0;
}