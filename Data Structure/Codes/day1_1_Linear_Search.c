// Linear Search
#include<stdio.h>
#define SIZE 9  // here we are giving the size of the array so that we don't have to replace its value again and again in prog
int Linear_on(int num, int arre[SIZE]);
int walk;

void main()
{
    int aree[SIZE] = {77,55,33,66,11,22,44,99,88};
    int tell; // number we have to find in the array
    printf("Tell me Boi What are you looking for ....: ");
    scanf("%d",&tell);
    int index = Linear_on(tell,aree);
    // here we are passing 2 values to the linear_on()
    // tell - which is the number we wanna find
    // aree - base address of the array 

    if(index == -1)
    {
        printf("\nIt is not within my power my child to guide you to your destination,");
        printf("\nThere is no path for you continue your journey my child,");
        printf("\nReturn Where you Started and Look again what you really want in your life.");
    }
    else
    {
        printf("\nWhat you are looking for is waiting for you behind the door of at %d,",index+1);
        printf("\nYou'll have to face many hardships and go though %d trials to reach the door whcih is holding all your answers.",walk);
    }
        
}

int Linear_on(int num, int arre[SIZE])
{
    for(int i=0;i<SIZE;i++)
    {
        walk++;// it counts the number of iteration which are taking it to find the number
        if(num == arre[i])
        {
            return i;
            // value of i ie. position at which we found the element is returned 
            // and the fun() is terminated
        }
    }
    return -1;
    // why are we returning -1 is bcoz we need an integer type of return
    // and if all cases fails we need to do return something which will tell the compiler that number is not found
    // if we return a number it might denote the position at which the element is found
    // but we have to tell the compiler that number is not found
    // we know that all the position at which value is stored is a +ve integer
    // and an -ve integer position is not possible
    // so we return an -ve number to tell the main() that the number is not found
    // and check for the -ve number where the fun() is called
}