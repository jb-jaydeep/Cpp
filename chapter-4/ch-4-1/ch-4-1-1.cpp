#include<iostream>
using namespace std;

class Student {
	
	private :
		int stuid;
		string stuname;
		int stuage;
		string stucourse;
		string stuemail;
		string stucity;
		string stucollege;
		
		
	public :
			void inputdata(int i,int n){
			
			system("cls");	
			cout << "Student No. "<< i << " of " << n << endl;
			
			cout << "Enter a Student Id\t:";
			cin  >> stuid;
			
			cout << "Enter a Student Name\t:";
			cin  >> stuname;
			
			cout << "Enter a Student Age\t:";
			cin  >> stuage;
			
			cout << "Enter a Student Course\t:";
			cin  >> stucourse;
			
			cout << "Enter a Student Email\t:";
			cin  >> stuemail;
			
			cout << "Enter a Student City\t:";
			cin  >> stucity;
			
			cout << "Enter a Student College\t:";
			cin  >> stucollege;
		}
		
		static void header(){
			system("cls");
			cout <<"ID\tNAME\tAGE\tCOURSE\tCITY\tCOLLAGE\tEMAIL\n======= ======= ======= ======= ======= ======= =======\n";
		}
		void outputdata(){
			
				cout  << stuid << "\t"<< stuname << "\t" 
			      << stuage << "\t" << stucourse 
				  << "\t" << stucity << "\t" << stucollege
				   << "\t" << stuemail << endl;
		}
			
	};
	
	int main(){
		int i,n=5;
		Student s[n];
		
		for(i=0;i<n;i++)
			s[i].inputdata(i+1,n);
			
		Student::header();
		for(i=0;i<n;i++)
			s[i].outputdata();		
	}
