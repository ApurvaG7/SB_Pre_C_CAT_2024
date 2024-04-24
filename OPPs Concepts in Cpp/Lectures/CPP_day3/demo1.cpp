#include<stdio.h>
class time
{
    private:
        int hr;
        int min;
        int sec;
    public:
        time() //Parameterless constructor
        {
            printf("\n ------time()------");
            hr=0;
            min=0;
            sec=0;
        }
        time(int h,int m,int s) //Parameterized constructor
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
        //t_p.setMin(30)
        void setMin(int min) //setter 
        {
            //line 6=local vari
            //min=min;
            this->min=min;
        }
        void setHr(int hr)
        {
            ///hw
        }
        //setSec()  //hw

        //int second=t_p.getSec();
        int getSec() //getter
        {
           return this->sec; 
        }
        //int getMin() //hw
        //int getHr()  //hw
        void printTime() //Facilitator
        {
            printf("\n Time = %d : %d : %d",this->hr,this->min,this->sec);
        }
        void acceptTime( ) //Facilitator
        {
            printf("\n enter time");
            scanf("%d%d%d",&this->hr,&this->min,&this->sec);
        }
        void inchTimeByOneSec() //Facilitator
        {
            this->sec++;
            if(this->sec>=60)
            {
                this->sec=0;
                this->min++;
            }
            if(this->min>=60)
            {
                this->min=0;
                this->hr++;
            }
            if(this->hr>=24)
            {
                this->hr=0;
            }
        }
        ~time() //Destructor
        {
            printf("\n ----- ~time()------");
        }

};//end of class

int main()
{ 
    // time t1;
    // t1.printTime();

    // time t2;
    // t2.printTime();

    time t_p(7,45,45); //7:45:45
    //t_p.min=30;
    t_p.setMin(30);
    t_p.printTime();

    //int second=t_p.sec;
    int second=t_p.getSec();
    printf("\n second=%d",second);
    // time t_n(8,45,30); //8:45:30;
    // t_n.printTime();

    return 0;
}