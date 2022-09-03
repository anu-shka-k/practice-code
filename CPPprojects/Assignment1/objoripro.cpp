#include <iostream>
using std::string;
#include "objoripro.h"

class AskEmployee { //abstraction
    virtual void AskForPromotion()=0;
};

class Employee : AskEmployee{
protected:
    string Name;
private:
    string Company;
    int Age;
public:
    void setName(string name){ //setter
        Name = name;
    }
    string getName(){ //getter
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        if(age>=18)
        Age = age;
    }
    int getAge(){
        return Age;
    }
    void Intro(){
        std::cout<<"My name is "<<Name<<std::endl;
        std::cout<<"I am from "<<Company<<std::endl;
        std::cout<<"My age is "<<Age<<std::endl;
    }
    Employee(string name,string company,int age){ //constructor
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion() { //acual conditions for the virtual void in class AskEmployee
        if(Age>25)
            std::cout<<Name<<" got promoted!"<<std::endl;
        else
            std::cout<<Name<<" promotion denied."<<std::endl;
    }
    virtual void Work(){//virtual means to first check if there is already specified
                        //implementation of the function in the derived classes.
        std:: cout<< Name <<" is checking emails."<<std::endl;
    }
};

class Developer :public Employee{//to access Employee functions which are by default private make them public
public:
    string FavProgrammingLang;
    Developer(string name,string company,int age,string favlang)//constructor
        :Employee(name,company,age){
        FavProgrammingLang = favlang;
    }
    void FixBug(){
        std::cout<< Name <<" fixed bug using "<< FavProgrammingLang <<std::endl;
//using getName as Name is private and not accessible outside Employee class unless made protected.
    }
    void Work(){
        std:: cout<< Name <<" is writing code in "<< FavProgrammingLang <<std::endl;
    }
};

class Teacher:public Employee {
public:
    string Subject;
    Teacher(string name,string company,int age,string subject)
        :Employee(name,company,age){
        Subject = subject;
    }
    void PrepareLesson(){
        std::cout<< Name <<" is preparing "<< Subject <<" lesson."<< std::endl;
    }
    void Work(){
        std:: cout<< Name <<" is teaching "<< Subject <<std::endl;
    }
};

class Student {

};

int objoripro(){
    Employee employee1 = Employee("John","Amazon",30);
    employee1.setName("anu");
    employee1.setCompany("college");
    employee1.setAge(20);
//Encapsultion: getter and setter
    std:: cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old."<<std::endl;
    employee1.Intro();

    Employee employee2 = Employee("John","Amazon",30);
    employee2.Intro();
//Abstrction
    employee1.AskForPromotion();
    employee2.AskForPromotion();
//Inheritance classes
    Developer d = Developer("anu","youtube",30,"Python");
    d.FixBug();
    d.AskForPromotion();

    Teacher t = Teacher("Jack","Gurukul",33,"math");
    t.PrepareLesson();
    t.AskForPromotion();
//Polymorphism
    d.Work();
    t.Work();
    //The most common use of polymorphism is when a parent class reference
    //is used to refer to a child class object
    Employee* e1 = &d;
    Employee* e2 = &t;
    e1->Work();
    e2->Work();
}
