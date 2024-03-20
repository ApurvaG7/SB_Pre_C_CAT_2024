// upcasting and downcasting
#include<stdio.h>

int main()
{
    float fvar = 5.0f/3; // upcasting
    // fvar = (float)5/3 // explicit conversion
    printf("fvar = %.2f\n",fvar);

    int num = 12.34;// downcasting --> data loss
    printf("num = %d\n",num);
    return 0;
}