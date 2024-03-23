// Arithmetic With  &arre       &arree      &arreee+1

#include<stdio.h>
void main()
{
    int arre[5] = {123,456,789,10,11};

    printf("\narre = %u",arre);     // array stores nothing but the base address of array
    printf("\n&arre = %u",&arre);   // so the address of array and base address is same
    printf("\narre+1 = %u",arre+1); // this is diff check below for details

    // the first 2 statements are simple 
    // even if we increment them they will increment as per the scale factor
    // 1000         1004        1008
    // 1000  --> 1000+0*4
    // 1004  --> 1000+1*4
    // 1008  --> 1000+2*4

    printf("\n &arre+1 = %u",&arre+1);
    // lets consider base address of array is 1000 now if we  run the command *arre+1
    // what it does that it increases the scale factor of the entire array
    // means we have an array of 5 integer elements 
    // so the total memory acclocation of our array is 5*4 scale factor = 20 bytes
    // so if i run the commmand *arre+1
    //  1000 + 1 * 20 == 1000 + 20 = 1020
    // &arre+3
    // 1000 + 3 * 20 == 1000 + 60 = 1060

    


}