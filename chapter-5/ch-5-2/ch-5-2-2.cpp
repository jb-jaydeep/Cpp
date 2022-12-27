/* WAP to perform four different numbers sum by inheriting constructors in hybrid inheritance.  */

#include<iostream>
using namespace std;

class A {
	
	protected :
		
		int a;
		
	};

class B : public A {
	
	protected :
		
		int b;
		
	public :
		
		B() {
			cout << "Enter The A : ";
			cin  >> a;
			cout << "Enter The B : ";
			cin  >> b;
		}
};

class C : public A {
	
	protected :
		
		int c;
		
	public :
		
		C() {
			
			cout << "Enter The C : ";
			cin  >> c;
		}
};

class D : public B,public C {
	
	protected :
		
		int d;
		
	public :
		
		D() : B() {
			
			cout << "Enter The D : ";
			cin  >> d;	
			cout << endl << "=========================="<< endl;
			cout << endl << "SUM of A + B + C + D : " << B::a + b + c + d << endl;
			cout << endl << "=========================="<< endl;	
	    }
};


int main() {
	
	D d;
}

