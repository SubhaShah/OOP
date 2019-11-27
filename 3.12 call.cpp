#include <iostream>
#include <string>
using namespace std;
class DateClass{
	private:
		int month;
		int day;
		int year;
	public:
	DateClass(int m, int d, int y){
		month = m;
		day = d;
		year = y;
	}
	setmonth(int m){
    if((m>=0) && (m<=12))
     month=m;
     
     else{
     month=0;
	  }}
	getmonth(){
	  	return month;
	  }
	  setday(int d){
       if((d>=0) && (d<=30))
  
       day=d;
        else{
        day=0;
       }
     }
     getday(){
     	return day;
	 }
	 setyear(int y){   
      year=y;

      }
      getyear(){
      	return year;
	  }
	 displaydate(){
	 	cout<<month<<" / "<<day<<" / "<<year;
	 }
	 
	 
	 
	 
	 
	  
	
};
