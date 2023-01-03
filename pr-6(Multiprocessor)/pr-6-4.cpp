#include<iostream>
using namespace std;

//WAP for unary increment (++) and decrement (--) operator overloading.

class Math{
	
	int a,tmpa;
	
	public:
		
		void setdata(){
			
			cout << "enter a : ";
			cin  >> a;
			tmpa = a;
		}
		
		void getdata(){
			
			cout <<"A : " << a << endl;
		}
		
		Math operator++(){
			
			Math tmp;
			cout << "A after increment....."<< endl;
			tmp.a = ++a;
		}
			Math operator--(){
			
			Math tmpex;
			cout << "A after decrement....."<< endl;
			tmpex.tmpa = --tmpa;
	}
};

int main(){
	Math m1,m2,m3;
	m1.setdata();
	m1.getdata();
	m2 = ++m1;
	m2.getdata();
	m3 = --m1;
	m3.getdata();
}
