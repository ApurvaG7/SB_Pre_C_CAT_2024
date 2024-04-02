// Preprocessor Error       Miscellaneous directives
// how to write your own errors 
// cuz the error she gave wasn't enough

#include<stdio.h>
#define PI 3.14

void main()
{
    #ifdef PI       // #ifdef   means   if defined
        printf("PI is Defined");
    #else       
        printf("PI is not Defined");
    #endif  // #ifdef should end with #endif

    #ifdef ADD       // #ifdef   means   if defined
        printf("ADD is Defined");
    #else       
        #error "ADD not Defined
        // here rather than compile prog and then finding out where could the error be
        // just write your own errors and get those answers yourself
        // your girl wont even compile until you solve that error
    #endif  // #ifdef should end with #endif
}

// in this prog the code wont compile and will give our predefined error
// but dont worry this is part of the prog
// that's what she said.
