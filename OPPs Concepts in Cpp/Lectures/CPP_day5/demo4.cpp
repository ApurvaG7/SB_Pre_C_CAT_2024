#include<iostream>
using namespace std;
//static demo
class complex
{
    private:
        int real; //4
        int imag; //4
        static int count;
    public:
        complex(int r=1,int i=1)
        {
            this->real=r;
            this->imag=i;
            count++;
        }
        static void printCount()
        {
            //this->not available
            cout<<"\n value of count="<<count<<" address of count="<<&count;
        }
        void printComplexNumber()
        {
            cout<<"\n Complex Number="<<this->real<<"+j"<<this->imag;
        }   
};//end of class

int complex::count=0;

int main()
{
    complex::printCount();
//    complex c1;
//    cout<<"\n size of c1="<<sizeof(c1); //8
//    c1.printCount();

//    complex c2;
//    c2.printCount();
    return 0;
}
