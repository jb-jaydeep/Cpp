#include<iostream>
using namespace std;
/*  WAP to perform all basic arithmetic operations such like +, -, *, and / operations by implementing method
	overloading using total 2 classes.
		- use only one method named calculate() in child class
		- if you pass 2 arguments, perform division
		- if you pass 3 arguments, perform subtraction
		- if you pass 4 arguments, perform multiplication
		- if you pass 5 arguments, perform addition  */
class Mathamatics {
	
	public :
		
		void calculate(int a, int b) {
			
			cout << "=================================="<<endl;
			cout << "Division of A & B             : " << a / b << endl; 
		}
		
		void calculate(int a, int b, int c) {
			
			cout << "Subtraction of A, B, & C      : " << a - b - c << endl; 
		}
		
		void calculate(int a, int b, int c, int d) {
			
		
			cout << "Multiplication of A, B, C & D : " << a * b * c * d << endl; 
		}
		
		void calculate(int a, int b, int c, int d, int e) {
		
			cout << "Addition of A, B, C, D & E    : " << a + b + c + d + e << endl; 
			cout << "=================================="<<endl;
			
		}
		
};


int main() {
	
	
	int a,b,c,d,e;
	
	Mathamatics m1;
	
	cout << "Enter a A : ";
	cin  >> a;
    cout << "Enter a B : ";
    cin  >> b;
    cout << "Enter a C : ";
    cin  >> c;
    cout << "Entre a D : ";
    cin  >> d;
    cout << "Enter a E : ";
    cin  >> e;
    
    
    m1.calculate(a,b);
    
    m1.calculate(a,b,c);
    
    m1.calculate(a,b,c,d);
    
    m1.calculate(a,b,c,d,e);
	
}



