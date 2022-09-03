#include <iostream>
#include <conio.h>
using namespace std;

class Ratio
{
    int num,den;
public:
    void assign(int n,int d)
    {
        num=n;
        den=d;
    }
    void convert();
    void invert();
    void print();
};

void Ratio::convert()
{
    cout<<"The ratio is "<<double(num)/double(den);
}
void Ratio:: invert()
{
    int temp;
    temp=num;
    num=den;
    den=temp;
}
void Ratio::print()
{
    cout<<"\n The values are "<<num<<"/"<<den<<endl;
}

int main()
{
    Ratio r;
    r.assign(22,7);
    r.convert();
    r.print();
    r.invert();
    cout<<"After inverting, ";
    r.print();
}
