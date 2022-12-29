#include<iostream>
using namespace std;

/* WAP with a mother class animal. Inside it define a name and an age variables, and set_value() function.
 Then create two bases variables Zebra and Dolphin which write a message telling the age, the name and giving some extra information
  (e.g. place of origin).*/

class Animal {
	
	protected :
		string name;
		double age;
		
	public : 
	
			void set_Value() {
			
			cout << endl << "Enter The Animal Name : ";
			cin  >> name;
			cout << endl <<"Enter The Animal Age : ";
			cin  >> age;
			
		}
};

class Zebra : public Animal{
	
	protected :
		string eat;
		string colour;
		
		public : 
	
			void set_ValueZ() {
			
			cout << endl << "What Zebra Eating? : ";
			cin  >> eat;
			cout << endl <<"Tell me a zebra colour : ";
			cin  >> colour;
			
		}
			void get_ValueZ() {
				
				cout << "==========================================="<<endl
				     << " The Animal Name : " << name << endl
				     << " Zebra Eating    : " << eat << endl
				     << " Zebra colour    : " << colour << endl
				     << " Zebra age       : " << age << endl
				     << "==========================================="<<endl;
			}
		
		
};

class Dolphin : public Animal{
	
	protected :
		string eat;
		string colour;
		
		public : 
	
			void set_ValueD() {
			
			cout << endl << "What dolphin Eating? : ";
			cin  >> eat;
			cout << endl <<"Tell me a dolphine colour : ";
			cin  >> colour;
			
		}
			void get_ValueD() {
				
				cout << "==========================================="<<endl
				     << " The Animal Name : " << name << endl
				     << " Dolphin Eating  : " << eat << endl
				     << " Dolphin colour  : " << colour << endl
				     << " Dolphin age     : " << age << endl
				     << "==========================================="<<endl;
			}
		
		
		
};

int main(){
	Zebra z;
	Dolphin d;
	z.set_Value();
	z.set_ValueZ();
	d.set_Value();
	d.set_ValueD();
	z.get_ValueZ();
	d.get_ValueD();
}
