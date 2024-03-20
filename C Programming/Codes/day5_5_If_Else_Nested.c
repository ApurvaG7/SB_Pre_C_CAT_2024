//Conditional Statements
// If Else
// Nested If Else

#include<stdio.h>
void main()
{
    int n1,n2,n3;
    printf("\nEnter 3 numbers :\n");
    scanf("%d %d %d",&n1,&n2,&n3);

    // simple if else // greatest of 2 numbers
    printf("\n Finding Greatest of 2 nums");
    if(n1>n2)
    {
        printf("\n Num 1 is Greatest");
    }
    else
    {
        printf("\n Num 2 is Greatest");
    }

    // nested if else // greatest of 3 numbers
    printf("\n Finding Greatest of 3 nums");
    if(n1>n2)   // if(1) for true   //if(0) for false
    {
        if(n1<n3)
        {
            printf("\n Num 1 is Greatest");
        }
        else
        {
            printf("\n Num 3 is Greatest");
        }
    }
    else if(n2>n3)
    {
        printf("\n Num 2 is Greatest");
    }
    else
    {
        printf("\n Num 3 is Greatest");
    }

  
}
