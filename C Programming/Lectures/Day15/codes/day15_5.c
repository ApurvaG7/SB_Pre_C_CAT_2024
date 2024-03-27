// dynamic memory allocation : malloc

// syntax : (void *)malloc(size)
#include<stdio.h>
#include<stdlib.h>

int main()
{
   int *ptr = (int *) malloc(sizeof(int));

   *ptr = 10;
   printf("value = %d\n",*ptr);


    int *ptr1 = (int *)malloc(sizeof(int)*5);

    printf("Enter 5 elements :");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&ptr1[i]);
    }

    printf("The elements are :\n");
    for(int i =0;i<5;i++)
    {
        printf("%4d",ptr1[i]);
    }

    free(ptr);
    free(ptr1); // to avoid memory leakage
    ptr = NULL;
    ptr1 = NULL; // to avoid dangling pointer
    return 0;
}