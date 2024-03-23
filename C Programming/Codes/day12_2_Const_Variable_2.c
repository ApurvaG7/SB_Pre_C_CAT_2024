// Const Variable
// adding const to the pointer variable

#include<stdio.h>
void main()
{
    float const A = 12.456; // declaring a constant variable
    printf("\nPrinting Const Variable A = %f",A);
    

    float const *ptr = &A; 
    // declaring a constant pointer and storeing the address of constant variable
    printf("\nPrinting Const Variable A Using Pointer = %f",*ptr);
    float fvar = 4.12365;
    // here we are declaring another variable
    // its not a constant variable and also it have its own address

    // previously we saw we can change the value of consant variable
    // if we point its address to another pointer and then change the value using pointer
    // there the pointer was not constant
    
    // but what if we make the pointer constant and try again
    //*ptr = 8.520; // here we get an error 

    // we can do this   
    // we have another variable which is not constant
    // so if i point
    ptr = &fvar;
    // here we are passing the address of fvar to the ptr 
    // not at ptr address but changing the value of ptr to address of fvar
    // here ptr can hold the address of another variable

    // &fvar == ptr == *ptr == &A
    printf("\nAfter pointing address of fvar to the ptr and then\nPrinting Const Variable A Using Pointer = %f",*ptr);

    // but if we print the value of const variable  its not changed
    printf("\nPrinting Const Variable A = %f",A);
    // here we can say that 
    // the value of Const Variable cannot be constant anymore
    // bcoz if we print direct value and value of *ptr pointing to constant value
    // we are not getting same answer

}