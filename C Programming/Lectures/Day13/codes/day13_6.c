// 2-D arrays : initialization and printing

#include<stdio.h>

int main()
{
    //int arr[5] = {1,2,3,4,5};
    int arr[3][3] = {11,22,33,44,55,66,77,88,99};
    // int arr1[row][col]
    int arr1[3][2] = {1,2,3,4}; // partial initialization

    int arr2[3][2] = {{10,20},{30,40},{50,60}};
    int arr3[3][3] = {{1},{2,3},{4,5,6}};
   // int arr4[][]; 
   int arr4[][3] = {11,22,33,44,55};
   // int arr5[3][] ; // error

   printf("arr[1][2] = %d\n",arr[1][2]);
   printf("arr[2][1] = %d\n",arr[2][1]);

   for(int i =0;i<3;i++)
   {
    for(int j = 0;j<3;j++)
    {
        printf("%4d",arr[i][j]);
    }
    printf("\n");
   }

   return 0;
}