// Pointer Arithmetic   2

#include<stdio.h>
void main()
{
   int n2=10;
   int *ptr2 = &n2;
   printf("\n Value of Num2 = %d",n2);   //  10
   printf("\n Value of Num2 using *ptr2 = %d",*ptr2);   //  10
   printf("\n Address of Num2 = %u",&n2);   //  1000
   printf("\n Address of Num2 using *ptr2 = %u",ptr2);   //  1000

   //now we are pre incrementing the value at *ptr2
   // what it will do is go to the address of *ptr2 then increment its value
   // not the address but the actual value that address is holding
   // scale factor
   // size of the data type is known as scale factor
   // since its pre increment the value gets updated first 
   
   ++*ptr2; // value at ptr is incremented
   printf("\n Value of Num2 = %d",n2);   //  11
   printf("\n Value of Num2 using *ptr2 = %d",*ptr2);   //  11
   printf("\n Address of Num2 = %u",&n2);   //  1000
   printf("\n Address of Num2 using *ptr2 = %u",ptr2);   //  1000

   // here the value present in n2 gets updated bcoz we are incrementing the value by address
   

    
}