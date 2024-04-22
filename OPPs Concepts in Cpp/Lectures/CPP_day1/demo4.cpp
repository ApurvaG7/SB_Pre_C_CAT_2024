#include<stdio.h>
//Function Overloading
void printValue(int a)
{
    printf("\n int a=%d",a);
}
//Return type is not considered for function overloading.
// int printValue(int a)
// {
//     printf("\n int a=%d",a);
// }
void printValue(int a,int b)
{
    printf("\n int a=%d  int b=%d",a,b);
}
void printValue(char c)
{
     printf("\n char c=%c",c);
}
void printValue(int a,char c)
{
    printf("\n int a=%d char c=%c",a,c);
}
void printValue(char c,int a)
{
     printf("\n char c=%c int a=%d",c,a);
}
int main()
{
   printValue(10);
   printValue('A');
   printValue(11,22);
   printValue(44,'Z');
   printValue('B',55);
    return 0;
}