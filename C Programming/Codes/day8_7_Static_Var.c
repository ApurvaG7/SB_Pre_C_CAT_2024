// Static Variable

#include<stdio.h>

void ssum();

void sum();

void main()
{

    printf("\n in ssum() we are using a static variable\n");
    ssum(); // 10
    ssum(); // 11
    ssum(); // 12
    ssum(); // 13
    ssum(); // 14

   // printf("\n Num after all sum() = %d",num);
   // this line is commented bcoz static variable is not accessible in this function
   // a static variable is only accessible within the same function or block
    
    
    printf("\n\n the ssum() is over \n");

    printf("\n in sum() we are not using a static variable\n");

    sum(); // 10
    sum(); // 10
    sum(); // 10
    sum(); // 10
    sum(); // 10

}

void ssum()
{   
    static int num = 10;
    printf("\n Value in Sum() = %d",num); // 10 11  12  13  14
    num++;
    // in this funcion we have declared the num variable as static 
    // so it retains the value from the last runtime and access the lastest value while running next time
    // as it reads the static keyword it remembers the last updatede value and access it 
    // it only works in the same function

}


void sum()
{   
    int num1 = 10;
    printf("\n Value in Sum() = %d",num1);  //  10  10  10  10  10
    num1++;
    // here we haven't declared the variable as an static 
    // so everytime it runs the function it declared the num1 value and starts from there
    
}

    // static variable can be declared within a function
    // it is also necessary to initialize static variable at the time of declaration
    // else it breaks the static rule and will cause an logical error
    // static variable should only be initialized with constant variables
    // if we attempt to initialize a static variable with an expresion which cannot be determined at runtime
    // or use a static variable with an non-constant variable
    // the program will fail to compile

    // static variable helps to retain state of particular variable through multiple calls of the same funtion
    // static variable are only initialized only once on first execution of a function in which it is declared

