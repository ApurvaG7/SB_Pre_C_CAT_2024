// static variable declaration

#include<stdio.h>
void fun();
int main()
{
    fun(); // 0
    fun(); // 1
    fun(); // 2
    return 0;
}

void fun()
{
    static int num; // 0
    num = 10;
    printf("num = %d\n",num);  // 10 10 10
    num++;
}