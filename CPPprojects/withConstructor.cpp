#include <iostream>
#include <conio.h>
using namespace std;

class Circle
{
private:
    float x,y;
    float radius;
public:
    Circle()
    {
        x=0.0;
        y=0.0;
        radius=0.0;
    }
    public: void getdet()
    {
        cout<<"\n Enter x coordinates ";
        cin>>x;

        cout<<"\n Enter y coordinates ";
        cin>>y;

        cout<<"\n Enter radius ";
        cin>>radius;
    }
    void area()
    {
        cout<< "\n Area ="<<(3.14*radius*radius);
    }
    void circumference()
    {
        cout<< "\n Circumference ="<<(2*3.14*radius);
    }
    void print()
    {
        cout<< "\n Circle details are as follows:: ";
        cout<<"\n \n X="<<x;
        cout<<"\n \n Y="<<y;
        area();
        circumference();
    }
};

int main()
{
    Circle obj;
    obj.getdet();
    obj.print();
    getch();
}
