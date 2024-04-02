// macros
// Conditional Macros
// #if  #elif   #else   #endif  
// #ifdef   #ifndef
// Conditional Compilation 
// as preprocessor is done before compilation.
// it can be used to control the source code to be made available for compilation process
// the condition should be evaluated at preprocessing time.

#include<stdio.h>
#define PI 3.14

void main()
{
    #ifdef PI       // #ifdef   means   if defined
        printf("PI is Defined");
    #else       
        printf("PI is not Defined");
    #endif  // #ifdef should end with #endif
    // the rest is just as ifelse synatx

    // here you can see that the true statement of the if case is highlighted
    // and the false statement is not highlighted
    // this is bcoz we are checking is PI defined in the prog or not
    // if defined then run the true statements
    // if not defined then run the false statements
    // run means write only those statements into the preprocessor file
    // dont write rest of the statements
    // same example with false statement 

    #ifdef ADD       // #ifdef   means   if defined
        printf("ADD is Defined");
    #else       
        printf("ADD is not Defined");
    #endif  // #ifdef should end with #endif
    // here ADD is not defined the run only false statements 
    // run means write only those statements into the preprocessor file
    // dont write rest of the statements
}