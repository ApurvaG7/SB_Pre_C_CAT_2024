// Post and Pre Increment and Decrement
// Pre      ++i     --i
// Post     i++     i--

#include<stdio.h>
void main()
{
    int n1 = 10, n2;
    n2 = n1++;
    printf("\n n1 = %d\t n2 = %d", n1,n2);
    // value is 10 in n1 
    // so n1 value is transfered  to n2 then its incremented
    // n1 = 11 and n2 =  10

    n2 = ++n1;
    printf("\n n1 = %d\t n2 = %d", n1,n2);
    // value is 11 inn n1 // from previous calcu
    // its pre  increment so not the value of n1 which is 11 
    // its incremented and then its transfered to n2
    // so n1 which was 11 becomes 12 
    // and n2 also becomes 12 bcoz its transfered after incrementing the value
    


}