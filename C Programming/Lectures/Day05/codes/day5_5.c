// conditional statements : if-else

#include<stdio.h>
int main()
{
    int num1,num2;

    printf("Enter the values for num1 and num2 :");
    scanf("%d%d",&num1,&num2);

    if(num1 > num2) // if(1) // if(0)
    {
        printf("Num1 is greater !");
    }
    else
    {
        printf("Hello !");  
        printf("Num2 is Greater !"); // part of main
    }
    return 0;
}