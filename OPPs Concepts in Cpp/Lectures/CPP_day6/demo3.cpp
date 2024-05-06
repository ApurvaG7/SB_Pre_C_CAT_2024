//association

#include<iostream>
using namespace std;

class engine
{
    int cc;
    int fuel;
    public:
    void acceptEngine()
    {
        cout<<"\n enter cc and fuel ";
        cin>>cc>>fuel;
    }
    void printEngine()
    {
        cout<<"\n engine cc="<<cc<<" fuel ="<<fuel;
    }
};
class car
{
    int price;
    engine e;  //Association
    public:
    void acceptCar()
    {
        cout<<"\n enter car price";
        cin>>price;
        e.acceptEngine();
    }
    void printCar()
    {
        cout<<" car price="<<price;
        e.printEngine();
    }
};

int main()
{
    // engine e1;
    // e1.acceptEngine();
    // e1.printEngine();

    car c1;
    c1.acceptCar();
    c1.printCar();

    cout<<"\n";
    return 0;
}