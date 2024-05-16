// Inline Function

#include<stdio.h>
#define Size 9
// here by writing the inline before a function we can request the compiler that
// if possible replace this function with a copy where the function is called
// this is done at the compile time
// it is used when the performance is needed
inline void PMSG() // function declaration
{
    printf("\n Printing Message...");
}

main()
{
    PMSG(); // function call
    PMSG();
    PMSG();
    PMSG();
    PMSG();
    
}

