#include <iostream>
#include <conio.h>
using namespace std;

class Person
{
public:
    virtual void print()
    {
    cout<<"\n Name of person is BOB. ";
    }
};

class Student:public Person
{
public:
    void print()
    {
    cout<<"\n The name of student is TOM. ";
    }
};

int main()
{
    Person *p;
    Person p1;
    p=&p1;
    p->print();
    Student s1;
    p=&s1;
    p->print();
    getch();
}
