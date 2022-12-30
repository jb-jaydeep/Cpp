#include<iostream>
using namespace std;

/*WAP to illustrate the use of static member by calculating totalFees of all stud objects.*/
	
class Student {
	
	private : 
	string name;
	double fee;
	static double totalfees;
	
	public :
		void setdata(int i, int n){
			system("cls");
			cout << "student no. "<< i << " of " << n <<endl;
			cout << "Enter your name :";
			cin  >> name;
			cout << "Enter your Fees :";
			cin  >> fee;
			totalfees += fee;
			
		}
		static void header (){
			
		cout <<"========================================"<<endl
			 << "Name"<< "\t" <<"FEE"<<endl
			 <<"-------\t"<<"-------"<<endl;
		}
		void getdata(){
			
			cout << name <<"\t"<< fee << endl;
				
		}
		static void gettotalfees(){
			cout <<"========================================"<<endl
				 << "TOTAL FEES OF ALL STUDENTS :" << totalfees << endl
				 <<"========================================"<<endl;
		}
};
double Student :: totalfees = 0;

int main(){
	int i,n;

	cout << "Enter no. of student : ";
	cin  >> n;
	
	Student s[n];
	
	for (i=0;i<n;i++)	
	s[i].setdata(i+1,n);
	
	system("cls");
	Student :: header();
	for (i=0;i<n;i++)
	s[i].getdata();
	

	Student :: gettotalfees();
}
