// Char Pointer to 2D Array

#include<stdio.h>
void main()
{
    char *str = "Cover Me In Sunshine";
    char *num[] = {"One","Two","Three","Four","Five"};
    // here both the variables are created in FAR
    // but the strings are in RO Data
    // we can access them but cannot update them
    
    printf("\n%s",num[1]);  // Two
    // here we are printing the string 

    printf("\n%c",num[2][2]);   // r
    printf("\n%c",*(*(num+2)+2));   // r
    // here we are just printing a char using both array notation and pointer notation


    /*
    
        FAR
        main()
              0
        str|     |
           | 100 |

              0         1       2       3       4
        num|     |  |     | |     | |     | |     |
           | 500 |  | 600 | | 700 | | 800 | | 900 |



        RO Data

            012345678901234567890
            Cover Me In Sunshine\0
            100 base address

            0123                    0123                    012345
            One\0                   Two\0                   Three\0   
            500 base address        600 base address        700 base address

            01234                   01234
            Four\0                  Five\0
            800 base address        900 base address

            // Changes are not allowed in RO data section         
    
    */


}