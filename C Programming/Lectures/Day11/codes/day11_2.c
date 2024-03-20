// size of entire array, size of 1 element.
// printing array with address

#include<stdio.h>

int main()
{
    int arr[5] = {10,20,30,40,50};

    printf("size of arr = %d\n",sizeof(arr)); // 20
    printf("size of arr[2] = %d\n",sizeof(arr[2])); // 4

    /*
        arr[0] = 10 - address of arr[0] = 100
        arr[1] = 20 - address of arr[1] = 104
        arr[2] = 30 - address of arr[2] = 108
    */

   for(int i = 0;i<5;i++)
   {
        printf("arr[%d] = %d - address of arr[%d] = %u\n",i,arr[i],i,&arr[i]);
   }
   printf("arr = %u\n",arr);
    return 0;
}