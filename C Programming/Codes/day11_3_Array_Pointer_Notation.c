// Array With Pointer Notation

#include<stdio.h>
void main()
{
    int arre[5] = {101,102,103,104,105};
    printf("\narre[2] = %d",arre[2]);   //array elements
    printf("\narre[2] = %d",*(arre+2)); //pointer notation
    /*
    in the first printf we are printing the value at arre[2] using the elements in array
    in second printf we are printing the value at arre[2] using pointer notation

    *(arre+0) == *(1000 + 0*4)
    means
    *(base address of array + element number) ==
    == *(base address of array + element number * scale factor)

    */
   printf("\n printing values using arreeee\n");
   for(int i = 0; i<=4;i++)
   {
    printf("\t %d",arre[i]);

   }
   printf("\n printing values of arreeee using pointer notation\n");
   for(int j=0;j<=4;j++)
   {
    printf("\t %d",*(arre+j));
    // *(arre+0) == *(1000 + 0*4)
    // *(arre+1) == *(1000 + 1*4)
   }

}