// printf and scanf return types
#include<stdio.h>

int main()
{
int count = printf("Hello");
  printf("\ncount = %d\n",count); // 5
  
  int num1 = 100005;
  count = printf("num1 = %d\n",num1);
                //num1 = 100005
    printf("\ncount = %d\n",count); // 14

    int num2,num3;
    printf("Enter the value for num2 and num3 :");
    count = scanf("%d%d",&num2,&num3);
    printf("Count of scanf = %d\n",count); // 2

    return 0;
}

//return_type  function_name (function input parameters)

//                printf("Hello");