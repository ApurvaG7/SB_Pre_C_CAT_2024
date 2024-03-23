// Sizeof and Strlen difference

#include<stdio.h>
#include<string.h>
void main()
{
    char stri[] = "You Wanna Know My Height?";
                // 1234567890123456789012345   
    printf("\nString = %s",stri); // You Wanna Know My Size?

    printf("\nSize of String = %d",sizeof(stri)); // 26
    // sizeof returns the size of the string including the \0  value

    printf("\nLength of String = %d",strlen(stri)); // 25
    // strlen returns the length of the character till \0
    // lets take another eg

    char stri1[] = "My Height is 6'1\0ft.";
                 // 12345678901234567 890       \0 is counted as 1 char
    printf("\nString = %s",stri); // My Height is 6'1\0ft.

    printf("\nSize of String1 = %d",sizeof(stri1)); // 21

    printf("\nLength of String = %d",strlen(stri1)); // 16
    // why only 16 but the total number of character are 20
    // bcoz strlen returs the length of character only till \0
    // and \0 is present at 17th location so the char strlen counter are only 16


}