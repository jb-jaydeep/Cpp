#include<iostream>
using namespace std;
/*WAP to implement method overriding by following below mentioned criteria:
- Class Cricket -> Class T20Match
- Class Cricket -> Class TestMatch
- override getTotalOvers() method in both classes
*/
class Cricket {

		public : 
	void getTotalOver(int a){
			
				if(a!=20 && a!=90){
				
				cout << endl << "------------------------------------" << endl
				 << endl << "Random Cricket Match" << endl
				 << "------------------------------------" << endl
			     << endl << " Over in your Random Match : " << a << endl;
		}
	}	
};

class T20 : public Cricket {
	
	
	public :
		
		void getTotalOver(int a){
		
			if(a==20){
		
			cout << endl << "------------------------------------" << endl
				 << endl << "T20 Cricket Match" << endl
				 << "------------------------------------" << endl
			     << endl << " Over in your T20 Match : " << a << endl;
			}
		}
			
};

class Test : public Cricket {
	
	protected :
	
	public :
		void getTotalOver(int a){
			
				if(a==90){
				
				cout << endl << "------------------------------------" << endl
				 << endl << "Test Cricket Match" << endl
				 << "------------------------------------" << endl
			     << endl << " Over in your Test Match : " << a << endl;
		}
	}
	
	
};

int main(){
	
	int a;
		cout << "Enter a Over you want to play."<< endl
				 << "For T20 Match : Enter 20" << endl
				 << "For Test Match : Enter 90" << endl
				 << "For Random Match : Enter Any over You want to play : ";
			cin  >> a;
	Cricket c;
	T20 t;
	Test test;
	t.getTotalOver(a);
	test.getTotalOver(a);
	test.Cricket :: getTotalOver(a);
}
