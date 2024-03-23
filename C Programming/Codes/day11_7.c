// Arrays in Function

#include<stdio.h>
void sscn(int aree[5]);
void pprt(int arrree[5]);
void main()
{
    int arre[5];
    sscn(arre);
    pprt(arre);
    // here we are not passing the whole array to the functon
    // we are just passing the base address of the array 
    // rest of the operations are performed using scalor factor multiplication
    // here the size of the array will be a whole array
    


}

void sscn(int aree[5])// so in this funtion we can give different name to the arrya and use the same base address
{
    printf("\nEnter The Elements of Array :");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&aree[i]);
    }
    // here the size of the array will be a single unit
}

void pprt(int arrree[5])// so in this funtion we can give different name to the arrya and use the same base address
{
    printf("\nThe Array Elements are : ");
    for(int j=0;j<=4;j++)
    {
        printf("%d\t",arrree[j]);
    }
    // here the size of the array will be a single unit
}