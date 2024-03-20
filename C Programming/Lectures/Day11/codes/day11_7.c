// arrays in function
#include<stdio.h>

void accept_data(int arr[5]);
void print_data(int arr[5]);

int main()
{
    int arr[5];
    accept_data(arr);
    print_data(arr);
    printf("size of arr in main() = %d\n",sizeof(arr)); // 20
    return 0;
}

void accept_data(int arr[5]) // 100
{
    printf("Enter the array elements :");

    for(int i=0;i<5;i++)
    {
        printf("arr[%d] =",i);
        scanf("%d",&arr[i]);
    }
}

void print_data(int arr[5])
{
    printf("The array elements are :");
    for(int i=0;i<5;i++)
    {
        printf("%4d",arr[i]); // printf("%4d",*(arr+i));
    }
     printf("size of arr in print() = %d\n",sizeof(arr)); // 4
}