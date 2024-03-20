// scanf with array notation and pointer notation
#include<stdio.h>

int main()
{
    int arr[5];
    printf("Enter the array elements :\n");

    for(int i=0;i<5;i++)
    {
        printf("arr[%d] = ",i); // 
       // scanf("%d",&arr[i]); // array notation
       scanf("%d",arr+i); // pointer notation
    }

    printf("Array elements are :");

    for(int i=0;i<5;i++)
    {
        //printf("%4d",arr[i]); // array notation
        printf("%4d",*(arr+i)); // pointer notation
    }
    return 0;
}