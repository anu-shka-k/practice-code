#include <iostream>
#include<conio.h>
using namespace std;
#include "Switch.h"

int Switch()
{
    int int_choice;
    cout<<"Please Enter no. for days of the week with 1 for Monday: \n";
    cin>>int_choice;
    switch(int_choice) // can use single character too with 'm' or 't'
    {
        case 1://'m' instead of 1
            cout<<"\n Lect1: Bio/CS \n Lect2: Maths \n Lect3: English";
            break;
        case 2://'t' instead of 2
            cout<<"\n Lect1: Bio/CS \n Lect2: Geography \n Lect3: Maths";
            break;
        case 3://'w' instead of 3
            cout<<"\n Lect1: English \n Lect2: CS \n Lect3: Chemistry";
            break;
        default:
            cout<<"Enter right no.";
    }
    return 0;
}
