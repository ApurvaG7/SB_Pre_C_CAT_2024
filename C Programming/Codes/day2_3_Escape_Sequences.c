// Escape Sequence
//      \n      \r      \t      \b      \"      \'      %%      \\n

#include<stdio.h>

void main()
{
    printf("Hello \n Boiii \n"); // new line

    printf("Guten Morgan \rGood \n"); // \r takes the cursor to the start of the line and then start replacing the values after \r*****

    printf("Ohh I Love it and Hate it at the Same Timex \b \n"); // \b is basically a backspace

    printf("Ohh I Love it and Hate it at the Same Timx \be \n"); // \b is basically a backspace and whatever is written after \b**** will be replaced 

    printf("\t You and I drink the poison from the same vine \n"); // \t  is just Tab

    printf("9.09 pointer is equivalent to 87.60%% \n"); // to display a % we have to write %%

    printf("23\\7 = 3.145..... ~ Pi");

}