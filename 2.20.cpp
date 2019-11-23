#include<iostream>
using namespace std;
const float pie=3.14159;
int main()
{
	int r;
	cout<<"enter the radius:";
	cin>>r;
	cout<<"the diameter is:"<<r*2<<endl;
	cout<<"the circumference is:"<<2*pie*r<<endl;
	cout<<"the area is:"<<pie*r*r<<endl;
	return 0;
}
