#include<iostream>
using namespace std;

//WAP to overload < operator to find which object
//contains higher value from given 2 numbers.

class Num {
	
	int a;
	
	public :
		
		void setdata(){
			
			cout << "Enter a : ";
			cin  >> a;
		}
		
		Num operator< (Num n2){
			Num tmp;
			
			if (a<n2.a){
				tmp.a = n2.a;
					cout << " The higher number : " << tmp.a << endl;
				return tmp;
			}
			else if (a>n2.a) {
				tmp.a = a;
				cout << " The higher number : " << tmp.a << endl;
				return tmp;
			} else if (a==n2.a){
				tmp.a = a = n2.a;
				cout << " Both are same & you entered : " << tmp.a << endl;
				return tmp;
			}
			
		}
};

int main (){
	Num n1,n2,n3;
	n1.setdata();
	n2.setdata();
	n3 = n1<n2;

	
}
