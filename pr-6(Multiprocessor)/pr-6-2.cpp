/*   WAP to create a class that contains four member functions, with 0, 1, 2, and 3 int arguments, respectively. Create a 
     main( ) that makes an object of your class and calls each of the member functions. Now modify the class so it has 
	 instead a single member function with all the arguments defaulted.  */
	 
#include<iostream>
using namespace std;

class Math { 
	
	public :
		
		void Mathargu() {
			
			cout <<"Welcome to the mathematics world.........." << endl;
		}
		
		void Mathargu(int a) {
			
			cout <<"A : " << a << endl;
		}
		
		void Mathargu(int a, int b) {
			
			cout << "Sum of A & B : " << a+b << endl;
		}
		
		void Mathargu(int a, int b, int c) {
			
		
			cout << "Sum of A, B & C : " << a+b+c << endl;
		}
		
		void Mathargu(string thought){
			cout << thought << " means a mind-power" << endl;
		}
};

int main() {
	
	int a, b, c;
    cout << "Enter A : ";
    cin  >> a;
    cout << "Enter B : ";
    cin  >> b;
    cout << "Enter C : ";
    cin  >> c;
    
    Math h1;
    
    h1.Mathargu();
    
    h1.Mathargu(a);
    
    h1.Mathargu(a, b);
    
    h1.Mathargu(a, b, c);
    
    h1.Mathargu("Maths");
}
