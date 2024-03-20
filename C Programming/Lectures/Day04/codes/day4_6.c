// relational ops : <, <=, >, >=, ==, !=
// returns 0(false) 1(true)

#include<stdio.h>

int main()
{
    int num1,num2;

    printf("Enter the value for num1 and num2 :");
    scanf("%d%d",&num1,&num2); // 15  15
    printf("num1 > num2 ? = %d\n",num1 > num2); // 0
    printf("num1 >= num2 ? = %d\n",num1 >= num2); // 1
    printf("num1 < num2 ? = %d\n",num1 < num2);
    printf("num1 <= num2 ? = %d\n",num1 <= num2);
    printf("num1 == num2 ? = %d\n",num1 == num2);
    printf("num1 != num2 ? = %d\n",num1 != num2);
    printf("%d <= %d ? = %d",num1,num2,num1<=num2);
    return 0;
}