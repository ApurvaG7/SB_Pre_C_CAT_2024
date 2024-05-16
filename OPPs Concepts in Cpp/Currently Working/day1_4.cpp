// Function Overloading

#include<stdio.h>

void PfData(int A)
{
    printf("\n%d",A);
}

void PfData(char ch)
{
    printf("\n%c",ch);
}

void PfData(int G,int F)
{
    printf("\n%d %d",G,F);
}

void PfData(int D,char S)
{
    printf("\n%d %c",D,S);
}

void PfData(char Q, int I)
{
    printf("\n%c %d",Q,I);
}

main()
{
   PfData(10);
   PfData('A');
   PfData(25,75);
   PfData(69,'G');
   PfData('S',96);
}