// dynamic memory allocation : calloc
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int count = 5;
    int *ptr = calloc(count,sizeof(int));

    for(int i =0;i<count;i++)
    {
        *(ptr+i) = i+10;
    }

    for(int i =0;i<count;i++)
    {
        printf("%4d",ptr[i]);
    }

    free(ptr);
    ptr = NULL;
    return 0;
}