#include<stdio.h>
class time
{
    private:
        int hr;//4
        int min;//4
        int sec;//4
    public:
        time() 
        {
            printf("\n ------time()------");
            hr=0;
            min=0;
            sec=0;
        }
        time(int h,int m,int s)
        {
            printf("\n ------time(int,int,int)------");
            hr=h;
            min=m;
            sec=s;
        }
        void initTime()
        {
            hr=0;
            min=0;
            sec=0;
        }
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
    time t1;
    t1.printTime();

    time t2;
    t2.printTime();

    time t_p(7,45,45); //7:45:45
    t_p.printTime();

    time t_n(8,45,30); //8:45:30;
    t_n.printTime();

    return 0;
}