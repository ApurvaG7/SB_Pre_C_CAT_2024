// macros : SQR function
#include<stdio.h>
//#define SQR(a) a * a
#define SQR(a) (a) * (a)
int main()
{
    int num = 5;
    printf("result = %d\n",SQR(5+2));
    // printf("result = %d\n",num * num);
    // printf("result = %d\n",5+2 * 5+2);
    //printf("result = %d\n",(5+2) * (5+2));

    return 0;
}