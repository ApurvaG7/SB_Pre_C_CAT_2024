// pointers : basics and types 

#include<stdio.h>

int main()
{
    int num = 10;
    int *ptr = &num; // referencing
    // ptr is an interger pointer variable holding address of num

    int *ptr1; // wild pointers
    int *ptr2 = NULL; // NULL pointer

    printf("num = %d\n",num); // 10
    printf("address of num = %u\n",&num); // 100
    printf("address of num using ptr = %u\n",ptr); // 100
    printf("num using ptr = %d\n",*ptr); // dereferencing -> 10
    /*
        *ptr
        value at ptr
        value at 100
        10
    
    */


    return 0;
}