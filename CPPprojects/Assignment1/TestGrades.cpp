#include <iostream>
#include<conio.h>
using namespace std;
#include "TestGrades.h"

int grades()
{
    int percentage;
    cout<<"\n Enter your percentage:";
    cin>>percentage;
    if (percentage>100 || percentage<0)
            cout<<"Please enter valid percentage";
    else
    {
        if (percentage>=90)
            cout<<"Excellent! You have an A grade";
        else if(percentage>=75)
            cout<<"Awesome! You have a B grade";
        else if(percentage>=60)
            cout<<"Good Enough! You have a C grade";
        else if(percentage>=45)
            cout<<"Aww man! You have a D grade";
        else
            cout<<"Unfortunately, you have failed";
    }
    return 0;
}
