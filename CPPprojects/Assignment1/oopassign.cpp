#include <iostream>
#include <conio.h>
using namespace std;
#include "oopassign.h"

class Customer{
private:
    long int Accno;
    float Balance;
public:
    Customer(long int accno,float balance){
        Accno = accno;
        Balance = balance;
    }
    void Deposit(){
	float amt1;
	cout<<"Deposit Amount in Rupees: ";
	cin>>amt1;
	Balance+=amt1;
	cout<<"Rs. "<<amt1<<" has been deposited to A/C No."<< Accno;
	cout<<"\nCurrent Balance: Rs."<<Balance;
    }
    void Withdrawal(){
	float amt2;
	cout<<"Withdraw Amount in Rupees: ";
	cin>>amt2;
	if(Balance>amt2 && amt2>0){
		Balance-=amt2;
		cout<<"Rs. "<<amt2<<" has been withdrawn from A/C No."<<Accno;
		cout<<"\nCurrent Balance: Rs."<<Balance;
	}
	else if (amt2<0)
        cout<<"Invaild Amount.Please Retry";
	else
        cout<<"Sorry! Insufficient balance.";
    }
    void showBalance(){
        cout<<"\nCurrent Balance: Rs."<<Balance;
    }
};

int oopassign(){
    Customer customer1 = Customer(2337654,50000.00);
    int choice;
    cout<<"Welcome to your bank account!"<<endl;
    cout<<"   press 1 for Deposit"<<endl;
    cout<<"   press 2 for Withdraw"<<endl;
    cout<<"   press 3 for Balance"<<endl;
    cin>>choice;

    switch(choice){
        case 1 :{
            customer1.Deposit();
            break;
        }
        case 2 :{
            customer1.Withdrawal();
            break;
        }
        case 3 :{
            customer1.showBalance();
            break;
        }
    }
}
