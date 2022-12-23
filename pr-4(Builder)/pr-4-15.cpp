/* WAP which perform Addition of members of two different classes using friend Function.  */

#include<iostream>
using namespace std;

class A;

class B {
	
	private :
		int a;
		
	public :
		
		void inputdata() {
			
			cout << endl << endl << "INPUT A " << endl
				 << "============================"<<endl;
			cout << "Enter A : ";
			cin  >> a;
		}
		
		friend void SUM(B , A);
};


class A {
	
	private :
		int b;
		
	public :
		
		void inputdata() {
			
			cout << endl << "INPUT B" << endl
				  << "============================"<<endl;
			cout << "Enter The B : ";
			cin  >> b;
		}
		
		friend void SUM(B , A);
};

void SUM(B h, A H) {
	
	cout << endl << "ADDISION OF A & B " << endl;
	cout << "\t A + B : " << h.a + H.b << endl;
}

int main() {
	
	B h1;
	A   H1;
	
	
	h1.inputdata();
	H1.inputdata();
	
	SUM(h1,H1);
}

