//sizeof operator

#include<stdio.h>

int main()
{
    int num1= 25;
    char ch = 'A';
    float fnum;
    double dvar = 1.3;

    printf("size of num1 = %d\n",sizeof(num1));
    // size of num1 = 4
    printf("size of int = %d\n",sizeof(int)); // 4

    printf("size of ch = %d\n",sizeof(ch)); // 1
    printf("size of fnum = %d\n",sizeof(fnum)); // 4
    printf("size of dvar = %d\n",sizeof(dvar)); // 8

    printf("size of A = %d\n",sizeof('A')); // 4

    printf("size of 1.2 = %d\n",sizeof(1.2));
    // 1.2 is considered as double value so size if 8

    printf("size of 1.2f = %d\n",sizeof(1.2f)); // 4

    printf("size of num1 + ch = %d\n",sizeof(num1+ch));

    // int(double) + double = double
    return 0;
}