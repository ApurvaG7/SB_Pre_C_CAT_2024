// Dynamic Memory Allocation
// realloc
// syntax       (void *) realloc (void *mem block , size)
// realloc has two input parameter
// it is used to shrink or expand memory which is already allocated by malloc or calloc
// eg: (*variable) = (data type *) realloc (*variable , count * size)
// we have to change the update the memory of *variable 
// so in realloc first we take the *variable of which we have to update the memory
// then the realloc function multiplies the count and size of data type (count*size) to get the memory we want to update to
// then as realloc returns the base address of the memory we need (type *) 
// now we have to update the memory of *variable so we will point it to *variable 


#include<stdio.h>
#include<stdlib.h>

void main()
{
    //initializing memory using malloc or calloc
    int count = 5;
    int *ptr = calloc(count,sizeof(int));
    // here 5 memory blocks are created of integer data type
    
    // scanning 5 elements like normal calloc function
    printf("\nEnter The Elements : ");
    for(int a=0;a<count;a++)
    {
        scanf("%d",&ptr[a]);
    }
    //printing the elements
    printf("\n\nThe Elements are :");
    for(int b=0;b<count;b++)
    {
        printf("\n%d",ptr[b]);
    }

    // now we want to increase the size of the memory 
    // for that we use realloc ()

    ptr = (int *) realloc (ptr,7 * sizeof(int));
    // here we have increased the size from 5 to 7 ie. 20 bytes to 28 bytes
    // earlier we have 5 values already assigned 
    // now to add the remaining 2 values
    ptr[5] = 1001;
    ptr[6] = 1002;

    //printing the elements after realloc
    printf("\n\nThe Elements after realloc are :");
    for(int c=0;c<7;c++)
    {
        printf("\n%d",ptr[c]);
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
    the memory which is changed by realloc is deleted by the realloc function automatically

    the memory is occupied by the prog even after closing it so we need to free the memory 
    to avoid memory leakage

    after the memory is freed the pointers are pointing to nothing 
    such pointers are called dangling pointers
    now to avoid dangling pointers we need to assign NULL value to them

*/