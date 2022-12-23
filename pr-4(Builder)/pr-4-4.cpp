#include<iostream>
using namespace std;

/*  WAP to create two class HighSchool and College with fields like id, stu_name, stu_roll_no, stu_standard, 
stu_age, stu_contact, stu_edu_institute_name and stu_address. 
Make suitable setter and getter with use of static data members.  */

class school {
	
	private :
	
		int id;
		string name;
		int rno;
		string std;
		int a;
	long long int cont;
		static string inst;
		string add;
		
	public :
		
		void inputdata() {
			
			cout << endl << endl << "\t\t\t--- INPUT STUDENT DATA ---" << endl;
			cout <<"-------------------------------------------------------------------------- " << endl << endl;
			
			cout << "\tEnter a Student Id : ";
			cin  >> id;
			cout << "\tEnter a Student Name : ";
			cin  >> name;
			cout << "\tEnter a Student Roll No : ";
			cin  >> rno;
			cout << "\tEnter a Student Standard : ";
			cin  >> std;
			cout << "\tEnter a Student Age : ";
			cin  >> a;
			cout << "\tEnter a Student Contact No : ";
			cin  >> cont;
			cout << "\tEnter a Student Address : ";
			cin  >> add;
			
		}
		
		void outputdata() {
			
			cout << endl << "\t\t\t---DISPLAY STUDENT DATA ---  " << endl;
			cout << "============================================================================= " << endl;
			cout << " STUDENT ID : " << id << endl
				 << " STUDENT NAME : " << name<< endl
				 << " STUDENT ROLL NO : " << rno << endl
				 << " STUDENT STANDARD : " << std << endl
				 << " STUDENT AGE : " << a << endl
				 << " STUDENT CONTACT NO : " << cont << endl
			     << " STUDENT EDUCTION INSTITUTE NAME : " << inst << endl
				 << " STUDENT ADDRESS : " << add << endl;
			cout << "============================================================================= " << endl;
		}
		
};

class Collage {
	
	private :
	
		int id;
		string name;
		int rno;
		string std;
		int a;
		long long int cont;
		static string inst;
		string add;
		
	public :
		
		void inputdata() {
			
			cout << endl << endl << "\t\t\t--- INPUT Collage DATA ---" << endl;
			cout << "-------------------------------------------------------------------------- " << endl << endl;
			
			cout << "Enter a Student Id : ";
			cin  >> id;
			cout << "Enter a Student Name : ";
			cin  >> name;
			cout << "Enter a Student Roll No : ";
			cin  >> rno;
			cout << "Enter a Student Standard : ";
			cin  >> std;
			cout << "Enter a Student Age : ";
			cin  >> a;
			cout << "Enter a Student Contact No : ";
			cin  >> cont;
			cout << "Enter a Student Address : ";
			cin  >> add;
			
		}
		
		void outputdata() {
			
			cout << endl << "\t\t\t---DISPLAY Collage DATA ---  " << endl;
			cout << "============================================================================= " << endl;
			cout << " STUDENT ID                      : " << id << endl
				 << " STUDENT NAME : " << name << endl
				 << " STUDENT ROLL NO : " << rno << endl
				 << " STUDENT STANDARD : " << std << endl
				 << " STUDENT AGE : " << a << endl
				 << " STUDENT CONTACT NO : " << cont << endl
				 << " STUDENT EDUCTION INSTITUTE NAME : " << inst << endl
				 << " STUDENT ADDRESS : " << add << endl;
			cout << "============================================================================= " << endl;
		}
		
};

string school ::inst = "Gajera Vidhyabhavan";
string Collage :: inst = "Veer Narmad South Gujarat University";

int main() {
	
	school h;
	Collage c;
	
	h.inputdata();
	h.outputdata();
	
	c.inputdata();
	c.outputdata();
}
