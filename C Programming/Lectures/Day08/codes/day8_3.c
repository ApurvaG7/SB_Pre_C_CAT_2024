//storage classes
// auto variable
#include<stdio.h>
int addition(int num1,int num2);
int main()
{
   auto int num = 20; // local variable
   
   { // nested block
          num = 30;
     //   printf("num = %d\n",num); // 30
        {
          
       //     printf("num = %d\n",num); // 30
        }

   }
   printf("num = %d\n",num); // 20

   int sum = addition(10,20);
   

    return 0;
}

int addition(int num1,int num2)
{
   int result = num1 + num2;
  return result;
}