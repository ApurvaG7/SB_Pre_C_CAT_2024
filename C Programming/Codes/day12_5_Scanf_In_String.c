// scanf in strings

#include<stdio.h>
void main()
{
    
    char naam[200]; // pre defining the size of the arrya
    printf("\nChal Naam Bol Apna : ");
    scanf("%s%*c",naam);   // here we are passing the base address
    printf("\nKya Bola....\t: %s\n",naam);
    // here scanf function only scans value till white space after that it stops scanning
    // to solve that we have gets()
    // we added a char suppresor to the first scanf() bcoz we want it to stop after any blank space or enter key
    // otherwise it will goto the gets() and scans there

    char pura_naam[200];
    printf("\nPura Naam Bol : ");
    gets(pura_naam);   // here we are passing the base address
    printf("\nKya Bola....\t: %s",pura_naam);
    
}