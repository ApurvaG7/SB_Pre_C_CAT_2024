// logical ops : && || !
// return 0 (false)or  1 (true)
// && requires both conditions to be true
// if first condition is false for &&, it does not check the 2nd condition

// || returns true if either of the one conditions is true
// if the condition is true, || does not check the 2nd condition

// !
#include<stdio.h>

int main()
{
    int num1 = -15, num2 = 0;

    printf("num1 && num2 = %d\n",num1 && num2); // 15 && 20
    printf("num1 || num2 = %d\n",num1 || num2);
    printf("!num1 = %d\n",!num1);
    printf("!num2 = %d\n",!num2);
    return 0;
}