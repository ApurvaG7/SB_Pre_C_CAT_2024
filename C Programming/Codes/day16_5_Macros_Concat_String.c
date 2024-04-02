// macros
//  ##      to concat
// it is used to combine 2 strings together and make a new string
// Token Pasting Operator
// combines arguments of macros with some symbol
// syntax
// #define VAR(a,b) a##b

#include<stdio.h>

#define PRNT(a,b) printf("%d",a##b)

void main()
{
    int Basic = 10;
    int Salary = 20;
    int BasicSalary = 100;
    PRNT(Basic,Salary);
//  printf("%d",a##b);
//  printf("%d",BasicSalary);   // preprocessor
// here we have combined Two int Variables and made a new variable 
// this new variable can us used anywhere within the scope
}