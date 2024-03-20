// pointer to pointer
#include<stdio.h>

int main()
{
    int num1 = 10;
    int *ptr = &num1;
    int **p_ptr = &ptr;

    printf("num1 = %d\n",num1);
    printf("num1 using ptr = %d\n",*ptr);
    printf("num1 using p_ptr = %d\n",**p_ptr);

    *ptr = 20;
    printf("num1 = %d\n",num1);
    printf("num1 using ptr = %d\n",*ptr);
    printf("num1 using p_ptr = %d\n",**p_ptr);

    **p_ptr = 30;
    printf("num1 = %d\n",num1);
    printf("num1 using ptr = %d\n",*ptr);
    printf("num1 using p_ptr = %d\n",**p_ptr);
    return 0;
}