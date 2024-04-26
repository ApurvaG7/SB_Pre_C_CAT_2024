#include<iostream>
using namespace std;

class complex
{
    int real;
    int imag;
    public:	
    complex(int r=1,int i=1)
    {
        this->real=r;
        this->imag=i;
    }
	void printComplexNumber()
    {
        cout<<" Complex Number="<<this->real<<"+j"<<this->imag;
    }
    complex sum(complex& c2) //c1 as this pointer
    {
        complex c3;
        c3.real=this->real+c2.real;
        c3.imag=this->imag+c2.imag;
        return c3;
    }

};


int main()
{
    complex c1(7,6);
    cout<<"\n c1 object=";
    c1.printComplexNumber();

    complex c2(3,2);
    cout<<"\n c2 object=";
    c2.printComplexNumber();

    complex c3;
    //c1.real+c2.real;
    c3=c1.sum(c2);
    cout<<"\n c3 object=";
    c3.printComplexNumber();
    return 0;
}