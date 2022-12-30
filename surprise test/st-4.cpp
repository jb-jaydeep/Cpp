#include<iostream>
using namespace std;

 //Illustrate the use of implicit and explicit copy constructor.
 
 class Hotel {
  		private : 
  	    int id;
  		string name;
  		public :
  		Hotel () {
  		cout << "Welcome to the TGB"<< endl;
  		
  	    }

  		Hotel (int id, string name) {

  				this -> id = id;
  				this -> name = name;

  				cout << "Your id is :" << id << endl
  				      << "Name :" << name << endl;
  		}
  		
  	
  		//Explicit copy constructor...
  		Hotel (Hotel &h) {

  				id = h.id;
  				name = h.name;

  				cout << "Your id is :" << id << endl
  				     << "Name :" << name << endl;
  		}
  		};

  			int main() {

  			Hotel h;
  			Hotel h1(101,"Jaydeep");
  			Hotel h2(102,"Jay");
  			Hotel h3(103,"Deep");
  			Hotel h4 = h1; // Implicit copy constructor.
  			Hotel h5(h2); // Explicit copy constructor.
  		}
