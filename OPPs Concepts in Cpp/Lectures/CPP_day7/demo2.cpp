#include<iostream>
using namespace std;
//base
//parent
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
        cout<<"\n name="<<name<<" age="<<age;
    }
};
//derived 
//child
//emp is-a person
class emp : public person
{
    int sal;
    int empid;
    public:
    emp()
    {
        sal=20000;
        empid=52;
    }
    void printEmp() //4
    {
        this->printPerson();  //2
        cout<<" sal="<<sal<<" empid="<<empid; //2
    }
    void updateName(string newName)
    {
        this->name=newName;//valid
    }
};
int main()
{
    // person p1;
    // p1.printPerson();
    // cout<<"\n";
    emp e1;
    e1.printEmp();
   // e1.name="Ravee";//invalid
    e1.updateName("Ravee");
    return 0;
}