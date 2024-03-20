// arrays basic declaration ,initialization,printing

#include<stdio.h>

int main()
{
    int arr[5]; // array declaration

    arr[0] = 10;// assignment
    arr[1] = 20;

    printf("arr[1] = %d\n",arr[1]); // 10
    printf("arr[2] = %d\n",arr[2]); // garbage

    int arr1[5] = {11,22,33,44,55}; // initialization

    int arr2[5] = {1,2,3}; // partial initialization
    printf("arr2[2] = %d\n",arr2[2]); // 3
    printf("arr2[3] = %d\n",arr2[3]); // 0
    // in partial initialization remaining elements are initialized to 0
    
  //  int arr3[]; giving size is important in declaration
  
  int arr3[] = {11,22,33};
  // initialization is mandatory if we don not provide the size of array

    int arr4[10] = {11,22,33,44,55,66,77,88,99,100};
    

    for(int i = 0;i<10;i++) // 0 1 2
    {
        printf("%4d",arr4[i]); // arr[0] , arr[1], arr[2]
    }
    return 0;
}