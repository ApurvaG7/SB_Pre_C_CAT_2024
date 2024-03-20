//global variable

#include<stdio.h>

int num;
void fun();
int main()
{
    printf("num in main() = %d\n",num); // 0
    num++; 
    fun();
    return 0;    
}

void fun()
{
    printf("num in fun() = %d\n",num); // 1
    return;
}