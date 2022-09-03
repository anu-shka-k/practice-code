#include <iostream>
#include<conio.h>
using namespace std;
#include "drivingage.h"

int driveage()
{
    int age;
    cout<<"\n Enter your age:";
    cin>>age;
    if (age>=100 || age<0)
            cout<<"Please enter valid age";
    else
    {
        if (age>=18)
            cout<<"Congratulations! You are eligible.";
        else
            cout<<"Sorry. Not yet";
    }
    return 0;
}
