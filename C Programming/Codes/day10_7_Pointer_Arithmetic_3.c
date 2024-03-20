// Pointer Arithmetic   3

#include<stdio.h>
void main()
{
   int n3=10;
   int *ptr3 = &n3;
   printf("\n Value of Num3 = %d",n3);   //  10
   printf("\n Value of Num3 using *ptr3 = %d",*ptr3);   //  10
   printf("\n Address of Num3 = %u",&n3);   //  1000
   printf("\n Address of Num3 using *ptr3 = %u",ptr3);   //  1000

   //now we are post incrementing the value at *ptr3
   // what it will do is increment the address of *ptr3
   // and how much it will increase is relevent to its scale factor
   // scale factor
   // size of the data type is known as scale factor
   // since its an int pointer the address will increase by 4

   *ptr3++; // increments the pointer as per the scale factor
   printf("\n Value of Num3 = %d",n3);   //  10
   printf("\n Value of Num3 using *ptr3 = %d",*ptr3);   //  its printing garbage value 
   //why bcoz ptr value has increased by 4 and now its not referencing to &n3
   // so it doesnt hold any value so it prints garbage value 
   printf("\n Address of Num3 = %u",&n3);   //  1000     address of n1 havent changed
   printf("\n Address of Num3 using *ptr3 = %u",ptr3);   //  1004
   // its printing +4 bits than &n1 bcoz ptr was holding address of n1
   // by incrementing ptr++ we added +4 to ptr (scale factor)
   // thats why it will have +4 address value than &n3



   
   

    
}