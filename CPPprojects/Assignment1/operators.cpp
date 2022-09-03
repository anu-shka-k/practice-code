#include <iostream>

using namespace std;
#include "operators.h"

int oper()
{
    int a,b,result;
    cout<<"Enter 2 numbers ";
    cin>>a>>b;
    result=a+b;
    cout<<"The addition of a and b is "<<result<<endl;
    result=a-b;
    cout<<"The subtraction of a and b is "<<result<<endl;
    result=a*b;
    cout<<"The multiplication of a and b is "<<result<<endl;
    result=a/b;
    cout<<"The division of a and b is "<<result<<endl;
    result=a%b;
    cout<<"The remainder of division of a and b is "<<result<<endl;
    if (a>b)
    {
        cout<<a<<" is greater than "<<b<<endl;
    }
    if (b>a)
    {
        cout<<b<<" is greater than "<<a<<endl;
    }
    return 0;
}
