// Void Pointer 
// Generic Pointer

#include<stdio.h>

void main()
{
    int num = 100;
    char ch = 'A';

    void *ptr = NULL; // void pointer

    ptr = &num;     // we have declared that ptr is storing the address of num

    // 

    printf("\n Num = %d", num);     // printing Number using variable
    printf("\n Num Address = %d", &num);     // printing Address using & 
    printf("\n Num using Ptr = %d", *(int*)ptr);     // printing Number using Pointer   // we have taken ptr as an Integer %d to print its value
    printf("\n Num Address using ptr= %d", (int*)ptr);     // printing Address using Pointer    


    printf("\n\n Printing an Char\n");

    ptr = &ch;  // now we have declared the ptr is storeing the address of ch
    
    printf("\n Char = %c", ch);     // printing Char using Variable
    printf("\n Char Address = %d", &ch);     // printing Address of Char using &
    printf("\n Char using Ptr = %c", *(int*)ptr);     // printing Char using Pointer    // we have taken ptr as an Char %c to prints its value
    printf("\n Char Address using ptr= %d", (int*)ptr);     // printing Address using Pointer


}
// in this prog we are using a void pointer / generic pointer
// we took an ptr and gave it value off NULL
// 