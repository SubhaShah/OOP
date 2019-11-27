#include <iostream>
#include <string>
#include "heartrate 16.cpp"
using namespace std;
int main(){
		string fname;
		string lname;
		int dob;
		int mob;
		int yob;
	HeartRate rate(fname ,lname,dob ,mob ,yob);{
	
	rate.AGE();
	rate.Display();}
	
	return 0;
}
