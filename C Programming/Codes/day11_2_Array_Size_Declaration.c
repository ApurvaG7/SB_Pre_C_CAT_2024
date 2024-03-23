// Size of Entire Array
// Size of 1 Element

#include<stdio.h>
void main()
{
    int arre[5] = {11,12,13,14,15};

    printf("\n Size of Arre = %d\n", sizeof(arre)); // 5*4=20   //size of array * scale factor
    printf("\n Size of Arre[2] = %d\n", sizeof(arre[2]));    // 4

    /*
    arre[0] = 11 - address of arre[0] = 1000
    arre[1] = 12 - address of arre[1] = 1004
    arre[2] = 13 - address of arre[2] = 1008

    */

   for(int i=0;i<=4;i++)
   {
    printf("\nArre[%d] = %d - address of arre[%d] = %u",i,arre[i],i,&arre[i]);

   }
   printf("\n Arre = %u",arre);



    
}