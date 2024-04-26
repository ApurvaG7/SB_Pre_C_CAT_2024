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
    
    complex(const complex& c)   //Copy constructor 
    {
        cout<<"\n ------ complex(complex&)----";
        this->real=c.real;
        this->imag=c.imag;
        //c.real=33;
    }
	void printComplexNumber()
    {
        cout<<" Complex Number="<<this->real<<"+j"<<this->imag;
    }
};
int main()
{
    complex c1(5,7);
    cout<<"\n c1 object=";
    c1.printComplexNumber();

    complex cc(c1);  //complex cc=c1;
    cout<<"\n cc object=";
    cc.printComplexNumber();

    cout<<"\n";
    return 0;
}