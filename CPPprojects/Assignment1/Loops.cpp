#include <iostream>
#include<conio.h>
using namespace std;
#include "Loops.h"

int loops()
{
    int a=0;
    back : cout<<a<<endl;
    a++;
    if(a<11)
    {
        goto back;
    }
    return 0;
}
