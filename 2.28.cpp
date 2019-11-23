#include <iostream>
using namespace std;
int main()
{
    int x,reversenumber=0,remainder;
    cout<<"enter a 4-digit integer:";
    cin>>x;
    while(x>0)
    {
    	remainder=x%10;
    	reversenumber=reversenumber*10+remainder;
    	x=x/10;
	}
	cout<<"reverse is: "<<reversenumber;
 return 0;   
}
