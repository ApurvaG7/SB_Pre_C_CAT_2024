// unary ops(++, --) with logical ops (&&,||,!)
#include<stdio.h>

int main()
{
    int num1 = 10,num2 = 20;

    int result = num1++ || ++num2;
    //  result = 10++ || (not executed)
    // result = 1  num1 = 11   num2 = 20
    printf("num1 = %d num2 = %d result = %d\n",num1,num2,result);

    num1 = 0,num2 = 20;
    result = num1++ || ++num2;
    //result = 0++ ||
    // result = false || ++20(21)
    //result = 1 num1 = 1  num2 = 21
    printf("num1 = %d num2 = %d result = %d\n",num1,num2,result);

    num1 = 0 , num2 = 20;
    result = num1++ && ++num2;
    //result = 0++ &&
    // result = false && (not executed)
    // result = 0 num1 = 1 num2 = 20
    printf("num1 = %d num2 = %d result = %d\n",num1,num2,result);

    num1 = 20 , num2 = 10;
    int num3 = 15;
    result = num1++ || ++num2 && num3++;
    printf("num1 = %d  num2 = %d  num3 = %d  result = %d\n",num1,num2,num3,result);

    return 0;
}

/*
result = num1++ || ++num2 && num3++;
result = (num1++) || (++num2 && num3++);
result = (expression 1)  || (expression 2) -----> as && has higher precedence
result = true  ||  (not executed)
result = 1
num1 = 21
num2 = 10
num3 = 15

*/