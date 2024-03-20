//bitwise operator
// &    |   ^   ~
#include<stdio.h>
void main()
{
    int n1=20,n2=15,result;
    result = n1 & n2;   //AND
    printf("\n result of & = %d",result);
    // first we take binary of n1 and n2 ie. 20 and 15
    // binary of    --> 32  16  8   4   2   1
    //           20 --> 0   1   0   1   0   0
    //           15 --> 0   0   1   1   1   1
    //-----------------------------------------------
    //                  0   0   0   1   0   0   == 4
    
    // this came from the bitwise AND table
    // ie.  A   B       A & B
    //      0   0       0
    //      0   1       0
    //      1   0       0  
    //      1   1       1


    result = n1 | n2;   //OR
    printf("\n result of | = %d",result);

    // first we take binary of n1 and n2 ie. 20 and 15
    // binary of    --> 32  16  8   4   2   1
    //           20 --> 0   1   0   1   0   0
    //           15 --> 0   0   1   1   1   1
    //-----------------------------------------------
    //                  0   1   1   1   1   1   == 31
    
    // this came from the bitwise OR table
    // ie.  A   B       A | B
    //      0   0       0
    //      0   1       1
    //      1   0       1  
    //      1   1       1

    result = n1 ^ n2;   //XOR
    printf("\n result of ^ = %d",result);

    // first we take binary of n1 and n2 ie. 20 and 15
    // binary of    --> 32  16  8   4   2   1
    //           20 --> 0   1   0   1   0   0
    //           15 --> 0   0   1   1   1   1
    //-----------------------------------------------
    //                  0   1   1   0   1   1   == 27
    
    // this came from the bitwise XOR table
    // ie.  A   B       A & B
    //      0   0       0
    //      0   1       1
    //      1   0       1  
    //      1   1       0

    n1=10,n2=-20;
    //  for XOR there is a formula 
    // -(n+1)
    printf("\n ~n1 = %d",~n1);
    // -(n+1)    -->     -(10+1)     --> -11
    
    printf("\n ~n2 = %d",~n2);
    // -(n+1)    -->     -(-20+1)     --> 19
}