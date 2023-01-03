/*  WAP which illustrate the use of Method Overriding concept. */

#include<iostream>
using namespace std;


class Mathamatics {

	public :

		void calculate(int a, int b) {

			cout << "=================================="<< endl;
			cout << "Division of A & B : " << a / b << endl; 
	}
};
			
class Mathamaticsnew : public Mathamatics {
			
	public :
				
		void calculate(int a, int b) {
				
			cout << "=================================="<< endl;
			cout << "Division of" << "A" << " & " << "B" << " : " << a / b << endl; 
			cout << "=================================="<< endl;
	}
};
			
int main() {
		int a ;	
	Mathamaticsnew m;
	m.calculate(20,4); //calling of child class method.
	m.Mathamatics :: calculate(20,4); //calling of parent class method.
}

