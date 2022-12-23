#include<iostream>
using namespace std;

/* WAP to create a class which Read and print Class, Student details using Two Classes. (Make two classes, create one classe's obj in another class.)           */

class Jaydeep {
			
	public :
		
		int rollNo;
		string name;
		int standard;
		int age;
		long long int contactNo;
		string address;

		
		void inputdata() {
			
			cout << "\t\t\t-- INPUT STUDENT  DATA --" << endl;
			
			cout << "\tEnter a Student Roll No : ";
			cin  >> rollNo;
			cout << "\tEnter The Student Name : ";
			cin  >> name;
			cout << "\tEnter The Student Standard : ";
			cin  >> standard;
			cout << "\tEnter The Student Age : ";
			cin  >> age;
			cout << "\tEnter The Student Contact No : ";
			cin  >> contactNo;
			cout << "\tEnter The Student Address : ";
			cin  >> address;
		}
		 
		 
		
};

class Krushnam {
	
	public :
		
		
		void outputdata() {
			
			Jaydeep j1;
			j1.inputdata();
			
			cout << endl <<"--------------------------------" << endl;
			cout << "\t\tSTUDENT" << endl;
			cout << "--------------------------------" << endl;
			cout << " STUDENT ROLL NO    : "<< j1.rollNo << endl
				 << " STUDENT NAME       : " << j1.name  <<endl
				 << " STUDENT STANDARD   : " << j1.standard<< endl
				 << " STUDENT AGE        : " << j1.age  << endl
				 << " STUDENT CONTACT NO : " << j1.contactNo  << endl
				 << " STUDENT ADDRESS    : " << j1.address << endl;
			cout << " --------------------------------" << endl;
			cout << " --------------------------------" << endl;
		}
		
};
int main() {
	
	
	Krushnam k1;
	
 	k1.outputdata();
 	
}
