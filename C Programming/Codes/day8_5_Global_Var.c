// Global Variable

#include<stdio.h>

int n1 = 10;
void plus1();

void main()
{
    printf("\n The value of num in main () = %d",n1); // 10 bcoz its initial

    n1++; // here we have incremented the value of n1
    printf("\n The value of num in main () after increment = %d",n1); // here 11 bcoz we incremented

    plus1();
    // here we are not passing any value to the function but as n1 is globally declared
    // the current value of n1 in this whole prog now is currently 11
    // and the plus1() is executed 
    // go there |
    //          | in plus1()   

    printf("\n The value of num in main () after the plus1() and increment = %d",n1);
    // here now after we return from the plus1() the value of n1 is updatede
    // now if we use n1 we will take the latest updated n1 value 
}

void plus1()
{
    printf("\n The value of num in plus1 () = %d",n1);
    n1++;
    
    // here n1 is used in some statements
    // but we are not passing any arguments
    // as n1 was globally declared we will take the last recent value of n1
    // and use it as we seem
    // and also update it in the global variable
}