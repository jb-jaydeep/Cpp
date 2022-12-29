#include<iostream>
using namespace std;

/*   WAP to read and print employee information with use of multilevel inheritance. (as like in below image)  */

class A {
	
	protected :
		
		int id;
		string name;
		string role;
		int salary;
		string exprience;
		string comp_name;
		string address;
		string email;
		long long int contact;
		
	public :
		
		void inputdataA() {
			
			cout << "Enter your Id           : ";
			cin  >> id;
			cout << "Enter your Name         : ";
			cin  >> name;
			cout << "Enter your Role         : ";
			cin  >> role;
		}
};

class B : public A {
		
	public :
		
		void inputdataB() {
			
			cout << "Enter your Salary       : ";
			cin  >> salary;
			cout << "Enter your Exprience    : ";
			cin  >> exprience;
		}
};

class C : public B {
		
	public :
		
		void inputdataC() {
			
			cout << "Enter your Company Name : ";
			cin  >> comp_name;
			cout << "Enter your Address      : ";
			cin  >> address;
		}
		
		void outputdataC() {
			cout << "========================================"<<endl;
			cout << "\t NAME   : " << name << endl
				 << "\t ROLE   : " << role << endl
		    	 << "\t SALARY : " << salary << endl;
		    cout << "========================================"<<endl;
		}
};

class D : public C {
	
	public :
		
		void inputdataD() {
			
			cout << "Enter your Email       : ";
			cin  >> email;
			cout << "Enter your Contact No. : ";
			cin  >> contact;
		}
		
		void outputdataD() {
			
			cout << "========================================"<<endl;
			cout << " ID           : " << id << endl
				 << " NAME         : " << name << endl
				 << " ROLE         : " << role << endl
				 << " SALARY       : " << salary << endl
				 << " EXPRIENCE    : " << exprience << endl
				 << " COMAPNY NAME : " << comp_name << endl
				 << " ADDRESS      : " << address << endl
				 << " EMAIL        : " << email << endl
				 << " CONTACT NO.  : " << contact << endl;
			cout << "========================================"<<endl;					 
		}
};

int main() {
	
 	D d1;
 	
 	d1.inputdataA();
 	d1.inputdataB();
 	d1.inputdataC();
 	d1.outputdataC();
 	d1.inputdataD();
 	d1.outputdataD();
 	
}
