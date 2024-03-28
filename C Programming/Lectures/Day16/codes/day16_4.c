//# : to convert to string
#include<stdio.h>
#define multiply(a,b) printf(#a "*" #b "= %d",a * b)

int main()
{
    int num1 = 10, num2 = 20;

    // num1 * num2 = 200
    multiply(num1,num2);
   // printf(#a "*" #b "= %d",a * b)
    // printf("num1" "*" "num2" "= %d",num1 * num2);
    return 0;
}