#include<iostream>
using namespace std;
#include<string.h>
/*WAP to implement exception handling mechanism for
different types of scenarios:
- a number cannot be divide by zero
- a person cannot be able to vote if his/her age is less
than 18
- a password cannot be validate if it doesn’t contains
an uppercase letter*/

class Operation {
	public :
	int i,count=0;
	string negativem = "Your password doesn't contains uppercase letter";
	string a;
	int length;
	char pass[100];
	string positivem = "You entered correct password" ;
	public :
	//division- logic
	void div(double a, double b){
		
		if(b==0){
			
			throw b;	
		}else{
			
			cout <<" Answer : " << a/b << endl;
		}
	}
	//voting-logic
	double allowvoter(double age){
		
		if(age <18.0){
			
			throw age;
		}
		else{
			
			cout <<" you are alligible for vating...." << endl; 
		}
	}
	//password-logic
	void passcheck(){
		
			cout <<" Enter Email : ";
			cin  >> a; 
			
			cout <<" Enter Password : ";
			cin  >> pass; 
			
			length = strlen(pass);
	
		 	for( i=0 ; i < length ; i++)
           	{
                if(pass[i]>= 65 && pass[i]<=90) {

                    count++;
                }
           }
          
            if(count >= 1) {
              cout << endl <<positivem << endl;   
           }
           else {
               throw count;
           }
	}	
};

class Division : public Operation {
	double a,b;
	
	public :
		Division(){
			cout <<" Welcome to calculater...." << endl;
		}
		
		void setdata(){
			
			cout <<" Enter A : ";
			cin  >> a; 
			
			cout <<" Enter B : ";
			cin  >> b; 
		}
		
		void getdivision(){
			try {
				div(a,b);
			}
			
		catch(double b){
				
				cout << " " << b <<" Can not divided by Zero" << endl;
			}	
		}		
	};

class Vote : public Operation {
	double age;
	
	public :
	 Vote(){
		
			cout <<" Welcome to check eligibility for voting...." << endl;
		}
		
		void setdatavote(){
			
			cout <<" Enter your Age : ";
			cin  >> age; 
					}
		
		void geteligibility(){
			
			
			try {
			allowvoter( age);
			
			}
			
			catch(double age){
				
				cout << " " << age <<" Can not eligible for vote..." << endl;
			}
				catch(string age){
				
				cout << " " << age <<" Can not eligible for vote..." << endl;
			}			
		}
		
	};

class Password : public Operation{
	
	public :
	
		
		void getpassword(){
			try {
				passcheck();
			}
			
		catch(int count){	
				cout << negativem << endl;
			}
		
		}
};

int main(){
	
	Division d;
	d.setdata();
	d.getdivision();
	
	Vote v;
	v.setdatavote();
	v.geteligibility();
	
	Password p;
	p.getpassword();
}
