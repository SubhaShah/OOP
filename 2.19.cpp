#include<iostream>
using namespace std;
int main()
{
	int a,b,c,largest,smallest;
	cout<<"enter 3 integers:";
	cin>>a>>b>>c;
	cout<<"sum is="<<a+b+c<<endl;
	cout<<"product is="<<a*b*c<<endl;
	cout<<"average is="<<(a+b+c)/3<<endl;
	largest=a;
	if(b>largest)
    largest=b; 
	if(c>largest)
	largest=c;
	smallest=a;
	if(b<smallest)
    smallest=b; 
	if(c<smallest)
	smallest=b;
	cout<<"smallest is:"<<smallest<<endl;
	cout<<"largest is:"<<largest;
	return 0;
}
	
	
