#include <iostream>
#include <string>
#include "employee 14.cpp"
int main(){
	string fname;
	string lname;
	double bal;
	
	cout<<"Enter your First Name : ";
	cin>>fname;
	cout<<"Enter your Second Name : ";
	cin>>lname;
	cout<<"Enter your balance : ";
	cin>>bal;
	
	Employee emp(  fname, lname, bal);
	

    emp.getpart();
	
	return 0;
}
