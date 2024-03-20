// bitwise ops : & | ^ ~
#include<stdio.h>
int main()
{
    int num1 = 20 , num2 = 15;
    int result = num1 & num2; // AND
    printf("result of & = %d\n",result);

    result = num1 | num2; // OR
    printf("result of | = %d\n",result);

    result = num1 ^ num2; // XOR
    printf("result of ^ = %d\n",result);

    num1 = 10;
    num2 = -20;
    printf("~num1 = %d\n",~num1); 
    // -(n+1)  -->  -(10+1)  --> -11
    printf("~num2 = %d\n",~num2);
    // -(n+1)  -->  -(-20+1)  -->  -(-19)  --> 19


    return 0;
}