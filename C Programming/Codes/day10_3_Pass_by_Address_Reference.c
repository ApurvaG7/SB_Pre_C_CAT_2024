// Pass by Address
// Pass by Reference

#include<stdio.h>
void swap(int *ptr1,int *ptr2);
void main()
{
    int n1 = 10,n2 = 20;
    printf("\nIn Main Before Swap() n1=%d   n2=%d",n1,n2);  // 10   20
    swap(&n1,&n2);      // here we are passing address
    printf("\nIn Main After Swap() n1=%d    n2=%d",n1,n2);  // 20   10

}

void swap(int *ptr1,int *ptr2)
{
    int temp;
    printf("\nIn Swap() before swapping a1=%d    a2=%d",*ptr1,*ptr2);  // 10   20
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("\nIn Swap() after swapping a1=%d    a2=%d",*ptr1,*ptr2);  // 20   10
}



/*
in this prog we are passing the address so

main()
variable        num1        num2
value           10          20
address         a,2000      a,3000



swap()
variable        a1          a2            temp
value           a,2000      a,3000        00
address         5000        6000          7000




swap() after swapping
variable        a1          a2            temp
value           a,2000      a,3000        10
address         5000        6000          7000

// here we are taking addresses so the prog will change the values at
the address of n1,n2 in main()
not in Swap()




*/