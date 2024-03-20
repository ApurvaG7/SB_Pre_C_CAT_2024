// Pointer to Pointer
#include<stdio.h>
void main()
{
    int n1 = 10;
    int *ptr = &n1;
    int **p_ptr = &ptr;

    printf("\n N1 = %d",n1);
    printf("\n N1 using ptr = %d",*ptr);
    printf("\n N1 using p_ptr = %d",**p_ptr);
    printf("\n Address of N1 = %u",&n1);
    printf("\n Address of ptr = %u",&ptr);
    printf("\n Address of p_ptr = %u",&p_ptr);

    *ptr = 20;  // only value of n1 is replaced by referencing *ptr to n1
    
    printf("\n N1 = %d",n1);
    printf("\n N1 using ptr = %d",*ptr);
    printf("\n N1 using p_ptr = %d",**p_ptr);
    printf("\n Address of N1 = %u",&n1);
    printf("\n Address of ptr = %u",&ptr);
    printf("\n Address of p_ptr = %u",&p_ptr);

    **p_ptr = 30;   //  only value of n1 is replaces by referencing to **p_ptr to *ptr to n1
    
    printf("\n N1 = %d",n1);
    printf("\n N1 using ptr = %d",*ptr);
    printf("\n N1 using p_ptr = %d",**p_ptr);
    printf("\n Address of N1 = %u",&n1);
    printf("\n Address of ptr = %u",&ptr);
    printf("\n Address of p_ptr = %u",&p_ptr);

    // Pointer to Pointer Over
    printf("\n\n Pointer Arithmertic\n");

    ptr++;
    printf("\n N1 = %d",n1);
    printf("\n N1 using ptr = %d",*ptr);
    printf("\n N1 using p_ptr = %d",**p_ptr);
    printf("\n Address of N1 = %u",&n1);
    printf("\n Address of ptr = %u",&ptr);
    printf("\n Address of p_ptr = %u",&p_ptr);


}