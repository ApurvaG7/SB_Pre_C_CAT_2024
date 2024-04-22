#include<stdio.h>

struct time
{
    int hr;
    int min;
    int sec;
};

void  printTime(struct time t1)
{
    printf("\n Time =%d : %d : %d",t1.hr,t1.min,t1.sec);
}
void acceptTime(struct time* ptr)
{
    printf("\nEnter time");
    scanf("%d%d%d",&ptr->hr,&ptr->min,&ptr->sec);
}
int main()
{
    int n;
    struct time t1;
    t1.hr=11;
    t1.min=7;
    t1.sec=20;
    printTime(t1);
    acceptTime(&t1);
    printTime(t1);
    return 0;
}