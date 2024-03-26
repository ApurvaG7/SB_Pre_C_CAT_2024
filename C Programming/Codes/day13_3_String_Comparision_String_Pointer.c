// String Comparision using String Pointer

#include<stdio.h>
void main()
{
    char *str1 = "Ke janam pyaar tumse hai, Ye tujh pe hi nazar kaatil, Jo mar ke bhi na samjhe kyun, Bhalla koi phir tujhko jaan de";
    char *str2 = "Ke janam pyaar tumse hai, Ye tujh pe hi nazar kaatil, Jo mar ke bhi na samjhe kyun, Bhalla koi phir tujhko jaan de";
    // here the strings are created in RO Memory
    // and Pointer in Main()
    // here if the strings are Equal while Compilet time
    // then they are created in a same RO with same Addresses

    // so what we do in the if() is compare if they have same base address or not
    // if the base address is same then the strings are same
    // otherwise they are different

    if(str1 == str2)
        printf("\nStrings are Equal");
    else
        printf("\nStrings are not Equal");

    printf("\n%s",str1);

    /* main()
        str1 address(500)
        str2 address(500)


        RO Section//
        Ke janam pyaar tumse hai...........
        Starting address(500)
        
    */

}