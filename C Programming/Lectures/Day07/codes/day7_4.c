//do-while loop using switch case

// switch case
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num1,num2,choice;  
    printf("Enter the 2 numbers :");
    scanf("%d%d",&num1,&num2);
do{
    printf("0.Exit\n1.Addition\n2.Subtraction\n3.Division\n4.Multiplication\n :");
    printf("Enter your choice :");
    scanf("%d",&choice);

    switch(choice) 
    {
        case 0:
                exit(0);

        case 1: // addition
                printf("Addition = %d\n",num1 + num2);
                break;
        case 2: // Subtraction
                printf("Subtraction = %d\n",num1 - num2);
                break;
        case 1+2: // Division
                printf("Division = %d\n",num1 / num2);
                break;
        case 2*2: // Multiplication
                printf("Multiplication = %d\n",num1 * num2);
                break;        
        default : 
                printf("Enter the valid choice between 1 to 4.");
               break;      
    }
}while(choice!=0);

    return 0;
}