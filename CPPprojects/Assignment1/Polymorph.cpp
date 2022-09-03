#include <iostream>
#include <conio.h>
using namespace std;

//compiletime polymorph
void add(int a,int b){
    cout<<a+b;
}
void add(int a,int b,int c){
    cout<<a+b+c;
}
int polymorph(){
    add(4,5);
    add(8,3,9);
}
//runtime polymorph
