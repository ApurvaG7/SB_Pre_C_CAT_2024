// changing state of variable using pointer

#include<stdio.h>

int main()
{
    int num = 15;
    int *ptr = &num;

    printf("num = %d\n", num); // 15
    printf("num using ptr = %d\n",*ptr); // 15
    printf("address of num = %u\n",&num); // 100
    printf("address of num using ptr = %u\n",ptr); // 100
   
    num = 20;

    printf("num = %d\n", num); // 20
    printf("num using ptr = %d\n",*ptr); // 20
    printf("address of num = %u\n",&num); // 100
    printf("address of num using ptr = %u\n",ptr); // 100

    *ptr = 30;
    printf("num = %d\n", num); // 30
    printf("num using ptr = %d\n",*ptr); // 30
    printf("address of num = %u\n",&num); // 100
    printf("address of num using ptr = %u\n",ptr); // 100
   
    return 0;
}