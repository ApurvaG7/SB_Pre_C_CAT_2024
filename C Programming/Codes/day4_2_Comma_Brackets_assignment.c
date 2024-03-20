// Assignment operators     comma operators     comma with brackets
// unary -- 1 operand
// binary -- 2 operands
// ternary -- 3 operands

#include<stdio.h>
void main()
{
    int n1 = 100; // assignment
    // int n2 = 1,2,3; // it is not allowed
    int n2; // declaration
    n2 = 1,2,3;
    printf("\n %d",n2);
    // in here without () in declaration only the first value before , is stored in n2 and further values are discareded



    int n3 = (1,2,3);
    printf("\n %d",n3);
    // in here with () in decalartion only the last value after , is stored in n3 and previous values are discarded
    


}