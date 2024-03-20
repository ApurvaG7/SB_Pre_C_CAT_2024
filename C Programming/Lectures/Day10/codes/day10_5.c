// pointer arithmetic 
#include<stdio.h>

int main()
{
    int num = 10;
    int *ptr = &num;
    printf("num = %d\n",num); // 10
    printf("num using ptr = %d\n",*ptr); // 10
    printf("&num = %u\n",&num); // 100
    printf("&num using ptr = %u\n",ptr); // 100

   /* ptr++; // or ++ptr increments the pointer ptr by 4 bytes (scale factor)
    printf("num = %d\n",num); // 10
    printf("num using ptr = %d\n",*ptr); // garbage
    printf("&num = %u\n",&num); // 100
    printf("&num using ptr = %u\n",ptr); // 104*/

    ++*ptr; // value at ptr is incremented -> 10 + 1
    printf("num = %d\n",num); // 11
    printf("num using ptr = %d\n",*ptr); // 11
    printf("&num = %u\n",&num); // 100
    printf("&num using ptr = %u\n",ptr); // 100

    *ptr++; // increments the pointer as per the scale factor
    printf("num = %d\n",num); // 11
    printf("num using ptr = %d\n",*ptr); // garbage
    printf("&num = %u\n",&num); // 100
    printf("&num using ptr = %u\n",ptr); // 104

    // (*ptr)++ will increment the value 

    return 0;
}

/*
scale factor is the size of the datatype of the pointer
datatype of ptr is int
int is 4 bytes of size
hence, ptr will increment by 4 bytes
*/