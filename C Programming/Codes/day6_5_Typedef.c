// typedef
// Giving another name to the datatypes

#include<stdio.h>
void main()
{
    int num1;
    unsigned int num2;

    typedef unsigned int u_i;
    // now we have declared unsigned int as u_i using typedef
    // typedef is used to as an alias for writing the datatypes
    // it makes the code simpler and easier to understand
    u_i num3;
    // here we have declared 
    // unsigned int num3;
    // using u_i
    // its possible bcoz of typedef
    enum departments {Training,Devlopement,Marketing,Finance};
    typedef enum departments dept;
    dept d1;
    // here dept is another name of the datatype enum departments just like above
    // d1 is the variable

    typedef enum color{Red,Yellow,Green,Blue,White,Pink} clr;
    clr c1;
    // here clr is another name for enum color
    // c1 is the variable
    // we can also declare it as
    enum color c2;
    // but using typedef its earier to maintain code

    



}