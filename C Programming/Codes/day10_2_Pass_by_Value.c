// Pass by Value

#include<stdio.h>
void swap(int a1,int a2);
void main()
{
    int n1 = 10,n2 = 20;
    printf("\nIn Main Before Swap() n1=%d   n2=%d",n1,n2);  // 10   20
    swap(n1,n2);    // we are passing the values
    printf("\nIn Main After Swap() n1=%d    n2=%d",n1,n2);  // 10   20

}

void swap(int a1,int a2)
{
    int temp;
    printf("\nIn Swap() before swapping a1=%d    a2=%d",a1,a2);  // 10   20
    temp = a1;
    a1 = a2;
    a2 = temp;
    printf("\nIn Swap() after swapping a1=%d    a2=%d",a1,a2);  // 20   10
}


/*

in this prog we are passing the values so

main()
variable        num1        num2
value           10          20
address         2000        3000



swap()
variable        a1          a2      temp
value           10          20      00
address         5000        6000    7000


swap() after swapping
variable        a1          a2      temp
value           20          10      10
address         5000        6000    7000

// here the values have swapped but in a1 and a2
the scope of a1 and a2 is only limited to swap() and also its not returning anything
even if we were to return
we can only return 1 value 
but we need 2  values

so while printing the swapped variables in main function it takes
values which are in its own scope ~ n1,n2
and it will print same as its entered

the values are passed to the swap() but they are not returned 
thats why we get same values not the swapped values

so how to solve this 
we pass the address 
check next prog
for the solution
*/