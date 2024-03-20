// function 
// without parameters and without return type

#include<stdio.h>
void add();
void main()
{
    add();

}

void add()
{
    int n1,n2;
    printf("\nEnter 2 Numbers : ");
    scanf("%d %d",&n1,&n2);
    int sum = n1+n2;
    printf("\nSum = %d",sum);


    
    
}