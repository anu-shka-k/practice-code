#include <iostream>
#include<conio.h>
using namespace std;
#include "ages.h"

int ages()
{
    int age;
    cout<<"\n Enter your age:";
    cin>>age;
    if(age>0 && age<=3)
        cout<<"Toddler";
    else if(age>3 && age<=12)
        cout<<"Kids";
    else if(age>12 && age<=18)
        cout<<"Teens";
    else if(age>18 && age<=100)
        cout<<"Adults";
    else
        cout<<"Enter valid age";
    return 0;
}
