//  WAP to create a class to read and add two times.

#include<iostream>
using namespace std;

class Time {
	
	private :
		
	int fsec,ssec,fmin,smin,fhr,shr,hr,sec,min,times,mtime;
		
	public :
		
		void inputdata() {
			
			cout << "Enter your first time in HH:MM:SS format using between space :";
			cin  >> fhr >> fmin >> fsec;
			cout << "Enter your first time in HH:MM:SS format using between space :";
			cin  >> shr >> smin >> ssec;
		}
		
		void outputdata() {
			
			sec = fsec + ssec;
		    hr  = fhr  + shr;
			min = fmin + smin;	
			
			if(sec>=60){
				times = sec/60;
				sec = sec % 60;
				min += times;
			}
			
			if(min>=60) {
		
				mtime = min/60;
				min   = min % 60;
				hr  += mtime;
			}
				
			cout <<"your time after add both times : "<< endl
			      << "hours" << " : " << "minute" << ":"<< "second" << endl
				  << hr << " : " << min << ":"<< sec << endl;
			
		}
};

int main() {
	
	Time t1;
	t1.inputdata();
	t1.outputdata();
}

