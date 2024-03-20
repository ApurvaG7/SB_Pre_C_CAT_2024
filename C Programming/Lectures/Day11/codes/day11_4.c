// arithmetic with &arr : &arr, &arr+1
#include<stdio.h>

int main()
{
    int arr[5] = {10,20,30,40,50};

    printf("arr = %u\n",arr); // 100
    printf("&arr = %u\n",&arr); // 100
    printf("arr+1 = %u\n",arr+1); 
    // 104 -> increments as per the scale factor of 1 element
    // 100 + 1*4
   
    printf("&arr+1 = %u\n",&arr+1);
    // 120 -> increments as per the scale factor of entire array
    // 100 + 1*20 

    printf("&arr+2 = %u\n",&arr+2);
    // 100 + 2*20 --> 100 + 40 --> 140
    return 0;
}