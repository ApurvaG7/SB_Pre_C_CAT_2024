// recursion : factorial
#include<stdio.h>
int fact(int num);
int main()
{
    int num = 5;
    int result = fact(num);
    printf("result = %d\n",result);
    return 0;
}

int fact(int num)
{
    if(num == 0)
        return 1;
    return num * fact(num-1);
}