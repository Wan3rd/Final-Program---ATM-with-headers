#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <string>

using namespace std;


void ministatement()
{
	cout<<"         WELCOME TO"<<endl;
	cout<<"       AM5 RURAL BANK"<<endl;
	cout<<"    ATM online services"<<endl<<endl;
	
	cout<<"       MINI STATEMENT"<<endl;
	cout<<"============================="<<endl;
	cout<<"DATE: 10/19/2023 TIME: 12:00"<<endl;
	cout<<"Transaction: T102323"<<endl;
	cout<<"ACCOUNT NUMBER: 00XXX01"<<endl;
	
	cout<<"BANK STATEMENT"<<endl;
	cout<<"10/10/2023    DEP 10000.00"<<endl;
	cout<<"11/10/2023    DEP 3300.00"<<endl;
	cout<<"19/10/2023    TRANSFER 1000.00"<<endl<<endl;
	
	cout<<"YOUR CURRENT BALANCE IS: "<<fixed<<setprecision(2)<<currentBalance<<endl;
	cout<<"============================="<<endl;
	
	what_next();	
}