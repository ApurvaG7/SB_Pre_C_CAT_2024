// value out of range
#include<stdio.h>

int main()
{

    char ch1 = 'A';
    char ch2 = 'B';
    char sum = ch1 + ch2;

    printf("sum = %d\n",sum); 
    // -125 as sum is the char variable
    // range of char var = -128 to +127

    int add = ch1 + ch2;
    printf("add = %d\n",add); // 131
    // add is an integer variable
    // it can hold 131

    char num = 500; // -128 to +127
    

    printf("num = %d\n",num);
    return 0;
}