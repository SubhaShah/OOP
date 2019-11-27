#include <iostream>
#include <string>
using namespace std;
class HeartRate{
	private:
		string fname;
		string lname;
		int dob;
		int mob;
		int yob;
		int yy=2019,age,hr,thr;
	public:
		HeartRate(string f,string l, int mm, int dd, int yy){
		
		fname=f;
		lname=l;
		dob=dd;
		mob=mm;
		yob=yy;}
		setFirstName ( string f)
        {
      fname=f;
         }
       getFirstName ()
         {
     // return fname;
        }
        setLastName ( string l)
        {
      lname=l;;
         }
       getLastName ()
         {
     // return lname;
        }
        setMonthOfBirth (int mm)
         {
       mob = mm;
           }
           getMonthOfBirth ()
        {
      // return mm;
        }
        setDateOfBirth (int dd)
         {
       dob = dd;
           }
           getDateOfBirth ()
        {
       //return dd;
        }
        setYearOfBirth (int yy)
         {
       yob = yy;
           }
           getYearOfBirth ()
        {
      // return yy;
        }
        AGE(){

        cout<<"Enter Age:"<<dob<<"/"<<mob<<"/"<<yob<<endl;

        

        age=2019-yob;

        hr=220-age;

        thr=hr-70;

    }
    Display(){

        AGE();

        cout<<"Date of Birth:"<<age<<endl;

        cout<<"Your Heart rate:"<<hr<<endl;

        cout<<"Target Heart rate:"<<thr<<endl;

        }
        



















};
