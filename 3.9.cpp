#include<iostream>
#include<string>
using namespace std;

class D5
{   private:
	string name;
	string passcode;
	int bal;
	public:
	D5(string a, string b, int c)
	{
		name=a;
		passcode=b;
		bal=c;
		
	}
	addbal(int a)
	{
		if(a>5000)
		{
			cout<<"please add less than 5000.\n";
		}
		else
		{
		bal=bal+a;
		cout<<"your added a transaction of amount "<<a<<" into your account.\n";
	    }
	}
	getbal()
	{
		cout<<"you have "<<bal<<" in your account\n";
	}
	withdraw(int a){
		if(a>5000)
		{
			cout<<"your transaction cannot be proceed.";
		}
		else
		{
		bal=bal-a;
		cout<<"your withdraw an amount of "<<a<<" from your account.\n";
	    }
	}

};











