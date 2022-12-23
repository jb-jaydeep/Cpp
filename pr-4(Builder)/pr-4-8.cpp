#include<iostream>
using namespace std;

/* WAP to demonstrate example of copy constructor. */

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
			
			cout << endl << "--------------------------------" << endl;
			cout << " Name\t: " << Name << "   "<< endl
				 << " Id No\t: " << Id  << "" << endl
				 << "--------------------------------" << endl; 	
		}
};

int main() {
	
	JB g("Jaydeep", 101);
	JB g1("Krushnam",143);
	JB g2("om",102);
	JB g3 = g;
	
	g.inputdata();
	g1.inputdata();
	g2.inputdata();
	g3.inputdata();
	
}
