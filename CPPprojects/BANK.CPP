#include<iostream>
#include<conio.h>
using namespace std;

class customer
{
    long customerid;
    long balance;
    public:
    void identif()
    {
       cout<<"Welcome to bank XYZ! Please enter your customer ID and initial balance:"<<endl;
       cin>>customerid>>balance;
    }
    long getbal()
    {
       return balance;
    }
    void credit()
    {
	 long credit;
	 cout<<"How much amount is to be credited?"<<endl;
	 cin>>credit;
	 balance=balance+credit;
    }
    void debit()
    {
      long debit;
      cout<<"How much amount is to be debited?"<<endl;
      cin>>debit;
      if(debit>balance)
      {
	  cout<<"Customer balance insufficient."<<endl;
      }
      else
      {
	 balance=balance-debit;
      }
    }
    void chkbal()
    {
	   cout<<"The balance for customer ID "<<customerid<<" is "<<balance<<"."<<endl<<"Thank you for transacting with XYZ Bank!";
    }

};
int main()
{
   customer prajas;
   prajas.identif();
   char cont;
   cout<<"What do you wish to do (credit=c,debit=d or terminate=t)?"<<endl;
   cin>>cont;
   while(1==1)
   {
    if(cont=='c')
    {
	prajas.credit();
	cout<<"Your account balance is "<<prajas.getbal()<<"."<<endl;
	cout<<"What do you wish to do next (credit=c, debit=d or terminate=t)?"<<endl;
	cin>>cont;
    }
     else if(cont=='d')
    {
	prajas.debit();
	cout<<"Your account balance is "<<prajas.getbal()<<"."<<endl;
	cout<<"What do you wish to do next (credit=c, debit=d or terminate=t)?"<<endl;
	cin>>cont;
    }
    else if(cont=='t')
    {
     break;
    }
    else
    {
	cout<<"Please enter a valid response (c,d, or t)."<<endl;
	cin>>cont;
    }
  }
    int i=1;
    cout<<"Do you wish to check your balance?"<<endl;
    while(1==1)
    {
       char bal;
       cin>>bal;
       if(bal=='y')
	{
	   prajas.chkbal();
	   break;

	}
	else if(bal=='n')
	{
		   cout<<"Thank you for transacting with XYZ bank."<<endl;
		   break;

	}
	else
	{
	    cout<<"Please enter valid response (y or n)."<<endl;
	    cin>>bal;
	}

    }
 }

