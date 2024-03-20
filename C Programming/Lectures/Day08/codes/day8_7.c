// static 
#include<stdio.h>
void fun();
void fun1();

static int num2 = 10;
int main()
{
    fun1();
    fun1();
    fun1();
    fun1();
   // printf("num = %d\n",num); // static variable not accessible here
    return 0;
}

void fun1()
{
    static int num = 10;
    printf("num = %d\n",num);
    num++;
}
/*
void fun()
{
    int num = 10;
    printf("num = %d\n",num);
    num++;
}*/