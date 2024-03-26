// String Comparision

#include<stdio.h>
#include<string.h>

void main()
{
    char str1[] = "Cheri, cheri lady Goin', through a motion, Love is where you find it, Listen to your heart";
    char str2[] = "Cheri, cheri lady Goin', through a motion, Love is where you find it, Listen to your heart";
    int cmp;

    cmp = strcmp(str1,str2);
    if(cmp == 0)
        printf("\nStrings are Equal");
    else if(cmp > 0)    // 1
        printf("\nString 1 is Greater");
    else    // -1
        printf("\nString 2 is Greater");

    printf("\n%s",str1);
    // what strcmp does that it compares the 
    // it takes the ASCII value of each index and comapres them
    // we all know that A = 65 , a = 97
    // strcmp(1,2) compares string 1 with string 2
    // so comparing each index ASCII Value 
    // strcmp returns only      0    1    -1
    // 0    if both the strings are equal 
    // 1    if ASCII value of String 1 is less than ASCII value of String 2     
    // -1   if ASCII value of String 1 is more than ASCII value of String 2
    // means Capital Letter and Small Letter   
    // to make it easier understand in whichever string 
    // if we compare 2 Capital Letter or Small letters then we go with Presidence 
    // if we compare Capital Letter with Small letter then the string in which small letter is present is the greater string

    // so taking that into consideration
    // if We compare QWERTY with QWErty
    // we will get -1 bcoz
    // ASCII(R) - ASCII(r) == 82 - 114 == -32 its a -ve value so retunrs -1
    // so String 2 is Greater


    // if We compare QWERTY with ASDFGH
    // we will get 1 bcoz
    // ASCII(Q) - ASCII(A) == 81 - 65 == 16 its a +ve value so we return 1
    // so String 1 is Greater

    
    // if We compare ASDFGH with QWERTY
    // we will get 1 bcoz
    // ASCII(A) - ASCII(Q) == 65 - 81 == -16 its a -ve value so we return -1
    // so String 2 is Greater
}