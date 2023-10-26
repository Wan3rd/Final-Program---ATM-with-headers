#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <string>

using namespace std;

void Account_Verification();
void Menu(char &choice);
void Account_Balance();
void what_next();
void start();
void break_void();
void Deposit();
void withdrawal();
void ministatement();
void billspayment();
void mobilerecharge();
void cashtransfer();
void changedetails();

void cashtransfer()
{
	double amount;
	string recip;
	cout<<"         WELCOME TO"<<endl;
	cout<<"       AM5 RURAL BANK"<<endl;
	cout<<"    ATM online services"<<endl<<endl;
	
	cout<<"       CASH TRANSFER"<<endl;
	cout<<"============================="<<endl;
	cout<<"DATE: 10/19/2023 TIME: 12:00"<<endl;
	
	cout<<"How much do you want to transfer? "<<endl;
	cout<<"AMOUNT: ";
	cin>>amount;
	cout<<endl;
	
	cout<<"RECIPIENT ACCOUNT: ";
	cin>>recip;
	cout<<endl;

	while (recip != recipient_account)
	{
		cout<<"ACCOUNT DOEST NOT EXIST!"<<endl;
		cout<<"============================="<<endl;
		cout<<"RECIPIENT ACCOUNT: ";
		cin>>recip;
		cout<<endl;
	}
	
	if ((amount <= currentBalance) && (recip == recipient_account))
	{	
		currentBalance = currentBalance - amount;
		cout<<"Transfer Successful."<<endl<<endl;
		cout<<"Current Balance: "<<fixed<<setprecision(2)<<currentBalance<<endl;
		cout<<"============================="<<endl;
		what_next();
	}
	else 	
	{
		cout<<"I'm sorry. I cannot proceed with the"<<endl;
		cout<<"transaction Current Balance"<<endl;
		cout<<"is more than the requested amount"<<endl;
		cout<<"============================="<<endl;
		what_next();
	}
	
}