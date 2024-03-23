// Character String

#include<stdio.h>
#include<string.h>
void main()
{
    char  str1[5] = {'A','S','C','I','V'}; // char array
    char  str2[5] = {'A','S','C','I','\0'};// string
    char  str3[5] = {'A','S','C','\0'}; // string with partial initialization
    // here remaining elements are initialized as \0

    char str4[5] = "Ishq"; // its a string bcoz last element is \0 
    char str5[8] = "Sufiyana"; //  its a char array bcoz all the spaces are occupied in the array
    // since its an char array if we want to print it using %s we will get garbage value at the end
    
    // cahr str6[];     // this initialization is not allowed
    // bcoz an char string is similar to an array
    
    char str7[] = "Tere"; // its a string 
    // we are not defineing the size but all the char are in one after another so
    
    char str8[] = {'V','a','a','s','t','e'}; // its an char array
    // since its an char array if we try to print it using string
    // we get garbage value at the end
    // also here we are not defining the size but the we are specifying the characters
    
    

    printf("\n str1 = %s",str1); // ASCIV
    // printing as string
    printf("\nstr2[2] = %c\n",str2[2]); // C
    // printing a single char from the string

    //printing a string using char via loops
    for(int i=0;i<5;i++)
    {
        printf("%c\t",str3[i]);
    }

    char str9[] = "Mera";
    char str10[] = "Vaaste"; // just for the song 
    char str11[] = "Sufiyana"; // just for song


    printf("\n\n To summarize this lets print rest of the strings accordingly\n\n");
    printf("\n%s %s %s %s %s...",str7,str10,str9,str4,str11);   //7 10 9 4 11
    printf("\n%s %s %s, %s %s %s...",str9,str4,str11,str9,str4,str11);  //9 4 11 9 4 11
    printf("\n%s %s %s %s %s...",str7,str10,str9,str4,str11);
    printf("\n%s %s %s, %s %s %s...",str9,str4,str11,str9,str4,str11);

}