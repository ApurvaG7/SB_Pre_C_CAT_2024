// Printf Internal Execution

#include<stdio.h>
void main()
{
    int n1=123;
    int *ptr = &n1;

    printf("\n N1 = %d      ++*ptr = %d", n1,++*ptr);   //  124  124
    // we get 124    124 
    // but the expected value was 123    124
    // here the execution of printf is from right to left
    // means the printf function executed the statements from right to left
    // sp ++*ptr will gets executed first then 
    // it will update the value of n1
    // so while printing n1 we get 124 not 123
    // bcoz n1 was updated using *ptr


}