// Char Array Using Pointer Notation

#include<stdio.h>
void main()
{
    char stri[] = "ThisIsAllWeKnow"; // string

    printf("\nString = %s",stri);   // ThisIsAllWeKnow
    printf("\nStri[2] = %c",stri[2]);   // This == 0123 ~~ 2 = i
    // print the same char using pointer notation
    printf("\nStri[3] = %c",*(stri+3)); // 3 = s
    // here we are using scalor factor same as arrays
    printf("\nString after *4 =%s",stri+4); // IsAllWeKnow
    // it leaves the first 4 char then printf after that
    printf("\n *stri+4 = %c",*stri+4);  // X
    // here what happens is it takes the first char ASCII value and then adds 4 to it
    // so ASCII value of T == 84 
    // 84 + 4 == 88 ~~ 88 is the value of X
    // so we get the value X as output
    printf("\n *(stri+4)+5 = %c",*(stri+5)+6); //   N
    // here what happens is it takes the ASCII value of 6th char and then adds 6 to it
    // *(stri+5) == s
    // ASCII value of s == 115 
    // add 6 to it 115 + 6 = 121 ~~ 121 is the value of y
    // so we get the value y as output

 

}