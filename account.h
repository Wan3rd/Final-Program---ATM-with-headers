#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <string>

using namespace std;

double currentBalance = 10000.00;
string accountName = "JUAN S. DELA CRUZ";
string pinCode = "000000";
string accountNumber = "000001";
string mobileNumber = "090000000";
string Address = "Makati City";
string recipient_account = "999999";
string newPinCode, oldPinCode;


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

void Account_Verification()
{
	char choice;
	char account_repeat ;
	
    string Input_accountNumber, Input_pinCode;
	cout<<"============================="<<endl;
    cout<<"         WELCOME TO"<<endl;
    cout<<"       AM5 RURAL BANK"<<endl;
    cout<<"    ATM online services"<<endl;
	cout<<"============================="<<endl;
    
    cout<<"Enter your account number: ";
    cin>>Input_accountNumber;
    
    cout<<"ENTER YOUR PIN CODE: ";
    cin>>Input_pinCode;
    string accountNumber = "000001";
    if ((Input_accountNumber != accountNumber) || (Input_pinCode != pinCode))
    {
        system("cls");
        cout<<"ACCOUNT DOES NOT EXIST!"<<endl;
        cout<<"DO YOU WANT TO TRY AGAIN [Y/N]? ";
        cin>>account_repeat;
        account_repeat = toupper(account_repeat);
        system("cls");
        
        while ((account_repeat != 'Y') &&  (account_repeat != 'N'))
        {
            cout<<"Invalid Input! Do you want to try again? ";
            cin>>account_repeat;
            account_repeat = toupper(account_repeat);
            system("cls");
        }

        if (account_repeat == 'Y')
        {
            system("cls");
            Account_Verification();
        }
		else if(account_repeat == 'N')
		{
			break_void();
		}
    }
	else
	{
	    start();
	}
}