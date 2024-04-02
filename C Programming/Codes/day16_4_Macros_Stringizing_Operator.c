// macros
// #    to convert to string
// Stringizing Operator
// converts given arguments to string
// demo syntax
// #define PRINT(var) printf(#var "=%d" ,var)

#include<stdio.h>
#define MULTI(a,b) printf(#a "*" #b " = %d",a * b)
// here we also want our define to print the strings from which we are taking the values
// so to print the variable name we use ' # variable_name ' to convert it to the string 
// it takes the variable name and copies it as string

void main()
{
    int N1 = 123, N2 = 10;
    MULTI(N1,N2);
//  printf(#a "*" #b " = %d",a * b);
//  printf("N1" "*" "N2" "= %d",N1 * N2);   // preprocessor
    // here we are just using the #define to do multiple actions 
}