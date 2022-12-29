#include<iostream>
using namespace std;

class Personaldetail {
	
	protected :
		
	string name;
	double age;
	string email;
	long long int contact;
	
	public : 
	
	Personaldetail() {
		
		cout << "Enter your name              :";
		cin  >> name;
		cout << "Enter your Age               :";
		cin  >> age;
		cout << "Enter your Email             :";
		cin  >> email;
		cout << "Enter your Contact No.       :";
		cin  >> contact;
	}
};
class Companydetail {
	
	protected :
		
		double experience;
		string role;
		double salary;
		string cname;
		
	public : 
	
	Companydetail() {
		
		cout << "Enter your Experience        :";
		cin  >>  experience;
		cout << "Enter your Role              :";
		cin  >> role;
		cout << "Enter your Salary            :";
		cin  >> salary;
		cout << "Enter your Company Name      :";
		cin  >> cname;
	}
	
};

class Emp :public Personaldetail , public Companydetail {
	
	public :
	Emp():Companydetail(),Personaldetail()
	{
		cout << "Comapny Name" << "\t"
			 << "Name" << "\t"
			 << "Role" << "\t"
			 << "Salary" << "\t"
			 << "Exp" << "\t"
			 << "Age" << "\t"
			 << "Cont.No" << "\t\t"
			 << "Email" << "\t"
			 << endl
			 << "============"<< "\t"
			 << "=======" << "\t"
			 << "=======" << "\t"
			 << "=======" << "\t"
			 << "=======" << "\t"
			 << "=======" << "\t"
			 << "=======" << "\t\t"
			 << "=======" << "\t"
			 << endl;
		cout << cname << "\t\t" 
			 << name  << "\t"
			 << role  << "\t"
			 << salary  << "\t"
			 << experience  << "\t"
			 << age  << "\t"
			 << contact  << "\t"
			 << email  << "\t"
			 << endl;
	}
};

int main(){
	
	Emp e;
	
	
	
	
}
