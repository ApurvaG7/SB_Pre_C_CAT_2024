#include<iostream>
using namespace std;
//virtual function
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
    void printPerson() //2
    {
        cout<<"\n Name="<<name<<" age="<<age;
    }
    virtual void  accept()
    {
        cout<<"\n enter name and age";
        cin>>name>>age;
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
    void accept() //4
    {
        person::accept(); //2
        cout<<"\n enter sal and empid";
        cin>>sal>>empid;
    }

};
int main()
{
    // int n1;
    // char* cp=&n1; //error
    // int* p=&n1;

    // person p1;
    // person *pptr=NULL;
    // pptr=&p1;
    // pptr->printPerson();
    // pptr->accept(); //2
    // pptr->printPerson();
   


    // emp e1;
    // emp* eptr=NULL;
    // eptr=&e1;
    // eptr->printEmp(); //4
    // eptr->accept(); //4
    // eptr->printEmp(); //4
    


    emp e1;
    person *pptr=NULL;
    pptr=&e1; //base class (person) pointer can hold the address of derived class(emp)
    pptr->printPerson();//2
    //pptr->printEmp();
    pptr->accept();  // 2?   4?
    pptr->printPerson(); //2

    cout<<"\n";
    return 0;
}