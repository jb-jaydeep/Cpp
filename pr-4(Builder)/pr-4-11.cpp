#include<iostream>
using namespace std;

 // WAP to create a class which illustrate the use of constant object.
 
 class foo  {

	private : 
	
	int id;
	string name;
	static string instname;
	
	public : 
	
	void inputdata(){
		
		cout << "Enter your id :";
		cin  >> id;
		cout << " Enter your Name :";
		cin  >> name;
	}
	void outputdata()
		{
			cout << "Id : " << id << endl
			     << "your name :" << name << endl
			     << "Institute name : " << instname << endl;
		}
		

		
 };
 string foo :: instname = "Red & White institute";
 
 int main(){
 	
 	foo f;
 	f.inputdata();
 	f.outputdata();
 }
