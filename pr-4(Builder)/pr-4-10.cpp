#include<iostream>
using namespace std;

/*  WAP to create a class which Set values of data members using default, parameterized and copy constructor.  */
		
class JB {
	
	private :
		
		string Name;
		int Id;
		
	public :
		
		JB() {
		
			cout << "--------------------------------" << endl;
			cout << " Welcome to our store..........." << endl
				 << "--------------------------------" << endl; 	
		}
		
		JB(JB &m) {
			
			Name = m.Name;
			Id = 1001;
		}
	
		JB(string Name, int Id) {
			
			this->Name = Name;
			this->Id = Id;
		}		
		
		void outputdata() {
			
				cout << endl << "--------------------------------" << endl;
			cout << " Name\t: " << Name << "   "<< endl
				 << " Id No\t: " << Id  << "" << endl
				 << "--------------------------------" << endl; 	
		}	
		
};

int main() {
	
	JB m;
	JB m0("Akshay", 121);
	JB m1("Krushnam",143);
	JB m2(m0);
	
	
	m0.outputdata();
	m1.outputdata();
	m2.outputdata();
	
}

