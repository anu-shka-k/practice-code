#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a[10],i,k,j,t;
    cout<<"the elements are ";
    for(i=0;i<10;i++)
        cin>>a[i];
    for(i=0;i<10;i++)
        cout<<"the elements are "<<a[i]<<endl;
    for(k=1;k<10;k++)
    {
        for(j=0;j<(10-k);j++)
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
    }
    cout<<"The sorted array is ";
    for(j=0;j<10;j++)
        cout<<endl<<a[j];
}
