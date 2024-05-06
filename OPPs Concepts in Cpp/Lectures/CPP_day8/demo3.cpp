//Pure virtual function and Abstract class

//class shape


#include<iostream>
using namespace std;

class shape
{
    public:
    virtual void  input()=0; //pure virtual function
    virtual void calArea()=0; //pure virtual function
};
class square:public shape
{
    int s;
    
};
class rect: public shape
{
    int l,b;
    public:
    void input()
    {
        cout<<"\n Enter l and b for rect";
        cin>>l>>b;
    }
    void calArea()
    {
        int a=l*b;
        cout<<"\n Area of rect="<<a;
    }
}; 
class circle:public shape
{ 
    int r;
    public:
    void input()
    {
        cout<<"\n Enter r for circle";
        cin>>r;
    }
    void calArea()
    {
        int a= 3.14*r*r;
        cout<<"\n Area of circle= "<<a;
    }
};


int main()
{
    //shape s1;
    shape *sptr=NULL;
    rect r1;
    circle c1;
    //square sq1;
    int ch;
    do
    {
        cout<<"\n enter 1: rect 2:circle 0:exit";
        cin>>ch;
        switch (ch)
        {
        case 1://rect
            sptr=&r1;
            break;
        
         case 2://circle
            sptr=&c1;
            break;
        }
        if(sptr !=NULL)
        {
            sptr->input();
            sptr->calArea();
        }
        sptr=NULL;
    } while (ch!=0);
    
    cout<<"\n";
    return 0;
}

