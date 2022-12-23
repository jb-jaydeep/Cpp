#include<iostream>
using namespace std;

/*   WAP to demonstrate example of destructors.  */

class JB {
	
	public :
		
		~JB() {
			
				cout << "--------------------------------" << endl
			         << " Thank you for visit............"<< endl
				     << "--------------------------------" << endl; 	
		}
};

int main() {
	
	JB j;
}
