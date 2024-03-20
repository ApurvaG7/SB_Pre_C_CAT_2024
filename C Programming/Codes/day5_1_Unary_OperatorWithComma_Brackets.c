// Unary Operator with comma and brackets
// ++   --
#include<stdio.h>
void main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int result;

    result = a++,   ++a,    a++;
    printf("\n a=%d     result=%d",a,result);
    //result = 10++     ++11       12++
    //result = 10       12          12 --> 13
    // result = 10        a = 13
    // here there are no brackets so the first value after the = sign is assigned to the result


    result = (++b,  b++,    ++b,    b++);
    printf("\n b=%d     result=%d",b,result);
    // result = (++20   21++    ++22    23++);
    //          (21     21      23      23)     last 23 --> 24 bcoz of post increment
    // result = 23++ 
    // bcoz there are brackets the last value is assigned to the = sign
    



}