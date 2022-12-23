#include<iostream>
using namespace std;

/*  WAP to demonstrate example of parameterized constructor.  */
class JB {
	
	private :
		
		string Name;
		int Id;
		
	public :
	
		JB(string Name, int Id ) {
			
			this->Name = Name;
			this->Id  = Id ;
		}		
		
		void inputdata() {
			
			cout << endl << endl << "--------------------------------" << endl;
			cout << " Name\t: " << Name << "   "<< endl
				 << "--------------------------------" << endl
				 << " Id No\t: " << Id  << "" << endl
				 << "--------------------------------" << endl << endl; 	
		}
};


int main() {
	
	JB d("Jaydeep Borda", 101);
	
	d.inputdata();
}
