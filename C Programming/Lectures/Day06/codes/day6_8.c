// anonymous enum

#include<stdio.h>

enum {blue,green,red,black}c1;
// c1 is the variable of anonymous enum
int main()
{

    typedef enum {Marketing,Training,HR}dept;
    // dept is a name for anonymous enum
    dept d1;
    // d1 is a variable

    return 0;
}