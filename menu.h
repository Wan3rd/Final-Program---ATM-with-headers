#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <string>

using namespace std;
void Menu(char &choice)
{
	cout<<"         WELCOME TO"<<endl;
	cout<<"       AM5 RURAL BANK"<<endl;
	cout<<"    ATM online services"<<endl<<endl;
	
	cout<<"[A] Account Balance Details"<<endl;
	cout<<"[B] Deposit"<<endl;
	cout<<"[C] Withdrawal"<<endl;
	cout<<"[D] Cash Transfer"<<endl;
	cout<<"[E] Mini Statement"<<endl;
	cout<<"[F] Bills Payment"<<endl;
	cout<<"[G] Mobile Recharge"<<endl;
	cout<<"[H] Account Details Management"<<endl;
	cout<<"[Q] Quit"<<endl;
	
	cout<<"ENTER YOUR CHOICE: ";
	cin>>choice;
	choice = toupper(choice);
	
	while((choice != 'A') && (choice != 'B') && (choice != 'C') && (choice != 'D') && (choice != 'E') && (choice != 'F') && (choice != 'G') && (choice != 'H') && (choice != 'Q'))
	{
		cout<<"Invalid Choice! ENTER YOUR CHOICE: ";
		cin>>choice;
		choice = toupper(choice);
	}
}