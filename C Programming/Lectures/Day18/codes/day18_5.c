// self referential structure
/*
A structure which has a pointer field of its own type is called
a self-referential structure

*/
#include<stdio.h>

struct test
{
    int num1;
    int num2;
    struct test *ptr;
};

int main()
{
    struct test t1;
    t1.num1 = 10;
    t1.num2 = 20;
    t1.ptr = NULL;
    printf("t1 : num1 = %d  num2 = %d\n",t1.num1,t1.num2);

    struct test t2;
    t2.num1 = 30;
    t2.num2 = 40;
    t2.ptr = NULL;

    t1.ptr = &t2;

    printf("values of t2 using t1 :\n");
    printf("num1 = %d num2 = %d\n",t1.ptr->num1,t1.ptr->num2);
    return 0;
}