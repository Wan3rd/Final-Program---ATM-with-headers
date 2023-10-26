#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <string>

using namespace std;

void what_next()
{   
    char next;
    cout<<endl;
	cout<<"What do you want to do next? "<<endl;
	cout<<"[A] Return to Main Menu"<<endl;
	cout<<"[B] Exit from the system"<<endl;
	cin>>next;
	next = toupper(next);
	
	while((next != 'A') && (next != 'B'))
	{
		cout<<"Invalid Choice! What do you want to do next? "<<endl;
		cout<<"[A] Return to Main Menu"<<endl;
		cout<<"[B] Exit from the system"<<endl;
		cin>>next;
		next = toupper(next);
	}
	
	if (next == 'A')
	{
		start();
	}
	else if (next == 'B')
	{
		cout<<"Thank you!";
		system("cls");
		break_void();
	}
}
