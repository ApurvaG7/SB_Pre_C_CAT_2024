// do-while loop
// exit controlled loop - executed atleast once
#include<stdio.h>

int main()
{
    int num = 3;
    do{
        printf("num = %d\n",num);
        num++;
    }while(num >= 5);
    return 0;
}