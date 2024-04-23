#include<stdio.h>
//day1-demo7
class time
{
    private:
        int hr;//4
        int min;//4
        int sec;//4
    public:
        void  printTime()
        {
            printf("\n Time = %d : %d : %d",this->hr,this->min,this->sec);
        }
        void acceptTime()
        {
            printf("\nEnter time");
            scanf("%d%d%d",&this->hr,&this->min,&this->sec);
        }
        void incrTimeByOneSec()
        {
            //home work
        }
};//end of class
int main()
{
    int n;//4
    time t1;//12//when time is class then t1 is call as object
    printf("\n size of object t1=%d",sizeof(t1));
    t1.acceptTime();
   // t1.min=44;
    t1.printTime();

    time t2;
    t2.acceptTime();
    t2.printTime();

    time t3;
    t3.acceptTime();
    t3.printTime();

    return 0;
}