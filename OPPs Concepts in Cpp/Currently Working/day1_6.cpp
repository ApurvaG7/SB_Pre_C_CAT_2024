// Structure demo

#include<stdio.h>

struct Time
{
    int HH;
    int MM;
    int SS;
};

void PrintData (struct Time b1)
{
    printf("\n Time = %02d:%02d:%02d", b1.HH,b1.MM,b1.SS);
}

void ScanData (struct Time *c1)
{
    printf("\nTell Time  HH:MM:SS\n");
    scanf("%d %d %d",&c1->HH,&c1->MM,&c1->SS);
}


main()
{
    struct Time t1;
    t1.HH = 03;
    t1.MM = 44;
    t1.SS = 59;
    PrintData(t1);
    ScanData(&t1);
    PrintData(t1);
}