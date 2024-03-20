//  Luups

// there are 2 clasification in loops
//      1) Entry Controlled Loops   :   For  While
//      2) Exit Controlled Loops    :   Do-While

/*
    there are 3 things in a loop which are important
    1) loop variable initialization
    2) condition check
    3) loop variable modification
*/

// While Loop

#include<stdio.h>
void main()
{
    int num;
    printf("\nPrinting Table \nEnter The Number : ");
    scanf("%d",&num);
    int i=1; // loop variable initialization
    while(i<=10) // condition check
    {
        printf("\n%d * %d = %d",num,i,num*i);
        i++; // loop variable modification
    }
}