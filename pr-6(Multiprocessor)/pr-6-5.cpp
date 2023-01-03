#include<iostream>
using namespace std;

//WAP to add two objects using binary plus (+) operator overloading.

class Math {
	
	int a;
	
	public : 
	void setdata(){
		
		cout << "Enter a : ";
		cin  >> a;
	}
	
	Math operator+(Math m2){
		
		Math tmp;
		
		tmp.a = this->a + m2.a;
		
		cout << "Addition of both objects's a : " << tmp.a << endl;
	}
};

int main(){
	
	Math m1,m2,m3;
	m1.setdata();
	m2.setdata();
	m3 = m1 + m2;
	
}
