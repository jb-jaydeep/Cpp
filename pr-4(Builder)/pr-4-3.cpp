#include<iostream>
using namespace std;
/* WAP to create a class Hotel with fields like id, name, type, staff_size, room_size, establish_year, address, rating_type and website.
   Illustrate the use of encapsulation (strict encapsulation) with this keyword.   */
class Hotel {
	
	private :
		int id;
		string name;
		string type;
		int ss; 
		int rs;
		int ey;
		string add;
		string rt;
		string w;
		
	public :
		
		void inputdata(int id,string name,string type,int ss,int rs,int ey,string add,string  rt,string w) {
			
			this->id = id;
			this->name = name;
			this->type = type;
			this->ss = ss;
			this->rs = rs;
			this->ey = ey;
			this->add = add;
			this->rt = rt;
			this->w = w;
		}
		
		void outputdata() {
			
			cout << endl << "\t--- DISPLAY HOTEL DATA \t---" << endl << endl << endl;
			
			cout <<"\tHOTEL ID             : " << id << endl
				<< "\tHOTEL NAME           : " << name << endl
				<< "\tHOTEL TYPE           : " << type << endl
				<< "\tHOTEL STAFF SIZE     : " << ss << endl
				<< "\tHOTEL ROOM SIZE      : " << rs << endl
				<< "\tHOTEL ESTABLISH YEAR : " << ey << endl
				<< "\tHOTEL ADDRESS        : " << add << endl
				<< "\tHOTEL RATING TYPE    : " << rt << endl
				<< "\tHOTEL WEBSITE        : " << w << endl;
		}
		
};

int main() {
	
	Hotel h1;
	
    h1.inputdata(101,"The Grand Bhagvati","hotel",50,150,2001,"surat","5star","TGB.com");
	h1.outputdata();
}
