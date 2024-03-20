// return statements
// returns the control to the calling area

#include<stdio.h>

int main()
{   
    printf("\nin main finction l1");
    return 0;
    printf("\nin main finction l2");
    return 0;
    // here in this prog we have to return an value
    // bcoz the function name has a int 
    // its expecting something to be returned
    // but we have given 2 return statements
    // return 0     returns the value and exit the function to the calling area
    // so the next printf statements are not executed

}