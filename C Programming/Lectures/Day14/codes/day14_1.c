// passing 2-D arrays to function
#include<stdio.h>

void accept_data(int arr[3][2]);
void print_data(int arr[3][2]);
int main()
{
    int arr[3][2];
    accept_data(arr);
    print_data(arr);
    printf("size of arr in main = %d\n",sizeof(arr));// 24
   
    
    return 0;
}

void accept_data(int arr[3][2])
{
    printf("enter the values :");

    for(int i =0;i<3;i++)
    {
        for(int j = 0;j<2;j++)
        {
            printf("arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}

void print_data(int arr[3][2])
{
    printf("The array elements are :\n");

    for(int i =0;i<3;i++)
    {
        for(int j =0;j<2;j++)
        {
            printf("%4d",arr[i][j]);
        }

        printf("\n");
    }
    printf("size of arr in print_data function = %d\n",sizeof(arr)); // 4
}