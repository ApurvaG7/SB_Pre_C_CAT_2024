// 

#include<stdio.h>

int main()
{
    int arr[5] = {11,22,33,44,55};

    printf("arr[3] = %d\n",arr[3]); // 44
    printf("arr[3] = %d\n",*(arr+3)); // 44
    printf("arr[3] = %d\n",*arr+3); // *arr-> 11+3 = 14
    return 0;
}