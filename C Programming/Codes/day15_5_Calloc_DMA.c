// Dynamic Memory Allocation
// calloc
// syntax       (void *) calloc (count , size)
// malloc has two input parameter
// it contains 0 untill value is assigned
// its memory is created in Heap Section
// default return type of calloc is void pointer (void *)
// calloc returns the address of the memory it has created so we need a pointer to store that address
// 

#include<stdio.h>
#include<stdlib.h>

void main()
{
    //initializing a calloc
    int count = 5;
    int *ptr = calloc(count,sizeof(int));
    // here 5 memory blocks are created of integer data type
    // what calloc does that it has 2 input parameters
    // first is number of elements we want
    // second is the data type we want  
    // scalor factor * 
    
    // scanning 5 elements
    printf("\nEnter The Elements : ");
    for(int a=0;a<count;a++)
    {
        scanf("%d",&ptr[a]);
    }
    //printing the elements
    printf("\nThe Elements are :");
    for(int b=0;b<count;b++)
    {
        printf("\n%d",ptr[b]);
    }

    free(ptr);
    // we have to release the memory to avoid memory leakage
    ptr = NULL;
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