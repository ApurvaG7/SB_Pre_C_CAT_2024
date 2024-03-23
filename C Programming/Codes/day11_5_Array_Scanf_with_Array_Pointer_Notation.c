// Scanf with Array Notation 
// Scanf with Pointer Notation

#include<stdio.h>
void main()
{
    int aree[5];
    printf("\nArray Notation\n");
    printf("\nEnter the Array Elements :");

    for(int i=0;i<=4;i++)
    {
        printf("\nAree[%d] = ",i);
        scanf("%d",&aree[i]);   // this  is scanning the values using array notation
    }
    printf("\n Array Elements are : ");
    for(int i=0;i<=4;i++)
    {
        printf("%d\t",aree[i]);
    }


    printf("\n\nPointer Notation\n");
    int arre[5];
    printf("\nEnter the Array Elements :");

    for(int i=0;i<=4;i++)
    {
        printf("\nAree[%d] = ",i);
        scanf("%d",arre+i);   
        // this  is scanning the values using pointer notation
        // we are passing the base address of array and bby doing scalar factor increment
        // we are adding values to the address of the array so it works the same 
        
    }
    printf("\n Array Elements are : ");
    for(int i=0;i<=4;i++)
    {
        printf("%d\t",*(arre+i));
        // here we are printing the values so we use *
        //  *(arre+i)
        // value at (address of arre + incerements)
    }


}