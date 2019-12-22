#include<iostream>
using namespace std;
main()
{
	int product=1;
	for(int i=2;i<=10;i=i+2)
	{
		product=product*i;
	}
	cout<<"product is:"<<product<<endl;
}
