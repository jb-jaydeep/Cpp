#include<iostream>
using namespace std;

/*
WAP to perform some basic mathematical operations
using Abstract class such like:
- area of circle
- area of triangle
- area of rectangle
- use one single pure virtual function named
calculate() to perform all above operations*/

class Operation {
	protected :
	double circle,tri,rec;
	protected :
		
		virtual void calculate(int a,int b ,double c) = 0;
		
		void area_circle(double r){
			
			circle = 3.14 * r*r;
			cout << "Area of Circle with radius " << r << " : " << circle << endl;	
		}
		void area_triangle(double h , double b){
			
			tri = (h*b)/2;
			cout << "Area of Triangle with height " << h << " & base " << b << " : " << tri << endl;	
		}
		double area_rectangle(double w, double l){
			
			rec = w*l;
			cout << "Area of recangle with length " << l << " & width " << w << " : " << rec << endl;
		}
};

class User : protected Operation{
		int a;
	public :
		
		void calculate(int x,int b ,double c){
			
			cout << "Enter 1 for Area of Circle"<<endl
				 << "Enter 2 for Area of Triangle"<<endl 
				 << "Enter 3 for Area of rectangle"<<endl;
			cin  >> a;
			switch(a)
			{
				double r;
				case 1:
					
						cout << "Enter a Radius of circle : ";
						cin  >> r;
						
						area_circle(r);
						break;
				case 2:
					double h,b;
						cout << "Enter a height of triangle : ";
						cin  >> h;
						cout << "Enter a base of triangle : ";
						cin  >> b;
						
						area_triangle(h,b);
						break;
				case 3:
					double w,l;
						cout << "Enter a width of rectangle : ";
						cin  >> w;
						cout << "Enter a length of recangle : ";
						cin  >> l;
						
					area_rectangle( w,l);
					break;
				
			}
			
		}
};

int main(){
	User u1;
	u1.calculate(1,1,3.14);
}
