// Recursion 
// Power-of     Program using recursion

#include<stdio.h>

int power(int b,int i);




void main()
{
    int base,index;
    printf("\nEnter a Num : ");
    scanf("%d",&base);
    printf("\nEnter the power to the number ~ raise_to : ");
    scanf("%d",&index);
    int result = power(base,index);
    printf("\n Ans : %d",result);

}

int power(int b,int i)
{
    if(i == 0)
        return 1;
    return b * power(b,i-1);
}


// in this program we are using a recursion to call the same function over and over
// the execution of the program will be like

/*

lets say for 2^5
b=2 i=5  power() == f

2*f(2*f(2*f(2*f(2*f(1)))))
now we go from right to left
2*1=2   2*2=4   2*4=8   2*8=16  2*16=32

f(1) returns value 1 bcoz we declared it




*/
