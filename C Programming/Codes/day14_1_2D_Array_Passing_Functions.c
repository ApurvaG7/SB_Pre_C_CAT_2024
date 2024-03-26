// Passing 2D Array to Functions

#include<stdio.h>
void take_data(int arre1[3][3]);
void show_data(int arre2[3][3]);
void main()
{
    int arre[3][3];
    take_data(arre);
    show_data(arre);


}

void take_data(int arre1[3][3]) // to take input from the user
{
    printf("\nEnter The Matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\nArre[%d][%d] = ",i,j);
            scanf("%d",&arre1[i][j]);
        }
    }
}

void show_data(int arre2[3][3]) // to print the array elements
{
    printf("\nThe Matrix is\n");
    for(int a=0;a<3;a++)
    {
        for(int b=0;b<3;b++)
        {
            printf("\t[%d]",arre2[a][b]);
        }
        printf("\n");
    }
}
// here we are passing an 2D array to the function 
// but we dont pass the whole array we just pass the base address of the array we  want to pass
// all the basics of function applies to the 2D array too
