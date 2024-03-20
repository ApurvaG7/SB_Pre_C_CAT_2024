// size of pointer 

#include<stdio.h>

int main()
{
    int num = 10;
    char ch = 'A';
    float fvar = 1.2f;
    double dvar = 1.3;


    int *ptr = &num;
    char *c_ptr = &ch;
    float *f_ptr = &fvar;
    double *d_ptr = &dvar;

    printf("size of ptr = %d\n",sizeof(ptr));
    printf("size of c_ptr = %d\n",sizeof(c_ptr));
    printf("size of f_ptr = %d\n",sizeof(f_ptr));
    printf("size of d_ptr = %d\n",sizeof(d_ptr));

    return 0;
}