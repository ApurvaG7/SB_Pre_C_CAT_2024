// Constant Variables
#include<stdio.h>
void main()
{
    const float PI = 3.145;
    // we can also write this as 
    // float const PI = 3.145;
    printf("\nvalue of constant variable PI = %f",PI); // printing using variable

    //  PI = 2.156;
    // here we have declared PI as const so we cant change its value directly

    // but we can create a pointer and store the constant variable address     
    float *ptr = &PI;   // here we only get a warning not error
    // now we can change the value at address
    // ie we can change the value of a constant variable
    
    *ptr = 2.15; // assigning value to the address

    // but we can point to the address of the constant variable
    // and change its value

    printf("\nvalue at *ptr after changeing its value = %f",*ptr);// printing the value of *ptr
    
    printf("\nValue of Constant after changing at PI = %f",PI); // here if we again print the constant variable 
    // we can check the value of the constant variable value has also changed
    

}