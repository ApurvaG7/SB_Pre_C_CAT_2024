// Dynamic Memory Allocation
// malloc
// syntax       (void *) malloc (size)
// malloc has one input parameter
// it contains garbage value untill value is assigned
// its memory is created in Heap Section
// default return type of malloc is void pointer (void *)
// malloc returns the address of the memory it has created so we need a pointer to store that address
// 

#include<stdio.h>
#include<stdlib.h>

void main()
{
    //initializing a single malloc
    int *ptr = (int *) malloc(sizeof(int));
    *ptr = 10;
    printf("\n%d",*ptr);

    // for multiple malloc
    int *ptr1 = (int *) malloc(sizeof(int)*5); // here malloc is multiplied 5 times
    // here 5 memory blocks are created of integer data type
    
    // scanning 5 elements
    printf("\nEnter The Elements : ");
    for(int a=0;a<5;a++)
    {
        scanf("%d",&ptr1[a]);
    }
    //printing the elements
    printf("\nThe Elements are :");
    for(int b=0;b<5;b++)
    {
        printf("\n%d",ptr1[b]);
    }

    free(ptr);
    free(ptr1);
    // we have to release the memory to avoid memory leakage
    ptr = NULL;
    ptr1 = NULL;
    // now the memory is released so the pointer are now holding nothing in the addresses
    // to avoid dangling pointer we assign NULL to the pointers after memory is free



}
/*
    the memory which is created during the compile time is called compile time memory.
    it is destroyed by the compiler
    the memory which is created during runtime is called runtime memory 
    it is created in the heap section
    it must be destroyed by the user

    the memory is occupied by the prog even after closing it so we need to free the memory 
    to avoid memory leakage

    after the memory is freed the pointers are pointing to nothing 
    such pointers are called dangling pointers
    now to avoid dangling pointers we need to assign NULL value to them
    

*/