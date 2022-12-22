#include<iostream>
using namespace std;

class Cafe {
	
	private :
		
		int n;
		int ci;
		string cn;
		string ct;
		string cr;
		string cl;
		int cey;
		int csq; 
		
	public :
		
		Cafe() {
			
			cout << "Enter The Number Of Fast Food Cafe : ";
			cin  >> n;
			
			for(int i=0; i<n; i++) {
				cout << endl<<"----------------------"<<endl;
				cout << "Enter a Cafe Id : ";
				cin  >> ci;
				cout << "Enter a Cafe Name : ";
				cin  >> cn;
				cout << "Enter a Cafe Type (like rooftop or normal) : ";
				cin  >> ct;
				cout << "Enter a Cafe Rating (like 1 Star, 2 Start, ..., 5 Star) : ";
				cin  >> cr;
				cout << "Enter a Cafe Location (city  name): ";
				cin  >> cl;
				cout << "Enter a Cafe Establish Year : ";
				cin  >> cey;
				cout << "Enter a Cafe Staff Quantity : ";
				cin  >> csq;
				
				cout << endl << "DISPLAY FAST FOOD CAFE DATA" << endl << endl;
				cout << " CAFE ID\t\t: " << ci << endl
				     << " CAFE NAME\t\t: " << cn << endl
				     << " CAFE TYPE \t\t: " << ct << endl
				     << " CAFE RATING \t\t: " << cr << endl
				  	 << " CAFE LOCATION\t\t: "<< cl << endl
				  	 << " CAFE ESTABLISH YEAR \t: " << cey << endl
				  	 << " CAFE STAFF QUANTITY \t: " << csq << endl;
			}
		}
		
		
};

int main() {
	
	Cafe c;
	
}

