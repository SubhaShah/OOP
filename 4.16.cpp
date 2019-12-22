#include<iostream>
using namespace std;
main()
{
	int count=1;
	int num;
	int largest;
	while(count>10)
	{
		cout<<"enter a number:";
		cin>>num;
		if(num>largest)
		{
			largest=num;
		}
		cout<<"larggets is:"<<largest;
		
	}
	
}
