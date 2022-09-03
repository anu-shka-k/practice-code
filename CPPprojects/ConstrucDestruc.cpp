#include <iostream>
#include <conio.h>
using namespace std;

class Ratio
{
public:
    void print()
    {
        cout<<"\n Now X is ALIVE";
    }
    Ratio()
    {
        cout<<endl<< "OBJECT IS BORN";
    }
    ~Ratio()
    {
        cout<<endl<< "OBJECT DIES";
    }
};

int main()
{
    Ratio r1;
    r1.print();
    getch();

}
