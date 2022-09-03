#include <iostream>
#include<conio.h>
using namespace std;
#include "Untitled1.h"

class number
{
    int no1,no2;
public:
    number(int n1,int n2)
    {
        //cin>>no1>>no2;(uncomment to input values)
        no1 = n1;
        no2 = n2;
    }
    void shownumber()
    {
        cout<<no1 <<no2<<endl;
    }
    void operator -()
    {
        no1 = -no1;
        no2 = -no2;
    }
};
int untitled1()
{
    number obj(7,8);//hardcoded values
    -obj;
    obj.shownumber();
    return 0;
}
