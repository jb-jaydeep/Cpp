#include<iostream>
using namespace std;

/*  WAP with a mother class and an inherited daugther class.Both of them should have a method 
	void display ()that prints a message (different for mother and daugther). 
	In the main define a daughter and call the display() method on it.  */

class Mother {
	
	public :
		
		void display() {
			cout << "============================================";
			cout << endl << "Mother Says :" << endl;
			cout << "What are you doing my little champ?" << endl;
			cout << "What you wan't to eat right now my princess?" << endl; 
			cout << "============================================";
		}
};

class Daugther : public Mother {
	
	public :
		
		void display() {
			
			Mother :: display();
			
			cout << endl << "Daughter' Reply :" << endl;
			cout << "I am doing my exam preparation." << endl;
			cout << "I want to eat a Maggi." << endl;
			cout << "============================================";
		}
};

int main() {
	
	Daugther princess;
	
	princess.display();
}
