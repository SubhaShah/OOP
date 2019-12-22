#include<iostream>
using namespace std;
main()
{
	int acc_num;
	float bg_balance,total_charges,totalcredit,c_limit;
	cout<<"enter account number: ";
	cin>>acc_num;
	while(acc_num!=-1)
	{
	
		
		cout<<"enter beginning balance:\n";
		cin>>bg_balance;
		cout<<"enter total charges: \n";
		cin>>total_charges;
		cout<<"enter total credits: \n";
		cin>>totalcredit;
		cout<<"enter credit limit:\n ";
		cin>>c_limit;
		float new_bal=(bg_balance+total_charges)-totalcredit;
		cout<<"new balance is: \n"<<new_bal<<endl;
		if(new_bal>c_limit)
		{
			cout<<"account number: "<<acc_num<<endl;
			cout<<"credit limit: "<<c_limit<<endl;
			cout<<"balance is: "<<new_bal<<endl;
			cout<<"credit limit exceeded.\n";
				
		}
		
		
	}
}
