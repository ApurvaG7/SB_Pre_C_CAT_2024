// switch case
#include<stdio.h>

int main()
{
    int num1,num2,choice;
    printf("Enter the 2 numbers :");
    scanf("%d%d",&num1,&num2);
    printf("1.Addition\n2.Subtraction\n3.Division\n4.Multiplication\n :");
    printf("Enter your choice :");
    scanf("%d",&choice);

    switch(choice)  // 7
    {
          default : 
                printf("Enter the valid choice between 1 to 4.");
               break;
        case 1+2: // Division
                printf("Division = %d\n",num1 / num2);
                break;
        case 1: // addition
                printf("Addition = %d\n",num1 + num2);
                break;
        case 2+2: // Multiplication
                printf("Multiplication = %d\n",num1 * num2);
               // break;
        case 2: // Subtraction
                printf("Subtraction = %d\n",num1 - num2);
                break;
      
    }

    return 0;
}