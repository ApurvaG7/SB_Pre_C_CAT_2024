// assigning address of one type of variable to different type of pointer

#include<stdio.h>

int main()
{
    int num = 500;
    char *ptr = &num;

    printf("num = %d\n",num);
    printf("num using ptr = %d\n",*ptr);
    return 0;
}