#include<stdio.h>

int main()
{
    //bool :- it can take true or false value. It takes one byte in memory
    bool b=true;  // false
    printf("\n bool b =%d  size of bool b =%d", b, sizeof(b));

    //wchar_t :- it can store 16 bit character. It takes 2 bytes in memory.

    wchar_t wch='W';
    printf("\n wchar_t wch =%c  size of wchar_t wch =%d", wch, sizeof(wch));
    return 0;
}