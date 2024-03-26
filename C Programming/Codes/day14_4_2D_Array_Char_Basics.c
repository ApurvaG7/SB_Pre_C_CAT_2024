// Char 2D Array 
// Printing and Size

#include<stdio.h>
void main()
{
    char dept[][50] = {"HR","Training","Accounts","Sales","Marketing"};
    /*
            01234567890123456789012345678901234567890123456789   
        0   HR
        1   Training
        2   Accounts
        3   Sales
        4   Marketing
    
    */
   printf("\n Dept[1] = %s",dept[1]);   // printing the string at dept[1][0]    // Training
   printf("\n Dept[2][3] = %c",dept[2][3]); // printing the Char at dept[2][3]  //  o
   printf("\n Dept[2][3] using pointer notation = %c",*(*(dept+2)+3)); // printing the Char at dept[2][3] using pointer notation //  o

   printf("\n Size of Dept = %d",sizeof(dept));     // 250
   printf("\n Size of Dept[1] ~ (row) = %d",sizeof(dept[1]));   // 50
   printf("\n Size of Dept[2][4] ~ (row)(col) = %d",sizeof(dept[2][4]));    // 1 bcoz its an char matrix



   
}