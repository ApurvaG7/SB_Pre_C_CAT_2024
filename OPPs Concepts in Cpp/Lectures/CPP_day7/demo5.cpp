#include<iostream>
using namespace std;

//base class
//parent class
class person
{
    protected:
        int age;
        string name;
    public:
    person()
    {
        age=24;
        name="Ravi";
    }
    void printPerson()
    {
        cout<<"\n Name="<<name<<" age="<<age;
    }
};
// derived class
// child class
// emp is-a person
class emp : public person
{
    int empid;
    int sal;
    public:
    emp()
    {
        empid=52;
        sal=20000;
    }
    void printEmp() //4
    {
        this->printPerson(); //2
        cout<<" empid="<<empid<<"  sal="<<sal;
    }
    void updateName(string newName)
    {
        this->name=newName; //valid
    }
};
int main()
{
    // int n=22;
    // char *p=NULL;
    // p=&n;


    // person p1;
    // person *pptr=NULL;
    // pptr=&p1;
    // pptr->printPerson();


    // emp e1;
    // emp *eptr=NULL;
    // eptr=&e1;
    // eptr->printPerson();
    // eptr->updateName("Ravee");
    // eptr->printEmp();

    emp e1;
    person *pptr=NULL;
    pptr=&e1;  //base class (person) pointer can hold the object of derived class (emp)





    cout<<"\n";
    return 0;
}