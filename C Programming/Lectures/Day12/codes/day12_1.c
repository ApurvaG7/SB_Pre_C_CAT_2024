// const
#include<stdio.h>

int main()
{
   const float PI = 3.14;
  // float const PI = 3.14;
    printf("PI = %.2f\n",PI); // 3.14

   // PI = 2.15;
   float *ptr = &PI;
   printf("PI using ptr = %.2f\n",*ptr); // 3.14

   *ptr = 2.13;
   printf("PI using ptr = %.2f\n",*ptr); // 2.13
   // PI is constant but ptr has the access to PI
   // hence it can change the value of PI

    return 0;
}