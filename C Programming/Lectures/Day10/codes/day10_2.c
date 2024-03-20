// pass by value

#include<stdio.h>
void swap(int num1,int num2);

int main()
{
    int num1 = 10, num2 = 20;
    printf("num1 = %d  num2 = %d\n",num1,num2); // 10 20
    swap(num1,num2); // 10  20
    printf("num1 = %d  num2 = %d\n",num1,num2);

    return 0;
}

void swap(int num1,int num2) // 10  20 
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

}