#include<iostream>
using namespace std;

class Employee{
	private :
	int empid;
	string empname;
	string emprole;
	int empage;
	int empsalary;
	double empexp;
	string empcity;
	string empcname;
	
	public :
		void setdata(){
			
			cout<<"Enter your ID number :";
			cin >>empid;
			cout<<"Enter your Name :";
			cin >>empname;
			cout<<"Enter your Role  :";
			cin >>emprole;
			cout<<"Enter your Age :";
			cin >>empage;
			cout<<"Enter your Salary :";
			cin >>empsalary;
			cout<<"Enter your Experience in year :";
			cin >>empexp;
			cout<<"Enter your City Name :";
			cin >>empcity;
			cout<<"Enter your Company Name:";
			cin >>empcname;
			cout<<endl<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl
				<<"_____________________________________________";
			
			
		}
		void getdata(){
			cout<<"ID\t\t: "<<empid<<endl
				<<"NAME\t\t: "<<empname<<endl
				<<"ROLE\t\t: "<<emprole<<endl
				<<"AGE\t\t: "<<empage<<endl
				<<"SALARY\t\t: "<<empsalary<<endl
				<<"EXPERIENCE(YEAR): "<<empexp<<endl
				<<"CITY\t\t: "<<empcity<<endl
				<<"COMPANY NAME\t: "<<empcname<<endl;	
		} 
};

int main(){
	Employee s1,s2,s3,s4,s5;
	s1.setdata();
	s2.setdata();
	s3.setdata();
	s4.setdata();
	s5.setdata();
	
	s1.getdata();
	s2.getdata();
	s3.getdata();
	s4.getdata();
	s5.getdata();
	
}
