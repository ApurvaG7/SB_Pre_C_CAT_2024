// Array of Pointer
//point to note     array of pointers & array pointers are different 

#include<stdio.h>
void main()
{
    int arre[3][3] = {101,202,303,404,505,606,707,808,909};
    int *ptr[3] = {(int *)arre,(int *)(arre+1),(int *)(arre+2)};
    // it is an 1D array to store the outer addresses of the entire array
    // here we are typecasing the pointer array to store the addresses of the first value of the matrix
    // if we dont typecast it then it will show error boc we are trying to store the values of the entire row of the matrix
    // remember its an matrix it has (row)(col)
    // so here we are storeing the base address of the first element of the array
    // and typecasting it with the same data type of the array 
    /*
              0       1       2
        0   101     202     303
        1   404     505     606
        2   707     808     909
        
    */


    
    printf("\nAddress of 1st element of each row :");
    for(int i=0;i<3;i++)
    {
        printf("\n%u",*(ptr+i));    //ie address of 101,404,707

    }

    printf("\nValues of 1st Element of each row :\n");
    for(int j =0;j<3;j++)
    {
        printf("\n%d",**(ptr+j));
    }


}