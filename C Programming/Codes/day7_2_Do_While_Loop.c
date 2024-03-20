// do-while luup
// exit controlled loop - it gets executed atleast once

#include<stdio.h>
void main()
{

    int n1=1;
    printf("\n\n\n do-while loop for default execution \n\n");
    do{
        printf("\n The code is Executing %d times",n1);
        n1++;

    }while(n1 >= 5);
    // in the above prog we have given the base value 3 
    // but to run the prog we need atleast value 5 as specified in the condition
    // since its a do-while loop it doesnt matter if the condition is true or false
    // the loop will get executed one as it enters and then the condition is checked
    // so we will get the output once 
    // but not the second time as the condition is false and loop is over

    printf("\n\n\n do-while loop for proper execution \n\n");

    int n2=1;
    do{
        printf("\n The code is Executing %d times",n2);
        n2++;

    }while(n2 <= 5);
    // in this above code we will get the desired output
    // we want 5 printf statements 
    // after the 5th execution the condition gets false
    // so we will exit loop and prog is over



}