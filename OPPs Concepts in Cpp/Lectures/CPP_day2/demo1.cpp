#include<stdio.h>
//day1-demo7
struct time
{
    private:
    int hr;
    int min;
    int sec;
    public:
    void  printTime()
    {
        printf("\n Time = %d : %d : %d",hr,min,sec);
    }
    void acceptTime()
    {
        printf("\nEnter time");
        scanf("%d%d%d",&hr,&min,&sec);
    }
    void incrTimeByOneSec()
    {
        //home work
    }
};//end of struct
int main()
{
    int n;
    time t1; //when time is struct then t1 is call as variable
    t1.acceptTime();
   // t1.min=44;
    t1.printTime();
    return 0;
}