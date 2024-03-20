// operators : assignment op, comma op, comma with brackets
// unary -> 1 operand
// binary -> 2 operands
// ternary -> 3 operands

#include<stdio.h>

int main()
{
    int num1 = 10; // assignment
  //  int num2 = 1,2,3; // not allowed

  int num2; // declaration
  num2 = 1,2,3;
  printf("num2 = %d\n",num2);
  /*
    initializing multiple values to a variable is not allowed
    but, declaring and then assigning multiple values is allowed,
    but the leftmost value is assigned to the variable
  */

    int num3 = (1,2,3);
    // initializing multiple values with brackets is allowed
    printf("num3 = %d\n",num3);
    return 0;
}