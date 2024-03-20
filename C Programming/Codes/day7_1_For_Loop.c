// For Luup
// for(loop var ;   condition   ;   loop var modify)
//      {
//          Instructions            
//}

#include<stdio.h>
void main()
{
    int n1;
    printf("\nEnter the Number : ");
    scanf("%d",&n1);

    int i;
    for(i=1;i<=10;i++)
    {
        printf("\n%d * %d = %d ",n1,i,n1*i);

    }

    /*
    step 1: loop var initialization , executed only once
    step 2 : condition check
    step 3 : execute the block 
    step 4 : modify the loop variable
    repeat steps 2, 3 and 4 till the condition is true
    */
    // for loop valid syntax
    printf("\n\n\n Valid Syntax for loops\n\n");

    int j = 1;
    for(;j<=10;j++)
    {
        printf("\n%d * %d = %d ",n1,j,n1*j);
        
    }
    


}
