// char suppressor %*c

#include<stdio.h>
void main()
{
    char ch;
    int num1,num2;
    printf("Enter the Value of Num1 & Num2:\n");

    scanf("%d %d", &num1,&num2);

    printf("Enter a Char : ");

    scanf("%*c%c",&ch); // %*c is used to supress the enter key which is  blank
    printf("Num1 = %d \t Num2 = %d\n",num1,num2);
    printf("The Characrer is : %c\n",ch);


}