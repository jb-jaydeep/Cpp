#include<iostream>
using namespace std;
/*WAP to abstract some attributes of class Admin to
prevent them to be inherited by its child classes.
- Class Admin -> Class Manager
- Class Manager -> Class Employee
- Class Admin has following members:
- company_name
- manager_salary
- employee_salary
- total_staff
- total_annual_revenue
- can_terminate
- use all attributes accessibility in parent class and
child class properly.
- override a method myAccess() in both child
classes to display all parent class’s members value
accordingly.*/

class Admin {
	
    protected : 
	string company_name;
    long long int manager_salary;
    long long int employee_salary;
    int total_staff;
    double total_annual_revenue;
    string can_terminate;
    
    
    	Admin(){
    		
    		company_name = "Tata_Motors_Pvt_Ltd.";
    		manager_salary = 50000;
    		employee_salary = 15000;
    		total_staff = 121;
    		total_annual_revenue = 200.5;
    		can_terminate = "Manager&Employee";
		}
	public :	
	void myAccess(){
			
			cout <<"Admin can Access this All Attributes......" << endl
				 <<"------------------------------------------" << endl
				 <<"Company name                : " << company_name << endl
			     <<"Manager salary              : " << manager_salary << endl
			     <<"Empoyee salary              : " << employee_salary << endl
			     <<"Total staff in company      : " << total_staff << endl
			     <<"Total Annual Revenue in Cr  : " << total_annual_revenue << endl
				 <<"Can terminate               : "<< can_terminate << endl
				 <<"------------------------------------------" << endl << endl;
		}	
};

class Manager : public Admin {
		
		public :
	
		void myAccess(){
			string can_terminate ="Employee";
			//Admin ::myAccess();
			
		    cout <<"Manager can Access this All Attributes......" << endl
				 <<"------------------------------------------" << endl
				 <<"Company name           : " << company_name << endl
			     <<"Manager salary         : " << manager_salary << endl
			     <<"Empoyee salary         : " << employee_salary << endl
			     <<"Total staff in company : " << total_staff << endl
				 <<"Can terminate          : "<< can_terminate << endl
				 <<"------------------------------------------" << endl << endl;	
			
		}	
	
};

class Employee : public Manager{

	public :
	void myAccess(){
		
		//Manager ::myAccess();
		
	cout <<"Employee can Access this All Attributes......" << endl
		 <<"------------------------------------------" << endl	
		 <<"Company name   : " << company_name << endl
		 <<"Empoyee salary : " << employee_salary << endl 
		 <<"------------------------------------------" << endl << endl;
	}
};

int main(){
Employee e1;
e1.myAccess();
e1.Manager::myAccess();
e1.Admin::myAccess();

}
