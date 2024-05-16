// Returning Structure Variable from the Function

// initializing the variable in another function 
// then storeing the data in structure
// then accessing the data in another function
// go down and check the explanation

#include<stdio.h>

typedef struct date
{
    int dd;
    int mm;
    int yy;
}Romantic;
// Romantic is the name of the struct date

Romantic Dinner();
void Long_Drive(Romantic Eve);

void main()
{
    Romantic day;   //  goto point 3.
    // day is the variable of struct date which will hold the return value of structure
    
    day = Dinner();

    // goto point 4.
    Long_Drive(day);

}

Romantic Dinner()   //  goto point 2.
{
    Romantic Night;
    printf("I wanna know, I wanna know,\nHey-ey-ey, hey-ey-ey,\nWhere do we go? Where do we go?\nFrom hey-ey-ey, hey-ey-ey.. Date :");
    scanf("%d %d %d",&Night.dd,&Night.mm,&Night.yy);
    return Night;
}

void Long_Drive(Romantic Eve)   //  goto point 5.
{
    printf("Diamonds in your eyes cover your lies, cover your lies,\nTrust me, we can be special tonight, special tonight.\n");
    printf("%02d-%02d-%d",Eve.dd,Eve.mm,Eve.yy);

}


/*
    lets explain the program
    1. we have a structure and we want to create the variable of that structure into another function rather than main
    2. start with the funciton romantic
        here we have created a variable name 'Night' 
        Night is the variable of struct Romantic
        we will perform scanning of the data into the structure using Night Variable
        remember the Night variable is in FAR of Dinner() not in main()
        so when the Function Returns value the Variable Night will be Discarded

        as we are scanning the elements of a structure 
        we also need to return the appropriate values of that structure 
        so we need a variable of same structure type which will hold the values of Night Variable 

        so the return type of the function Dinner() will be The Name of the Same Structure
        ie. Romantic Dinner()
        ==  struct date Dinner()
        the return type is a structure

    3. now the Dinner() has returned the Values as an Structure 
        so here also we need a same type of structure variable to hold the values so we create another variable 'day'
        this day variable holds the value returned by Night variable in Dinner()

        remember this day variable is not passed to the function 
        it only holds the value which is returned by the Dinner function
        see in Dinner() we are not passing any arguments 
        // the variable to store the data is created in Dinner() and the base address of Sturct is returned using Night variable
        // as the Dinner() returns the value the Variable Night which was used to store the data into Struct Romantic is Destroyed
        // FAR of Dinner is Destroyed 

    4. Now our data is stored at the base address of day variable
        Now we need to print this data also
        so we will pass the base address of the Structure to Long_Drive() which is printing the data from the structure

    5. here Long_Drive() is just used for printing the data so we dont need to return anything so it will be 'void Long_Drive()'
        again we are passing the base address of a structure so need the same type of structure vairable to hold the address 
        so we create Long_Drive(Romantic Eve)
        here 'Long_Drive()' is the function to print the data
            'Romantic Eve'
        i.e  'struct date Eve'
        creating the same type of variable to store the base address of the structure
        now we just need to print the data from the structure using the variable Eve as we normally do

*/