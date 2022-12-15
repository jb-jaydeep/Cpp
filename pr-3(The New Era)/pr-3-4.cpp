#include<iostream>
using namespace std;
#include<string.h>

class House {
	
	private :
		
		int hno,hbn;
		string hla,hsize,hcolor,htype;
		
	public :
		
		void inputdata() {
			
			cout << "Enter your house Number :";
			cin  >> hno;
			cout << "Enter your house size :";
			cin  >> hsize;
			cout << "Enter your house color :";
			cin  >> hcolor;
			cout << "Enter your house type :";
			cin  >> htype;
			cout << "Enter Number of bedroom in your house :";
			cin  >> hbn;
			cout << "Enter your house Landmark area :";
			cin  >> hla;
		}
		
		void outputdata() {
			
			cout << "House detail...." << endl
			     <<"House type : "<<htype<<endl
				 <<"House size : "<<hsize<<endl
				 <<"House landmark area : "<<hla<<endl
				 <<"House color : "<<hcolor<<endl
				 <<"No. of bedroom : "<<hbn<<endl
			     <<"House number : "<<hno<<endl;
			
		}
};

int main() {
	
	House h;
	h.inputdata();
	h.outputdata();
}

