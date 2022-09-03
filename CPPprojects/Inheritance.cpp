#include <iostream>
#include <conio.h>
using namespace std;

class Student
{
protected:
    int roll;
public:
    void getRoll();
    void showRoll();
};

void Student::getRoll()
{
    cout<<"\n Enter rollno : ";
    cin>>roll;
}

void Student::showRoll()
{
    cout<<"\n Enter rollno : "<<roll;
}

class Test:public Student
{
protected:
    int m1,m2;
public :
    void getMarks();
    void showMarks();
};

void Test::getMarks()
{
    cout<<"\n Enter marks for subject1 :";
    cin>>m1;
    cout<<"\n Enter marks for subject2 :";
    cin>>m2;
}

void Test::showMarks()
{
    cout<<"\n Subject 1 marks = "<<m1;
    cout<<"\n Subject 2 marks = "<<m2;
}

class Sports
{
protected:
    int spmarks;
public:
    void getSportsMarks()
    {
        cout<<"\n Enter sports marks :";
        cin>>spmarks;
    }
    void showSportsMarks()
    {
        cout<<"\n Sports marks :"<< spmarks;
    }
};

class Result: public Test,public Sports
{
public:
    void showResult()
    {
        int t;
        t=spmarks + m1 + m2;
        cout<<"\n Total="<<t;
    }
};

int main()
{
    Result r1;
    r1.getRoll();
    r1.getMarks();
    r1.getSportsMarks();
    cout<<"\n \n \n ***********RESULT*************";
    cout<<"\n\n \n ";
    r1.showRoll();
    r1.showMarks();
    r1.showSportsMarks();
    r1.showResult();
    getch();
}
