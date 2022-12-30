#include<iostream>
using namespace std;

/*WAP which takes input of 5 subject names in constructor, 
takes input of marks for each subject in setter generates per
 and grade in method named proceedMarks() and prints result in destructor.*/
 
 class Stu {
 	
 	private : 
 	string sn1;
 	string sn2;
 	string sn3;
 	string sn4;
 	string sn5;
 	double m1,m2,m3,m4,m5,smarks=0,per;
 	int marks=500;
 	char g;
 	public : 
 	
 	Stu(){
 		
 		cout << "Enter Subject 1 :" << sn1;
 		cin  >> sn1;
 		cout << "Enter Subject 2 :" << sn2;
 		cin  >> sn2;
 		cout << "Enter Subject 3 :" << sn3;
 		cin  >> sn3;
 		cout << "Enter Subject 4 :" << sn4;
 		cin  >> sn4;
 		cout << "Enter Subject 5 :" << sn5;
 		cin  >> sn5;
	 }
	 void getdata (){
	 	
	 	cout << "Enter "<<sn1<<" Subject marks out of 100 : ";
	 	cin  >> m1;
	 	cout << "Enter "<<sn2<<" Subject marks out of 100 : ";
	 	cin  >> m2;
	 	cout << "Enter "<<sn3<<" Subject marks out of 100 : ";
	 	cin  >> m3;
	 	cout << "Enter "<<sn4<<" Subject marks out of 100 : ";
	 	cin  >> m4;
	 	cout << "Enter "<<sn5<<" Subject marks out of 100 : ";
	 	cin  >> m5;
	 }
	 
	 void proceedMarks(){
	 	
	 	smarks = m1+m2+m3+m4+m5;
	 	
	 	cout << "Your total mark of all subject : "<<smarks;
	 	
	 	per = (smarks*100)/marks;
	 	
	 	cout <<endl << "Your Percentage : " <<per;
	 	 
		 if(per>90 && per<=100)
		 {
	 		
	 	   g='A';
		 }
		else if(per>80 && per<=90)
		 {
	 		
	 		g='B';
		 }
		 else if(per>70 && per<=80)
		 {
	 		
	 		g='C';
		 }
		 else if(per>50 && per<=70)
		 {
	 		
	 		g='D';
		 }
		 else if(per>33.33 && per<=50)
		 {
	 		
	 		g='E';
		 }
		 else
		 {
		 	g='F';
		 }
	 }
	 ~ Stu()
	 {
		system("cls");
	 	cout << endl << endl;
	 	cout << "====================================" << endl;
	 	cout << "\t\tRESULT"<<endl;
	 	cout << "====================================" << endl;
	 	cout << " SUBJECT\t" << "MARKS" <<endl
	 		 << "------------------------------------" << endl
	 		 << sn1<<"\t\t:"<<m1<<endl
	 		 << sn2<<"\t\t:"<<m2<<endl
	 		 << sn3<<"\t\t:"<<m3<<endl
	 		 << sn4<<"\t\t:"<<m4<<endl
	 		 << sn5<<"\t\t:"<<m5<<endl
	 		 << endl
	 		 << "------------------------------------" << endl
	 		 << "Total Marks of All Subject : 500"<<endl
	 		 << "Your Marks Total           : " << smarks<<endl
	 		 << "PERCENTAGE                 : "<< per << endl
	 		 << "GRADE                      : " << g <<endl
	 		<< "=====================================" << endl;
	 		 
	 }
 };
 
 int main(){
 	Stu s1;
 	s1.getdata();
 	s1.proceedMarks();
 }
