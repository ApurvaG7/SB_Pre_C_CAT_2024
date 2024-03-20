// for loop : entry controlled loop
// for(loop var init;condition;loop var modify) { ... }

#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    int i;
    for(i = 1;i<=10;i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }

    /*
    step 1: loop var initialization , executed only once
    step 2 : condition check
    step 3 : execute the block 
    step 4 : modify the loop variable
    repeat steps 2, 3 and 4 till the condition is true
    */
    return 0;
}
