#include <iostream>
#include <conio.h>
using namespace std;

class Ratio
{
private:
    int a;
public:
    void get();
    void show();
    Ratio operator+(Ratio r);
    Ratio operator/(Ratio r);
};

void Ratio::get()
{
    cout<<"\n Enter a number ";
    cin>>a;
}

void Ratio::show()
{
    cout<<"\n a="<<a<<"\n";
}

Ratio Ratio::operator+(Ratio r)
{
    Ratio temp;
    temp.a=a+r.a;
    return temp;
}

Ratio Ratio::operator/(Ratio r)
{
    Ratio temp;
    temp.a=a/r.a;
    return temp;
}

int main()
{
    Ratio x,y,z;
    x.get();
    y.get();

    cout<<"\n X Object ";
    x.show();

    cout<<"\n Y Object ";
    y.show();

    cout<<"\n After x+y ";
    z=x+y;
    z.show();

    cout<<"\n After x/y ";
    z=x/y;
    z.show();

    getch();
}
