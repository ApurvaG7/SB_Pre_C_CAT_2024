// Loops
/*  1) Entry controlled Loops : for loop, while loop
    2) Exit Controlled Loops : do-while loop
*/

/*
1) loop variable initialization
2) condition check
3) loop variable modification
*/
// while Loop

#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    int i = 1; // loop variable initialization

    while(i<=10) // condition check
    {
        printf("%d * %d = %d\n",num,i,num*i);
        i++; // loop variable modification
    }

    return 0;
}