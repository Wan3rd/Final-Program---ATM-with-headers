#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <string>

using namespace std;

void Deposit()
{
	system("cls");
	double thousands, five_hundreds, two_hundreds, one_hundreds, fifties;
	char deposit_choice;
	cout<<"         WELCOME TO"<<endl;
	cout<<"       AM5 RURAL BANK"<<endl;
	cout<<"    ATM online services"<<endl<<endl;
	
	cout<<"       DEPOSIT MENU"<<endl;
	cout<<"============================="<<endl;
	cout<<"[A] Cash "<<endl;
	cout<<"[B] Checks "<<endl;
	cout<<"Enter your choice: ";
	cin>>deposit_choice;
	deposit_choice = toupper(deposit_choice);
	
	system("cls");
	
	while((deposit_choice != 'A') && (deposit_choice != 'B'))
	{
		cout<<"Invalid Choice!"<<endl;
		cout<<"[A] Cash "<<endl;
		cout<<"[B] Checks "<<endl;
		cout<<"Enter your choice: "<<endl;
		cin>>deposit_choice;
		deposit_choice = toupper(deposit_choice);	
	}
	if (deposit_choice == 'A')
	{
		cout<<"         WELCOME TO"<<endl;
		cout<<"       AM5 RURAL BANK"<<endl;
		cout<<"    ATM online services"<<endl<<endl;
		
		cout<<"        CASH DEPOSIT"<<endl;
		cout<<"============================="<<endl;
		cout<<"DATE: 10/19/2023 TIME: 12:00"<<endl;
		
		cout<<"Enter the quantity of the note: "<<endl;
		cout<<"Php 1000: ";
		cin>>thousands;
		cout<<"Php 500: ";
		cin>>five_hundreds;
		cout<<"Php 200: ";
		cin>>two_hundreds;
		cout<<"Php 100: ";
		cin>>one_hundreds;
		cout<<"Php 50: ";
		cin>>fifties;
		
		double th = thousands * 1000;
		double fh = five_hundreds * 500;
		double twh = two_hundreds * 200;
		double oh = one_hundreds * 100;
		double ft = fifties * 50;
		double total = th + fh + twh + oh + ft;
		currentBalance = currentBalance + total;
	
		cout<<"TOTAL DEPOSIT: "<<fixed<<setprecision(2)<<total<<endl;
		cout<<"YOUR CURRENT BALANCE: "<<fixed<<setprecision(2)<<currentBalance<<endl;
		cout<<"============================="<<endl;
		
		what_next();	
	}
	else if (deposit_choice == 'B')
	{
		int number_checks;
		double check_amount, total = 0;
		cout<<"         WELCOME TO"<<endl;
		cout<<"       AM5 RURAL BANK"<<endl;
		cout<<"    ATM online services"<<endl<<endl;
		
		cout<<"        CASH DEPOSIT"<<endl;
		cout<<"============================="<<endl;
		cout<<"DATE: 10/19/2023 TIME: 12:00"<<endl;
		
		cout<<"Number of checks: ";
		cin>>number_checks;
		cout<<endl;
		int number = 0;
		for(int i = 1; i <= number_checks; i++)
		{
			cout<<"Check Number[" <<i<< "]: "<<setw(3)<<setfill('0')<<number + i<<endl;
			cout<<"Amount of Check: ";
			cin>>check_amount;
			total = check_amount + total;	
		}
		cout<<"============================="<<endl;
		cout<<"TOTAL DEPOSIT: "<<fixed<<setprecision(2)<< total<<endl;
		cout<<"============================="<<endl;
		cout<<"Amount will be credited after clearing, max of 3 working days."<<endl;
		
		what_next();
	}
	
}