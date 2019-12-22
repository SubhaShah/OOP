#include<iostream>
#include<string>
using namespace std;
main()
{
	int km,liters;
	cout<<"enter the kilometers:(-1 to quit)";
	cin>>km;
	float count=1;
	float avg=0;
	while(km!=-1)
	{
		count++;
		cout<<"enter liters:";
		cin>>liters;
		float curr=km/liters;
		avg=curr/count;
		
		cout<<"current average:"<<curr;
		cout<<"avrea"<<" "<<avg;
	}
}


