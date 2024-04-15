// Basics of Pointer

#include<stdio.h>
void main()
{
    int n=10;
    int *ptr = &n;  // referencing
    // here pointer is an integer variable holding the address of n

    int *ptr1;   // this is a wild pointer //if we only declare the pointer variable it will give garbage value
    int *ptr2 = NULL;   //this is a NULL pointer
    
    printf("\nn = %d",n);   // 10
    printf("\nAddress of n = %u",&n);   // eg: 1000
    printf("\nAddress of n using pointer = %u",ptr);
    printf("\nn using ptr = %d",*ptr);  // dereferencing
    // * is dereferencing operator
    // * it also means ~ value at pointer
    
    // *ptr ~ value of n --> 10
    // ptr  ~ value in n --> 1000


    // pointer behaves like a local variable

    /*
    
    *ptr
    value at ptr
    value at 1000
    10


    */


   // changing state of variable using pointer
   printf("\n\n\nchanging state of variable using pointer\n");

   int A=101;
   int *pt = &A;

   printf("\nA = %d",A); //101
   printf("\nA using pt = %d",*pt);     // 101
   printf("\nAddress of A = %u",&A);    // eg: 5001
   printf("\nAddress of A using pt = %u",pt);   // eg: 5001


   A=202;

   printf("\nA = %d",A); //202
   printf("\nA using pt = %d",*pt);     // 202
   printf("\nAddress of A = %u",&A);    // eg: 5001
   printf("\nAddress of A using pt = %u",pt);   // eg: 5001


   *pt = 303;

   printf("\nA = %d",A); //303
   printf("\nA using pt = %d",*pt);     // 303

   printf("\nAddress of A = %u",&A);    // eg: 5001
   printf("\nAddress of A using pt = %u",pt);   // eg: 5001





   /*

in the above prog we can see that the address of the pointer is not changing
we can call the value at A using pointer also
we can also update the value of A using pointer 


Every variable has a memory location and every memory location has its address defined
which can be accessed using & which denotes the address in the memory

A pointer pointer is a variable whose value is the address of another variable
ie>     direct address of the memory location

//  internally a pointer is an unsigned integer



*/


// Size of Pointers
printf("\n\n\n\n Size of Pointers\n");

int Z = 240;
char ch = 'A';
float fl = 1.234f;
double dl = 3.142;

int *poit = &Z;
char *ch_poit = &ch;
float *fl_poit = &fl;
double *dl_poit = &dl;

printf("\n Size of poit = %d",sizeof(poit));
printf("\n Size of ch_poit = %d",sizeof(ch_poit));
printf("\n Size of fl_poit = %d",sizeof(fl_poit));
printf("\n Size of dl_poit = %d",sizeof(dl_poit));

// 32 bit compiler --> pointer --> 4 bytes
// 64 bit compiler --> pointer --> 8 bytes 

//we have to declare the pointer with the same data data type we have declared the variable





}
