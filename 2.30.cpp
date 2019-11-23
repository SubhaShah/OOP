#include<iostream>
using namespace std;
int main()
{
	float weight,height,BMI;
	cout<<"enter your weight in kgs:";
	cin>>weight;
	cout<<"enter your height in meters:";
	cin>>height;
	height=height*height;
	BMI=weight/height;
	cout<<"Your BMI is="<<BMI<<endl;
	cout<<"_____________________________________________\n";
	cout<<"_____________________________________________";
	cout<<endl;
	cout<<"BMI standard values:\n";
	cout<<"Under weight: less than 18.5\n";
	cout<<"Normal:       between 18.5 and 24.9\n";
	cout<<"Over-weight:  between 25 and 29.9\n";
    cout<<"Obese:        30 or greater\n";
	return 0;
	
}
