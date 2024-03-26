// Pointer Notation in 2D Array

#include<stdio.h>
void  main()
{
    int arre[3][3] = {10,20,30,40,50,60,70,80,90};
    /*
    
         0   1   2
    0   10  20  30  
    1   40  50  60
    2   70  80  90
    
    */
   printf("\nArre[1][2] = %d",arre[1][2]); // normal traversing
   printf("\nArre[1][2] Using Pointer Notation = %d",*(*(arre+1)+2));   // 60
   // here we are traversing via pointer notation
   // *(*(arr+1)+2) == first we goto the 
   // address of (arr+1)        which means base address + num of rows
   // then *(arr+1) value at arr+1
   // then we goto the second value 
   //   address of *(*(arr+1)+2)    +2 is for the column
   // it means base address + num of column 
   // it is used to traverse column
   

   // lets add some elements to the matrix
   int arree[2][2]={12,14,23,26};
   printf("\nEnter Elements for 2X2 Matrix\n");
   for(int i=0;i<2;i++)
   {
    for(int j=0;j<2;j++)
    {
        printf("Arree[%d][%d] = ",i,j);
        scanf("%d",(*(arree+i)+j)); // for scaning 
    }
   }
   // here we are storeing the value at the addresses
   
   printf("\nPrinting The Matrix\n");
   for(int i=0;i<2;i++)
   {
    for(int j=0;j<2;j++)
    {
        printf("Arree[%d][%d] = %d\t",i,j,*(*(arree+i)+j)); // for printing
    } printf("\n");
   }
   // from here we are getting the values form the addresses



}
/*
arre[1][2]          // arre[row][col]
*(*(arre+1)+2)      // *(*(arre + [row * scale factor]) + [col * scale factor])

(arre+1) == 1000 + 1 * scale factor or row
            1000 + 1 * 12       // since its a 3X3 integer array so the scale factor of row will be sum of 3(num of row)*4(data type int) = 12
            1000 + 12
            1012
            outer 1012

*(arre+1) == inner 1012     // value at 1012

*(arre+1)+2 == inner 1012 + 2 * scale factor of col
            ==  1012    +   2 * 4   // since its an integer array we *4 scalor factor
                1012    +   8
                1020

*(*(arre+1)+2) == *(1020) // value at 1020
                =  60

         
*(*(arre+1)+2) == 60

*/