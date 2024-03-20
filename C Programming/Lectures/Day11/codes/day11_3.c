// array with pointer notation
#include<stdio.h>

int main()
{
    int arr[5] = {11,22,33,44,55};

    printf("arr[2] = %d\n",arr[2]);
    printf("arr[2] = %d\n",*(arr+2));

    for(int i =0;i<5;i++)
    {
        printf("%4d",arr[i]);
    }

    printf("\n pointer notation :\n");

    for(int i =0;i<5;i++)
    {
        printf("%4d",*(arr+i));
        // *(arr+0) -> *(100 + 0*4)
        // *(arr+1) -> *(100 + 1*4)
    }
    return 0;
}