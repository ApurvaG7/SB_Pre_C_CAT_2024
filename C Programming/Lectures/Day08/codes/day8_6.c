//extern 
#include<stdio.h>
extern int num;
void fun();
int main()
{
    printf("num = %d\n",num); // 10
    fun();
    return 0;
}

int num = 10;

void fun()
{
    num++;
    printf("num = %d\n",num); // 11
}
