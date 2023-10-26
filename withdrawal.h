#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <string>

using namespace std;


void withdrawal()
{
	double withdraw_amount;
	cout<<"         WELCOME TO"<<endl;
	cout<<"       AM5 RURAL BANK"<<endl;
	cout<<"    ATM online services"<<endl<<endl;
	
	cout<<"       CASH WITHDRAWL"<<endl;
	cout<<"============================="<<endl;
	cout<<"DATE: 10/19/2023 TIME: 12:00"<<endl;
	
	cout<<"Your current balance is: "<<fixed<<setprecision(2)<<currentBalance<<endl;
	cout<<"Enter amount to withdraw: ";
	cin>>withdraw_amount;
	cout<<endl;
	if (withdraw_amount <= currentBalance)
	{
		currentBalance = currentBalance - withdraw_amount;
		cout<<"Withdraw Successful!"<<endl;
		cout<<"YOUR CURRENT BALANCE: "<<currentBalance<<endl;
		cout<<"============================="<<endl;
		what_next();
	}
	else
	{
		cout<<"Withdraw Unsuccessful!";
		what_next();
	}
}