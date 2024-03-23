// Scan Sets

#include<stdio.h>
#include<string.h>
void main()
{
    char Stri[500];
    printf("\nEnter The String: ");
    // we can apply diff types of conditions on a string and also multiple of them at the same time
    // remove the // before scanf and then run 
    
     scanf("%[a-z]s",Stri);     // scans only small letters   // strating should be small letter
    // scanf("%[^a-z]s",Stri);    // scans everyting except small letters     // starting should not be small letter
    // scanf("%[A-Z]s",Stri);     // scans only Capital Letters   // starting should be Capital Letter
    // scanf("%[^A-Z]s",Stri);    // scans everyting except Capital Letters     // starting should not be capital letter
    // scanf("%[^\n]s",Stri);      // stops the scan when entered new line or Enter
    // scanf("%[0-9]s",Stri);       // scans only number till a white space
    // scanf("%[^0-9]s",Stri);       // scans everyting untill a number is entered (including new line)
    // scanf("%[^.]s",Stri);      // scans everyting untill . (including new line)

    printf("\n String  = %s",Stri);
}