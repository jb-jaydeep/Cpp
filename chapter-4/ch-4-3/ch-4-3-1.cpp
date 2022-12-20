#include<iostream>
using namespace std;

class Time2;
class Time1 {
	
	public :
		
		int hr;
		int min;
		int sec;
	
	
	public :
		
		void getData() {
			
			cout << "Enter a hour\t\t: ";
			cin  >> hr;
			cout << "Enter The Minutes\t: ";
			cin  >> min;
			cout << "Enter The Seconds\t: ";
			cin  >> sec;
			
		}
		
		friend void Sumtime(Time1,Time2);
};

class Time2 {
	
	public  :
		
		int hr;
		int min;
		int sec;
	
	public :
		
		void getData() {
			
			cout << endl << "------------------------------------------"<< endl;
			cout << "Enter The Hour\t\t: ";
			cin  >> hr;
			cout << "Enter The Minutes\t: ";
			cin  >> min;
			cout << "Enter The Seconds\t: ";
			cin  >> sec;
		}
		
		
		friend void Sumtime(Time1 , Time2);
			
		};

void Sumtime(Time1 t1, Time2 t2) {
	
		int hour,minute,second,times,mtime;
	
	second = t1.sec + t2.sec;
		    hour  = t1.hr  + t2.hr;
			minute = t1.min + t2.min;	
			
			if(second>=60){
				times = second/60;
				second = second % 60;
				minute += times;
			}
			
			if(minute>=60) {
		
				mtime = minute/60;
				minute   = minute % 60;
				hour  += mtime;
			}
			cout  <<endl <<"------------------------------------------";	
			cout  << endl <<"your time after add both times : "<< endl
			      << "hours" << " : " << "minute" << ":"<< "second" << endl
				  << hour << " : " << minute << ":"<< second << endl;
			cout  << "------------------------------------------";
}

int main() {
	
	Time1 t1;
	Time2 t2;
	
	t1.getData();
	t2.getData();

	Sumtime(t1 , t2);
}
