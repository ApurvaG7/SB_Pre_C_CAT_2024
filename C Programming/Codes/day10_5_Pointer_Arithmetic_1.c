// Pointer Arithmetic   1

#include<stdio.h>
void main()
{
   int n1 = 10;
   int *ptr = &n1;
   printf("\n Value of Num = %d",n1);   //  10
   printf("\n Value of Num using *ptr = %d",*ptr);   //  10
   printf("\n Address of Num = %u",&n1);   //  1000
   printf("\n Address of Num using *ptr = %u",ptr);   //  1000

   // now we are incrementing pointer 
   // whar it does is increase the pointer 
   // and how much it increses is relevent to its scale factor
   // scale factor 
   // size of the data type is known as scale factor
   // for int = 4       char = 1    double = 8 and so on

   printf("\n\n Incrementing the Vallue of ptr ~ ptr++\n\n");
   ptr++; // incrementing the value of ptr
   printf("\n Value of Num = %d",n1);   //  10
   printf("\n Value of Num using *ptr = %d",*ptr);   //  its printing garbage value 
   //why bcoz ptr value has increased by 4 and now its not referencing to &n1
   // so it doesnt hold any value so it prints garbage value 
   printf("\n Address of Num = %u",&n1);   //  1000     address of n1 havent changed
   printf("\n Address of Num using *ptr = %u",ptr);   //  1004
   // its printing +4 bits than &n1 bcoz ptr was holding address of n1
   // by incrementing ptr++ we added +4 to ptr (scale factor)
   // thats why it will have +4 address value than &n1

}