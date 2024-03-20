// void pointer - generic pointer

#include<stdio.h>

int main()
{
    int num = 10;
    char ch = 'Z';

    void *ptr = NULL; // void pointer

    ptr = &num;
    printf("num = %d\n",num);
    printf("num using ptr = %d\n",*(int*)ptr);

    ptr = &ch;
    printf("ch = %c\n",ch);
    printf("ch using ptr = %c\n",*(char *)ptr);
    return 0;
}