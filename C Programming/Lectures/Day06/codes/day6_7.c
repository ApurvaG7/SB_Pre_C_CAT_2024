// typedef : giving another names to the datatypes

#include<stdio.h>

int main()
{
    int num1;
    typedef unsigned int un_int; 
    un_int num2; // unsigned int num2

    enum departments {Training,Development,Hr,Marketing,Finance};
    enum departments d1;
    typedef enum departments dept;
    dept d2; // dept is another name of datatype enum departments
    // d2 is the variable

    typedef enum colours{red,blue,green,yellow}clr;
    clr c1;
    // clr is another name for enum colours
    // c1 is the variable
    enum colours c2;
    return 0;
}