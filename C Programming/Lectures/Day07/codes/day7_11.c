// functions
// function with parameters and with return type

#include<stdio.h>

int addition(int num1,int num2);
int main()
{
    
   int sum = addition(25,35);
   printf("sum = %d\n",sum);
    return 0;
}

int addition(int num1,int num2) // 25  35
{
    int result = num1 + num2;
    return result; // 60
}