// array of pointers
#include<stdio.h>

int main()
{
    int arr[3][3] = {11,22,33,44,55,66,77,88,99};

    int *ptr[3] = {(int *)arr,(int *)(arr+1),(int *)(arr+2)};
                // 100,112,124

    printf("Addresses of 1st element of each row :\n");
    for(int i =0;i<3;i++)
    {
        printf("%u\n",*(ptr+i)); // 100  112  124
    }

    printf("Values of 1st element of each row :\n");
    for(int i =0;i<3;i++)
    {
        printf("%d\n",**(ptr+i));
    }
    return 0;
}