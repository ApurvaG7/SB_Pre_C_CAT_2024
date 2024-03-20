// recursion
// Factorial of a Number

#include<stdio.h>

int facto(int a);
void main()
{
    int n;
    printf("\nEnter the Number :");
    scanf("%d",&n);

   // int result = facto(n);
    printf("\n The Factorial of %d = %d",n,facto(n));

}

int facto(int a)
{

    if(a == 0)
        return 1;
    return a * facto(a-1);
}


/*
in this program we are using recursion to call the same function over and over again bcoz we need it
the execution of the program will be like

lets take eg n=5 also facto() = f
now for factorial we need to do
5*4*3*2*1 == 120

so a prog for this will be

5*f(4*f(3*f(2*f(1*f(1)))))

here we also go from right to left

1*1=1   2*1=2   3*2=6   4*6=24  5*24=120

f(1) returns value 1 bcoz we declared it


*/