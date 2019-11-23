#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"enter 2 integers:";
	cin>>x>>y;
	if(x%y==0)
	{
		cout<<"num 1 is the multiple of num 2. ";
	}
	if(x%y!=0)
	{
		cout<<"num 1 is not the multiple of num 2. ";
	}
	return 0;
}
