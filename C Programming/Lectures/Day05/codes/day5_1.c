// unary ops (++ --) with comma and bracket ops

#include<stdio.h>

int main()
{
    int num1 = 10,num2 = 20;
    int result;
    result = num1++, ++num1,num1++;
    //result = 10++   ++11   12++
//              10      12    12     ---> 13
// result = 10++;  result = 10

    printf("num1 = %d result = %d\n",num1,result);

    result = (++num2,num2++,++num2,num2++);
    //result = (++20,21++,  ++22,    23++)
    //          (21, 21,     23,    23 )       ----> 24
    // result = 23++
    printf("num2 = %d result = %d\n",num2,result);
    return 0;
}