//sizeof operator

#include<stdio.h>

void main()
{
    int a=25;
    char ch='A';
    float f;
    double pi=3.142;

    printf("size of a = %d\n", sizeof(a));
    // size of a = 4
    
    printf("size of int = %d\n", sizeof(int));
    // size of int is 4
    printf("size of short int = %d\n", sizeof(short int));

    printf("size of character ~ char is = %d\n", sizeof(ch));
    // size of ch is 1

    printf("size of float ~ f is = %d", sizeof(f));
    //size of float f is 4

    printf("size of double ~ pi is = %d", sizeof(pi));
    //size of double pi is 8

    printf("size of A ie.characer is = %d\n", sizeof('A'));
    // size of character A is 4

    printf("size of 3.142 is = %d\n", sizeof(3.142));
    // 3.142 is considered as double value so size is 8
    // higher value is alwasys considered

    printf("size of 3.142f is = %d\n", sizeof(3.142f));
    // now the size of number which is  a float number its value is considered so value will be 4

    printf("size of a + ch = %d\n", sizeof(a+ch));
    // the size will be 4
    // higher value is alwasys considered
    // int(double) + double = double

}
