#include<iostream>
using namespace std;

/*  WAP to demonstrate example of hierarchical inheritance to get square and cube of a number. */ 

class Num {
	
	protected :
		
		int a;
		
	public :
		
		Num() {
		
		cout << endl << "Enter The a : ";
		cin  >> a;
		
		}
		
};

class Square : public Num {

	public :
		Square():Num()	{
	
		    cout << "============================================" << endl;
		    cout << " Square of "<< a << " : " << a*a<< endl;
			cout << "============================================" << endl;
		}
		
};

class Cube : public Num {

	public :
		Cube():Num()
		
		 {
		cout << "============================================" << endl;
		cout << " Cube of "<< a << " : " << a*a*a << endl;
		cout << "============================================" << endl;
		
		}
		
};

int main() {
	
	Square s1;
	Cube c1;
	
}
