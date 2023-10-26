#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <string>

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

using namespace std;

void Account_Balance()
{
	cout<<"         WELCOME TO"<<endl;
	cout<<"       AM5 RURAL BANK"<<endl;
	cout<<"    ATM online services"<<endl<<endl;
	
	cout<<"       ACCOUNT BALANCE"<<endl;
	cout<<"============================="<<endl;
	cout<<"   Your account balance is"<<endl;
	cout<<"       Php "<<fixed<<setprecision(2)<<currentBalance<<endl;
	cout<<"      as of 10/19/2023"<<endl;
	cout<<"============================="<<endl;
	
	what_next();
}