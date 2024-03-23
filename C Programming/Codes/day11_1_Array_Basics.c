// Arre Basic Declaration
// Arre Initialization
// Arre Printing

#include<stdio.h>
void main()
{
    int arre[5];    // array Declaration
    
    arre[0] = 10;   // assignment
    arre[1] = 20;   

    printf("\nArre[1] = %d",arre[1]);   //10
    printf("\nArre[2] = %d",arre[2]);   //garbage value

    int arree[5] = {11,12,13,14,15};    // Array Initialization
    

    printf("\n\n\n Partial Initialization ");
    int arrre[5] = {101,102,103};      // Partial Initialization

    printf("\nArrre[0] = %d",arrre[0]);   //101
    printf("\nArrre[1] = %d",arrre[1]);   //102
    printf("\nArrre[2] = %d",arrre[2]);   //103
    printf("\nArrre[3] = %d",arrre[3]);   // 0 
    // in partial initialization remaining elements are initialized as 0

    // int arrreee[];   
    // here giving size of the array is important
    // bcoz an array is  initialized at compile time
    // we can store only the fixed size of elements in the array
    // its size cannot grow at runtime

    printf("\n\n Initializing Array but not giving the size of array\n rather giving it its elements\n ");

    int arrreee[] = {1024,2048,4096,8192};
    // here initialization of array is mandatory even if we dont provide the size of array
    // the compiler will allocate the size of array according to the
    // number of elements present in the array

    printf("\nArrreee[0] = %d",arrreee[0]);   //1024
    printf("\nArrreee[1] = %d",arrreee[1]);   //2048
    printf("\nArrreee[2] = %d",arrreee[2]);   //4096
    printf("\nArrreee[3] = %d",arrreee[3]);   //8192

    printf("\n\n\n Printing Array using for loop\n");

    int aree[10] = {94,22,62,24,02,98,22,17,81,85};

    for(int i=0;i<=9;i++)
    {
        printf("\n%d",aree[i]);
    }

    printf("\n\n\ntesting\n\n");
    int array[5]={10,20,01,02,30};
    printf("\n%02d",array[0]);
    printf("\n%02d",array[1]);
    printf("\n%03d",array[2]);
    printf("\n%2d",array[3]);
    printf("\n%02d",array[4]);




}