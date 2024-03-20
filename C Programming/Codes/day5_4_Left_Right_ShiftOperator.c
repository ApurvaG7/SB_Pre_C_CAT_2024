// bitwise shift operator
// <<   left shift operator
// >>   right shift operator

#include<stdio.h>
void main()
{
    int n = 10;
    scanf("%d",&n);

    printf("\n Left Shift by 2 & 3");
    printf("\n n << 2 = %d", n << 2);
    printf("\n n << 3 = %d", n << 3);

    printf("\n Right Shift by 2 & 3");
    printf("\n n >> 2 = %d", n >> 2);
    printf("\n n >> 3 = %d", n >> 3);
}

    //  for LEFT SHIFT both +ve and -ve numbers
    //  X << N ==   X  * 2^N    eg:30
    //  30 << 2     ==      30 * 2^2    ==  30 * 4  ==  120
    // for -ve number eg: -20
    // -20 << 3     ==      -20 * 2^3   ==  -20 * 8 ==  -160


    // for RIGHT SHIFT both +ve and -ve numbers
    // X >> N   ==  X   /   2^N     eg: 40
    // 40 >> 3  ==  40  /   2^3     ==  40  /   8   =   5
    // for -ve number eg: -30
    // -30  >>  3   ==  -30  /   2^3     ==  -30  /   8   =   -3.75

    // now we have encountered a float number but we to print a deccimal number
    // bcoz there cant be float number in bitwise operations 
    
    // if we RIGHT SHIFT  a -ve number we have to round off the value to the decimal
    // so -3.75 ==  -4
    // -30  >>  3   ==  30  /   2^3     ==  30  /   8   =   -3.75   = -4


    // what if we do it for the +ve number eg: 30
    // 30  >>  3   ==  30  /   2^3     ==  30  /   8   =   3.75

    // in +ve number we do not round off the number we just take the integer value 
    // so 3.75  ==  3
    // 30  >>  3   ==  30  /   2^3     ==  30  /   8   =   3.75     =   3















// Detailed Explanation

    /*
    Please NOTE : Whenever there is -ve number , kindly find 2's complement of that number and then process left shift and right shift operations.


*********  +ve number Left shift *************

Steps:
	Convert given number to binary
	Discard first two bits(if its <<2) and do left shift
	Convert final binary value to decimal
* Example:  30<<2

30 in Binary : 0001 1110
30<<2 :	       0111 1000

64+ 32 + 16 + 8 = 120 

#####################################################################################

*********  -ve number Left shift *************

Example : -20<<3

0001 0100 ===> 20 in binary

1110 1011  ===> 1's complement
	+1  ====> +1 
==========
1110 1100 ==>2's Complement of 20
===========

0110 0000  ==> 20<<3

1001 1111 ===> since it is negative number (so 	invert the result and add 1)
       +1
============
1010 0000
============

128 + 32 = -160





#####################################################################################

*********  +ve number Right shift *************



Example : 40 >> 3
0010 1000 ====> 40 in binary

0000 0101 ====> 40>>3 is equal to decimal 5


so, 40>>3 = 5




#####################################################################################

*********  -ve number Right shift *************

Example : -30 >> 3
0001 1110   ===> 30 in binary

1110 0001  ===>1's complement of 30
       +1  ===>add 1
-----------------------
1110 0010  ====> 2's Complement of 30

1111 1100  ====> shift right by 3 and filling it with 1


0000 0011  ====> inversion of result
       +1 ====>adding one
=============
0000 0100 ====> final result  = -4

*/