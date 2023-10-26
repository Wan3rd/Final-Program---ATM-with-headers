#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <string>

using namespace std;


void changedetails()
{
    char choice;
    cout<<"       CHANGE DETAILS"<<endl;
	cout<<"============================="<<endl;
    cout<<"DATE: 10/19/2023 TIME: 12:00"<<endl<<endl;

    cout<<"Which among the following details you want to change? "<<endl;

    cout<<"[A] Pin Code"<<endl;
    cout<<"[B] Mobile Number"<<endl;
    cout<<"[C] Address"<<endl;

    cout<<"Enter your choice: ";
    cin>>choice;
    choice = toupper(choice);
	cout<<endl;

    while ((choice != 'A') && (choice != 'B') && (choice != 'C'))
    {
        cout<<"Invalid Choice! Enter your choice: ";
        cin>>choice;
        choice = toupper(choice);
    }

    
    if (choice == 'A')
    {
        cout<<"Enter you new Pin Code: ";
        cin>>newPinCode;
        cout<<"Enter your old Pin Code: ";
        cin>>oldPinCode;

        if (oldPinCode == pinCode)
        {
            pinCode = newPinCode;
            cout<<endl<<"Changes has been made."<<endl;
            cout<<"============================="<<endl;
            what_next();
        }
        else
        {
            cout<<endl<<"Pin code mismatch."<<endl; 
			cout<<"I cannot proceed with the changes."<<endl;
            cout<<"============================="<<endl;
            what_next();
        }
    }
    else if (choice == 'B')
    {
        string newMobileNumber;
		cout<<"Current Mobile Number: "<<mobileNumber<<endl;
        cout<<"Enter your new Mobile Number: ";
        cin>>newMobileNumber;
        mobileNumber = newMobileNumber;
        cout<<endl;
        cout<<"Mobile number has been changed."<<endl;
        cout<<"============================="<<endl;
        what_next();
    }
    else if (choice == 'C')
    {
        string newAddress = "";
		cout<<"Current Address: "<<Address<<endl;
        cout<<"Enter your new Address: ";
		cin.ignore();
        getline(cin, newAddress);
        Address = newAddress;
        cout<<endl;
        cout<<"Address has been changed."<<endl;
        cout<<"============================="<<endl;
        what_next();
    }
}