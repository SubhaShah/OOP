#include<iostream>
using namespace std;
main()
{
	float nohours,accuredleave;
	cout<<"enter number of hours worked (-1 to exit): ";
	cin>>nohours;
	
	while(nohours!=-1)
	{
		accuredleave=(nohours/100)*10+2;
		cout<<"accured leave:\n"<<accuredleave;
		break;
		
	}
	
}
