#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <string>

using namespace std;

void start()
{
	system("cls");
	char choice;
	Menu(choice);
	switch (choice)
	{
		case 'A':
		{	
			system("cls");
			Account_Balance();
			break;
		}
		case 'B':
		{
			system("cls");
			Deposit();
			break;
		}
		case 'C':
		{
			system("cls");
			withdrawal();
			break;
		}
		case 'D':
		{
			system("cls");
			cashtransfer();
			break;
		}
		case 'E':
		{
			system("cls");
			ministatement();
			break;
		}
		case 'F':
		{
			system("cls");
			billspayment();
			break;
		}
        case 'G':
		{
			system("cls");
			mobilerecharge();
			break;
		}
        case 'H':
		{
			system("cls");
			changedetails();
			break;
		}
		case 'Q':
		{
			break_void();
			break;
		}
		
			
		default:
			break;
	}
	
}