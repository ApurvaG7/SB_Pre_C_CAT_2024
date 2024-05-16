// Default Arguments

#include<stdio.h>

void Sum(int a=1, int b=2, int c=0, int d=0, int e=0)
{
    int summa;
    summa = a+b+c+d+e;
    printf("\nA=%d B=%d C=%d D=%d E=%d \tSum=%d",a,b,c,d,e,summa);
}

main()
{
    Sum(11,12,13,14,15);
    Sum(11,12,13,14);
    Sum(11,12,13);
    Sum(11,12);
    Sum(11);
    Sum();
}