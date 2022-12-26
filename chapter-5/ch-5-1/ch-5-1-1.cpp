#include<iostream>
using namespace std;

class X {
	
	protected :
		int a;
		int b;
		int c;
		int sum=0;
};

class Y : public X{

		public:
			
		void inputdata(){
			
			cout << " Enter a :";
			cin  >> a;
			cout << " Enter b :";
			cin  >> b;
			cout << " Enter c :";
			cin  >> c;
			sum = (a*a*a) + (b*b*b) + (c*c*c);
		}
		
		void outputdata(){
			cout << "===================================="<< endl;
			cout << "cube of A : "<< a*a*a << endl;
			cout << "cube of B : "<< b*b*b << endl;
			cout << "cube of C : "<< c*c*c << endl;
			cout << "===================================="<< endl;
			cout << " sum of cube of A,B,C : " << sum << endl;
			cout << "===================================="<< endl;
			
		}
};

int main(){
	Y y1;
	y1.inputdata();
	y1.outputdata();
}
