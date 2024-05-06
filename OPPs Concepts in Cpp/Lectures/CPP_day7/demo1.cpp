#include<iostream>
using namespace std;
//base class
//parent class
class base
{
    public: //member = 2
    int b;
    void funBase()
    {
        cout<<"\n -----base::funBase()-------";
    }
};
//derived class
//child class
class derived : public base
{
    public: //members=2
    int d;
    void funDerived()
    {
        cout<<"\n -----derived::funDerived()-------";
    }
};
int main()
{
    // base b1; 
    // cout<<"\n size of base obj b1="<<sizeof(b1); //4
    // b1.funBase(); 
    derived d1;
    cout<<"\n size of derived obj d1="<<sizeof(d1); //4
    d1.funDerived();
    d1.funBase();


    cout<<"\n";
    return 0;
}