// 2D Array scanf using pointer notation
#include<stdio.h>

int main()
{
    int arr[3][2];

    printf("enter the array elements :");

    for(int i =0;i<3;i++)
    {
        for(int j =0;j<2;j++)
        {
            printf("arr[%d][%d] =",i,j);
           // scanf("%d",&arr[i][j]);
           scanf("%d",(*(arr+i)+j));
        }
    }

    printf("The array elements are :\n");

    for(int i =0;i<3;i++)
    {
        for(int j =0;j<2;j++)
        {
           // printf("%4d",arr[i][j]);
           printf("%4d",*(*(arr+i)+j));
            
        }
        printf("\n");
    }
    return 0;
}