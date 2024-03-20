// functions
// type 2
// function with parameters and with return type

#include<stdio.h>

int Add(int n1,int n2);

void main()  // here this main function is asking for a return
{
    int sum = Add(25,75);
    printf("\nSum = %d\n", sum);

}

int Add(int a1,int a2)  // here in this function we have started with int bcoz it wants a return from the function and we are returning result
{
    int result = a1 + a2;
    return result; //result will be returned with the value 100 = 25 + 75
}