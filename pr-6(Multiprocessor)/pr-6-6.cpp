#include<iostream>
using namespace std;

//WAP to add two distances using binary plus (+) operator overloading.

class Dist {
	int f,i;
	public :
		void setdata(){
		
		cout << "Enter feet : ";
		cin  >> f;
		cout << "Enter inch : ";
		cin  >> i;
	}
	
	Dist operator+(Dist f2){
		Dist tmp;
		tmp.f = f + f2.f;
		tmp.i = i + f2.i;
		tmp.f = tmp.f + (tmp.i/12);
		tmp.i = tmp.i%12;
		
		
		cout <<"Feet : " << tmp.f << endl;
		cout <<"Inch : " << tmp.i << endl;
	}
};

int main(){
Dist f1,f2,f3;
f1.setdata();
f2.setdata();
f3 = f1 + f2;
}
