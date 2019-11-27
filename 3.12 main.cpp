#include <iostream>
#include <string>
#include "date class 15.cpp"
using namespace std;
int main(){
	    int month;
		int day;
		int year;
		cout<<"Enter Month :";
		cin>>month;
		cout<<"Enter Day :";
		cin>>day;
		cout<<"Enter Year :";
		cin>>year;
		
		DateClass dat(month , day , year);
		
		dat.setmonth( month);
		dat.getmonth();
		dat.setday(day);
		dat.getday();
		dat.setyear(year);
		dat.getyear();
		
		
	
	return 0;
}
