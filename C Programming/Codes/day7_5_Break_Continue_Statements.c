//Jump Statements
// break : used in switch and loops
// continue : used in only with loops

#include<stdio.h>
void main()
{
    for(int i=1;i<=10;i++)
    {
        if(i==5)
            break;
        
        printf("%d  ",i); // 1  2   3   4
    }
    printf("\nLoop Exited");

    // in this program we are using a break statement to break out of the loops
    // for that we are using if condition to verify the i with our statements
    // and if the condition is true then the If part is executed
    // and bcoz of break statement we exit the loop
    // remember that
    // break statement exits the loop
    // and next set of instructions are executed



    // for continue
    printf("\n\n\n Continue \n\n\n");
    
    for(int j=1;j<=10;j++)
    {
        if(j%2==0)
            continue;

        printf("%3d",j);  // 1    3   5   7   9

    }
     printf("\nLoop Exited"); // loop is normally edited

    // in this program we are using a continue statement to run the set of instruction in the loop
    // for that we are using if condition to verify the i with our statements
    // and if the condition is true then the if part is executed
    // which means continue is going to skip the rest of instructions 
    // and will pass the cursor to for loop
    // it does not exit the loop
    // rather goes to the start of it
    // we need to print the odd numbers
    // so when the if condition is true // 2 % 2 = 0
    // then the continue is executed and its passed to the for loop starting
    // skipping the number 2 which is an even number 
    // and when the if condition is false // 3 % 2 = 1
    // then the continue is skipped and rest of the instruction in the loop are executed
    // therefore printing the number 3 which is an even number

}