#include<iostream>
using namespace std;

/*    WAP that defines a shape class with a constructor that gives value to width and height.
      The define two sub-classes triangle and rectangle, that calculate the area of the shape area (). 
      In the main, define two variables a triangle and a rectangle and then call the area() function in this two varibles.     */
      
class Shape {
	
	protected :
		
		int w;
		int ht;
		
	public :
		
		Shape() {
			
			cout << "Enter a width : ";
			cin  >> w;
			cout << "Enter a height : ";
			cin  >> ht;
		}
};

class Triangle : public Shape {
	
	public :
		
		int areaT() {
			
			return ht * w / 2;
		}
};

class Rectangle : public Shape {
	
	public :
		
		int areaR() {
			
			return ht * w;
		}
};



int main() {
	
	int triangle;
	int rectangle;
	
	Triangle t;
	
	triangle = t.areaT();
	cout << endl << "Area of Triangle : " << triangle << endl;
	cout << endl;
	
	Rectangle r;

	rectangle = r.areaR();
	cout << endl << "Area of Rectangle : " << rectangle << endl << endl;
	
	
	
}

