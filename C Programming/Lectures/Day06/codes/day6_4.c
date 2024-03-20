// switch case with char
// switch case
#include<stdio.h>

int main()
{
    int num1,num2;
    char choice;
    printf("Enter the 2 numbers :");
    scanf("%d%d",&num1,&num2);
    printf("+.Addition\n-.Subtraction\n/.Division\n*.Multiplication:\n");
    printf("Enter your choice :");
    scanf("%*c%c",&choice); // -

    switch(choice)  
    {
        case '+': // addition // case 43
                printf("Addition = %d\n",num1 + num2);
                break;
        case '-': // Subtraction // case 45
                printf("Subtraction = %d\n",num1 - num2);
                break;
        case '/': // Division
                printf("Division = %d\n",num1 / num2);
                break;
        case '*': // Multiplication
                printf("Multiplication = %d\n",num1 * num2);
                break;
        
        default : 
                printf("Enter the valid choice between 1 to 4.");
               break;
      
    }

    return 0;
}