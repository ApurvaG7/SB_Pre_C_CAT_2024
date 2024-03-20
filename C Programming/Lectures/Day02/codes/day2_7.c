// char suppress %*c

#include<stdio.h>

int main()
{
    int num1,num2;
    char ch;

   printf("Enter the value for num1 and num2 :");
    scanf("%d%d",&num1,&num2);

   printf("Enter the value for ch :");
   scanf("%*c%c",&ch); // %*c is used to suppress the enter or tab
   printf("values are num1 = %d num2 = %d\n",num1,num2);
   printf("Value for ch = %c\n",ch);
    
    return 0;
}