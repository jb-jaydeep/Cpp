
// WAP which illustrates the use of public and private access modifiers.

#include<iostream>
using namespace std;
class Person {
	
	private :
		
		string mno;
		string fn,ln;
		
	public :
		
		void inputdata() {
			
			cout << endl << "Enter Your Detail....." << endl;
			cout << "Enter your First Name :";
			cin  >> fn;
			cout <<" Enter your Last Name :";
			cin  >> ln;
			cout << "Enter your contact no :";
			cin  >> mno;
			
		}
		
		void outputdata() {
			
			cout << endl << endl << "Your detail" << endl;
			cout << "your name :";
			cout << fn << " "<< ln << endl;
			cout << "contact no:" << mno << endl;
		}
};

int main() {
	
	Person p1;
	p1.inputdata();
	p1.outputdata();
}

