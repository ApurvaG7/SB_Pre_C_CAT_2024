// Storage Classes
// AKA Auto Variable

#include<stdio.h>
int Store(int n);

void main()
{
    auto int n1 = 20; // Local Variable which can be only used in main class
    printf("\nIn Main First Block %d",n1); // 20
    {   // its an nested block
        n1++;
        printf("\nIn Main First Nested Block %d",n1); //21
            {
                n1++;
                printf("\nIn Main Second Nested Block inside First Nested Block %d",n1); //22
            }

        printf("\nIn Main Inside First Nested Block but after the second Nested Block %d",n1); //22
        int ns = Store(n1); //sent 22 via n1    // got return 23 in saved in ns     // so n1 doesnt change from 22 it remains the same 
        printf("\n Printing the Store Return Value = %d",ns);   // here printed the ns value which was returned from function
    }
    printf("\nIn Main Block but after the first and second Nested Block %d",n1);    
    // since its in outer block it take 22 as the last nested block value
    
}


int Store(int a)
{
    a++;
    printf("\n In Store Function %d",a);
    return a;
}