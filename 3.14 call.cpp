#include <iostream>
using namespace std;
class Employee{
	private:
	string fname;
	string lname;
	double bal;
	public:
		//constructor
		Employee(string f, string l, double m){
			fname=f;
			lname=l;
			if(bal < 0){ 
            bal =0;
            }
            else bal = m;
            }
            void getpart(){

        cout<</*"Account Number:"<<account_number<<*/"First Name:"<<fname<<"\nLast Name:"<<lname<<"\nBalance:"<<bal<<endl;

        }


        };
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
           /* getFirstName() {
           return fname;
           }
           setFirstname(string f){
           	return fname=f;
		   }
		   setLastname(string l){
		   	return lname=l;
		   }
		   getbal(){
		   	return m;
		   }
		   setbal(double m){
		   	 if(m < 0){
       bal =0;
          }
            else bal = m;
        }
		   };*/
		
		
		

