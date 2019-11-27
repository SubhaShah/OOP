#include<iostream>
#include<string>
#include"D5 cons.cpp"
using namespace std;
main()
{
	string name,pass;
	int bal,wid,choice;
	cout<<"please enter your user name.\n";
	cin>>name;
	cout<<"please enter your password.\n";
	cin>>pass;

	D5 acc(name,pass,15000);
	cout<<"select 1 for get-balance.\n";
	cout<<"select 2 for withdraw.\n";
	cout<<"select 3 for add-balance.\n";
	cin>>choice;
	if(choice==1)
	{
		acc.getbal();
	}
	else if(choice==2)
	{
		cout<<"please enter amount for withdraw.";
		cin>>wid;
		acc.withdraw(wid);
}
    else if(choice==3)
    {
    	int add;
    	cout<<"enter amount of balance:";
    	cin>>add;
    	acc.addbal(add);
    	
	}
		else
		cout<<"enter a valid option...";
		
    }

