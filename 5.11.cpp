#include<iostream>
using namespace std;
main()
{
	int num1;
	int min;
	for(int i=0;i<5;i++){
		cout<<"Enter number 1: \n";
		cin>>num1;
		
		if(min<num1){
			min=num1;
		}
		cout<<"Smallest number is: "<<min;
	}
	
return 0;
}
