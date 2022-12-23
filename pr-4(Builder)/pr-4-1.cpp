#include<iostream>
using namespace std;
/*  WAP to create a class Employee with setter and getter. Which have fields like id, name, role, salary, experience, address, email and contact. 
Get 5 records.     */
class Emp {
	
	private :
		
		int id;
		string name;
		string role;
		double salary;
		string exprience;
		string address;
		string email;
	long long int contactNo;
		
	public :
		
		void inputdata(int i, int n) {
		
			system("cls");
			
			cout << "INPUT DATA OF EMPLOYEE " << i << " of " << n << endl;
			cout << "Enter a employee Id : ";
			cin  >> id;
			cout << "Enter a employee Name : ";
			cin  >> name;
			cout << "Enter a employee Role : ";
			cin  >> role;
			cout << "Enter a employee Salary : ";
			cin  >> salary;
			cout << "Enter a employee Exprience : ";
			cin  >> exprience;
			cout << "Enter a employeee Address : ";
			cin  >> address;
			cout << "Enter a employee Email : ";
			cin  >> email;
			cout << "Enter a employee Contact No : ";
			cin  >> contactNo; 
		}
		static void header(){
			system("cls");
			
			cout <<"ID\tNAME\tROLE\tSALARY\tEXP.\tADD.\tCONTACT NO. EMAIL\n======= ======= ======= ======= ======= ======= =========== =======\n";
		}
		
		void outputdata() {
			
			cout << id << "\t"
				 << name << "\t"
			   	 << role << "\t"
				 << salary << "\t"
			     << exprience << "\t"
			     << address << "\t"
				 << contactNo << "\t"
				 << email << "\t"<<endl;
		}
};

int main() {
	
	int i,n;
		cout << "Enter a number of Employee : ";
	cin  >> n;
	
 	Emp e1[n];
	
		for(i=0; i<n; i++) 		e1[i].inputdata(i+1 , n);
		
			Emp::header();
	
	for(i=0; i<n; i++) 	e1[i].outputdata();

}
