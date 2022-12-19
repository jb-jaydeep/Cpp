#include<iostream>
using namespace std;
ostream &t(ostream & output){
	return output << "\t";
}
class Hotel {
	
	private :
	int id;
	static string name;
	string type;
	string rating;
	static string location;
	string year;
	int staff;
	int room;
	public :
		void input(int i, int a) {
			system("cls");
			cout << endl << endl << "enter a hotel data "<< i << " of "<< a << endl;
			cout << "Enter a hotel Id\t: ";
			cin  >> id;
			cout << "Enter a hotel type (like hotel or motel)\t: ";
			cin  >> type;
			cout << "Enter a hotel rating (like 1 Star, 2 Start, ..., 7 Star)\t: ";
			cin  >> rating;
			cout << "Enter a hotel establish year\t: ";
			cin  >> year;
			cout << "Enter a hotel staff quantity\t: ";
			cin  >> staff;
			cout << "Enter a hotel room quantity\t: ";
			cin  >> room; 
		}
		
		void output(){
				cout << id << t  << type << t  << rating << t
			         << year << t  <<staff << t 
			     << room <<t << location << endl;
			    
		}
		static void getname(){
			cout << name;
		}
		
		static void header(){
				system("cls");
				cout << t<<t<<name << endl;
				cout << "Id\tType\tRating\tYear\tStaff\tRooms\tlocation\n"
				      <<"=======\t=======\t=======\t=======\t=======\t=======\t=======\n";
   		}
		
};

string Hotel::name = "The Grand Bhagvati- TGB";
string Hotel::location = "Surat";
int main() {
	
	int a;
	
	cout << "Enter the number of hotel : ";
	cin  >> a;
	
	Hotel H[a];

	
	for(int i=0; i<a; i++) 	H[i].input(i+1,a);
	
	Hotel::header();
	
	for(int i=0; i<a; i++) 	H[i].output();

}

