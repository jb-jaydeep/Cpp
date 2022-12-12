#include<iostream>
using namespace std;

class CarJb{
	private :
	int carid;
	string carcolour;
	string carmodel;
	int carryear;
	string carcname;
	
	public :
		void setdata(){
			
			cout<<"Enter your Car Company Name :";
			cin >>carcname;
			cout<<"Enter your Car ID number :";
			cin >>carid;
			cout<<"Enter your Car Colour :";
			cin >>carcolour;
			cout<<"Enter your Car Model :";
			cin >>carmodel;
			cout<<"Enter your Car's Release Year :";
			cin >>carryear;
			cout<<endl<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl
				<<"_____________________________________________"<<endl;
			
			
		}
		void getdata(){
			cout<<"Car Company Name\t: "<<carcname<<endl
				<<"Car ID Number\t\t: "<<carid<<endl
				<<"Car Colour\t\t: "<<carcolour<<endl
				<<"Car Model\t\t: "<<carmodel<<endl
				<<"Car Release Year\t: "<<carryear<<endl<<endl;	
		} 
};

int main(){
	 CarJb s1,s2,s3,s4;
	s1.setdata();
    s2.setdata();
	s3.setdata();
	s4.setdata();
	
	s1.getdata();
	s2.getdata();
	s3.getdata();
	s4.getdata();
	
}
