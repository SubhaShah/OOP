#include<iostream>
using namespace std;
main()
{
	int c=1;
	float ver=1;
	int even_odd=1;
	while(c<=20)
	{
		//cout<<4/ver;
		
		if(even_odd%2==0)
		{
			cout<<"+"<<"4/"<<ver;
		}
		else
		{
			cout<<"- "<<"4/"<<ver;
		}
		
		ver=ver+2;
		c++;
		even_odd++;
	}

}
