#include<iostream>
using namespace std;

//WAP to create a Message class with a constructor that takes a single string with a default value. 
//Create a private member string, and in the constructor simply assign the argument string to your internal string.
// Create two overloaded member functions called print( ): one that takes no arguments and simply prints the message 
//stored in the object, and one that takes a string argument, which it prints in addition to the internal message.

class Message {
	private :
		
		string name;
		
		public :
			
			Message (string name){
				
				this->name = name;
				
			}
			
			void print(){
				
				cout << "Enter your name : ";
				cin  >> name;
				cout << "Your name is a " << name << endl;
			}
			
			void print(string surname){
				
				cout << "Enter your surname : ";
				cin  >> surname;
				cout << "Your surname is a " << surname << endl;
				cout << "Your full name : " << name << " " << surname << endl;
			}
		
};

int main(){
	string name,surname;
	Message m1(name);
	m1.print();
	m1.print(surname);
}
