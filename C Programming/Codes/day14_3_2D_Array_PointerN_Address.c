// Printing Data Using Array and Pointer Notation
// different ways to write &arreee

#include<stdio.h>
void main()
{
    int aree[3][3] = {101,202,303,404,505,606,707,808,909};
    /*
              0       1       2
        0   101     202     303
        1   404     505     606
        2   707     808     909

    */

   printf("\n Using Pointer Notation\n");

   printf("\n Aree[2][0] = %d",aree[2][0]);     // using traversing
   printf("\n Aree[2][0] = %d",*(*(aree+2)+0)); // using pointer notation
   printf("\n Aree[2][0] = %d",**(aree+2));     // using pointer notation only for column 0 locations
   printf("\n Aree[2][0] = %d",*aree[2]);       // using pointer notation and array traversing only for column 0 locations

   printf("\n Printing Address\n");
   printf("\n Aree = %u",aree);         // base address of array
   printf("\n &Aree = %u",&aree);       // base address of array
   printf("\n Aree+1 = %u",aree+1);     // base address of array + 1 * (num of elements in row * scalor factor of 1 element)    // size of row
   printf("\n &Aree+1 = %u",&aree+1);   // base address of array + size of the total array


}