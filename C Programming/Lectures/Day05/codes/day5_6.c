// Nested if-else
#include<stdio.h>

int main()
{
    int num1,num2,num3;

    printf("Enter 3 values :");
    scanf("%d%d%d",&num1,&num2,&num3); // 5  15  30

    if(num1 > num2) // 5 > 15
    {
        // Nested If
        if(num1 > num3) // 
        {
            printf("Num1 is the Greatest !\n");
        }
        else // Nested else
        {
            printf("Num3 is the Greatest !\n");
        }
    }
    else if(num2 > num3)  // 15 > 30
    {
        printf("Num2 is Greatest !\n");
    }
    else
        printf("Num3 is Greatest !");
    return 0;
}