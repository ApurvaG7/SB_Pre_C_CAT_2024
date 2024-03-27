// dynamic memory allocation : realloc
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
printf("\n After Realloc :\n ");
   ptr = (int *) realloc (ptr,7*sizeof(int));
   ptr[5] = 15;
   ptr[6] = 16;
   
   for(int i =0;i<7 ;i++)
    {
        printf("%4d",ptr[i]);
    }
    return 0;
}