#include<iostream>
using namespace std;
int main()
{
	int product,quantity;
	float total=0.0;
	 cout<<"enter product item number and quantity:\n";
	 cout<<"enter -1 to exit or enter product number:";
	 cin>>product;
	 while(product!=-1)
	 {
	 	
	 	cin>>quantity;
	 	switch(product)
	 	{
	 		case 1:
	 			total+=quantity*2.98;
	 		    break;
			case 2:
	 			total+=quantity*4.50;
	 		    break;
			case 3:
	 			total+=quantity*9.98;
	 		    break;
			case 4:
	 			total+=quantity*4.49;
	 		    break;
			case 5:
	 			total+=quantity*6.87;
	 		    break;	
	 		default:
	 			cout<<"invalid income:";
	 			break;
		 }
		 
		cout<<"enter product item number and quantity:\n";
	    cout<<"enter -1 to exit or enter product number:";
	    cin>>product;
	 }
	 cout<<"total amount is: "<<total;
}
