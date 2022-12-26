#include<iostream>
using namespace std;

class P {
	
	protected :
		
		float temp;
	
	public :
		
		void celcius() {
			cout << "===================================="<< endl;
			cout << "Enter a temp in Celcius :";
			cin  >> temp;
			cout << "===================================="<< endl;
		}
		
		
};

class Q : public P {
	
	 protected :
	 	
	 	float fah;
	 	
	public :
		
		void Tofehrenheit() {
			
			fah = (temp * 9 / 5) + 32;
			cout << endl << "Answer :"<< endl;
			cout << "===================================="<< endl;
			cout << endl << "Fahrenheit : " << fah<< endl;
			cout << endl << "===================================="<< endl;
		}
};

class R : public Q {
	
	 protected :
	 	
	 	float kel;
	 	
	public :
		
		void Tokelvin() {
			
			kel = 273.5 + ((fah - 32.0) * (5.0/9.0));
			
			cout << endl << "Kelvin : " << kel << endl;
			cout << endl << "===================================="<< endl;
		}
};

int main() {
	
	R a;
	
	a.celcius();
	a.Tofehrenheit();
	a.Tokelvin();
	
}
