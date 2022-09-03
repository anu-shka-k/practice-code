#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{ //File creation code
    std::ofstream fcout;
    std::ofstream fcap;
    fcout.open("country");
    fcout<<"India\n";
    fcout<<"Pakistan\n";
    fcout<<"Srilanka\n";
    fcout<<"United Kingdom\n";
    fcout<<"Nepal\n";
    fcout.close();
    fcap.open("capital");
    fcap<<"Delhi\n";
    fcap<<"Islamabad\n";
    fcap<<"Colombo\n";
    fcap<<"London\n";
    fcap<<"Kathmandu\n";
    fcap.close();
// File Reading code.
    std::ifstream fcountry;
    std::ifstream fcapital;
    char name1[500],name2[500];
    char str1[500],str2[500];
    cout<<"enter the country file name ";
    cin>>name1;

    fcountry.open(name1);
    if(!fcountry)
    {
     cout<<"country file not created";
    }
    else
    {
         cout<<"enter the capital file name ";
         cin>>name2;
         fcapital.open(name2);
         if(!fcapital)
         {
            cout<<"capital file not created";
         }
         else
         {
             while(!fcountry.eof())
             {
                 fcountry.getline(str1,500,'\n');
                 cout<<str1<<"\t\t";
                 fcapital.getline(str2,500,'\n');
                 cout<<str2<<endl;
             }
         }
     }
     fcountry.close();
     fcapital.close();
}
