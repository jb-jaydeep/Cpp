#include<iostream>
using namespace std;
//  WAP to create a class to read and add two distance.
//  (e.g. 8 feet 16 inch + 4 feet 14 inch = 14 feet 6 inch)


class Distan {
	
	private :
		
		int fdf, sdf, fdi, sdi, dist, feet, inch;
		
	public :
		
		void inputdata() {
			
			cout << "Enter a feet for first distance :";
			cin  >> fdf;
			cout << "Enter a feet for second distance :";
			cin  >> sdf;
			cout <<"- - - - - - - - - - - - - - - - "<<endl ;
			cout << "Enter a inch for first distance :";
			cin  >> fdi;
			cout << "Enter a inch for second distance :";
			cin  >> sdi;
		}
		
		void outputdata() {
			
			feet  = fdf + sdf;
			inch = fdi + sdi;	
			
			if(inch>=12)
			{
				dist = inch/12;
				inch  =  inch % 12;
				feet += dist;
			}
				
			cout << endl << "Answer :"<<endl
				 << "your distance is"
        		 <<endl;
			cout <<"Feet :" << feet << endl
				 <<"Inch :" << inch << endl;
		}
};

int main() {
	
	Distan d;
	d.inputdata();
	d.outputdata();
}

