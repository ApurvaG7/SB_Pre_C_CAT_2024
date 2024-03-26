// String Functions
// strcpy   String Copy (Desti,Source)
// strchr   finding a particular char (String,Char)
// strstr   finding a String in a String (String,String)
// strrev   reverse a string (Desti,Source)

#include<stdio.h>
#include<string.h>

void main()
{
    printf("\nstrcpy");
    char str1[] = "Pehle bhi main tumse mila hoon";
    char str2[500];
    // we are going to copy str1 to str2
    strcpy(str2,str1);
    // printing both the Strings
    printf("\nStr1 = %s\nStr2 = %s",str1,str2);

    // strchr
    printf("\nstrchr");
    char str3[] = "Pehli dafa hi milke laga";
    char *ptr = NULL;
    char ch = 'd';
    ptr = strchr(str3,ch);
    if(ptr == NULL)
        printf("\n\nCharacter not found in the String");
    else
        {
            printf("\n\nEureka! I've found it!");
            printf("\tAt the Location = %d",ptr-str3);
        }

    //strstr
    printf("\nstrstr");
    char str4[] = "Tune chhua zakhamo ko mere";
    char str5[] = "zakhamo ko mere";
    char *ptr1 = NULL;
    ptr1 = strstr(str4,str5);
    if(ptr1 == NULL)
        printf("\n\nString Not Found in the String");
    else
        {
            printf("\n\nEureka! I've found it!");
            printf("\tAt the Location = %d",ptr1-str4);   
        }

    //strrev
    printf("\nstrrev\t Reversing the String");
    char str6[] = "Marham marham dil pe laga";
    printf("\nStr6 = %s",str6);
    //Reversing the String
    printf("\nStr6 = %s",strrev(str6));


    printf("\nstrrev using *");
    char str7[] = "Marham marham dil pe laga";
    char *rev[5000];
    *rev = strrev(str7);
    printf("\nStr7 = %s",*rev);

    


    //lets print the song
    char str8[] = "Marham marham dil pe laga";
    printf("\n\n ~~\n");
    printf("\n%s \n%s \n%s \n%s",str1,str3,str4,str8);//1346


}