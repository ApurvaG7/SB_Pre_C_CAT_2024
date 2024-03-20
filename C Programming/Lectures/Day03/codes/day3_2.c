// signed unsigned , ranges : limits.h
#include<stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
    signed int num = -10;
    unsigned int num2 = 12;
    short int marks; // 2 bytes

    char ch; // internally integer

    printf("signed int Max = %d\n",INT_MAX);
    printf("signed int Min = %d\n",INT_MIN);
    printf("Unsigned int max = %u\n",UINT_MAX);
    printf("signed char min = %d\n",CHAR_MIN);
    printf("signed char max = %d\n",CHAR_MAX);
    printf("unsigned char max = %u\n",UCHAR_MAX);
    

    return 0;
}