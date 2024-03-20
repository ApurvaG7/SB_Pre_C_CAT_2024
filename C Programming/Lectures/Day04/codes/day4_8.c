// unary operators : ++(increment) --(decrement)
// pre-increment : ++oprand
// post-increment : operand++
// pre-decrement : --operand
//post-decrement : operand--

#include<stdio.h>

int main()
{
    int num1 = 10;
    int result = num1++;
    // num1++  -> num1 = num1 + 1
    // in post increment, the current value of num1 is assigned to result
    // and the the value of num1 is incremented;

    printf("num1 = %d  result = %d\n", num1 , result); // 11  10

    result = ++num1;
    printf("num1 = %d  result = %d\n", num1 , result);
    // ++num1  --> pre increment -> num1 = num1 + 1
    //in pre increment , the value is first incrmented and then the latest
    // incremented value is assigned to the left hand operand
    return 0;
}