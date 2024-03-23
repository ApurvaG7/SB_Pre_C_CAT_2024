// understanding the array values
#include<stdio.h>
void main()
{
    int aree[5]= {101,202,303,404,505};

    printf("\narre[3] = %d",aree[3]);   //404
    // here we are accessing the 4th vallue of the array using array notation

    printf("\narre[3] = %d",*(aree+3)); //404
    // here we are accessing the 4th value of the array using pointer notation
    
    printf("\narre[3] = %d",*aree+3);   //104
    // here we are accessing the base address of the array and adding 3 to it
    // (*aree) + 3 == 101 + 3 == 104
    

}