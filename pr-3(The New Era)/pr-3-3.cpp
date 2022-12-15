// WAP to create class to read time in seconds and convert into time in (HH:MM:SS) format.

#include<iostream>
using namespace std;

class Time {
	
	private :
		
		int hr, min, sec;
		
	public :
		
		void inputdata() {
			
			cout << "Enter a Second :";
			cin  >> sec;
		}
		
		void outputdata() {
			
			if(sec>=3600) {
				
				hr = sec / 3600;
			}
			
			
			
			if(sec % 3600 == 0) {
				
				min = 0;
				sec = 0;
			}
			
			
			if(sec>=60) {
				
				min = sec / 60;
			}
			
			sec %= 60;
			min %= 60;
			cout <<"hours"<< "\t:" << "minute" << "\t:" << "second" << endl;
			cout << hr<<"\t:"<<min<<"\t:"<<sec<<endl;
		}
};

int main() {
	
	Time t;
	
	t.inputdata();
	t.outputdata();
	
}


