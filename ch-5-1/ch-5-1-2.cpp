#include<iostream>
using namespace std;

class Cust {
	
	private :
		int cid;
		string cname;
		int cage;
		string ctbn;
		string cmn;
		string cc;
		string csv;
		
	public :
			void inputdata(int i,int n){
			
			system("cls");	
			cout << "Customer No. "<< i << " of " << n << endl;
			
			cout << "Enter a customer Id\t\t\t:";
			cin  >> cid;
			
			cout << "Enter a customer Name\t\t\t:";
			cin  >> cname;
			
			cout << "Enter a customer Age\t\t\t:";
			cin  >> cage;
			
			cout << "Enter a customer telecom brand name\t:";
			cin  >> ctbn;
			
			cout << "Enter a customer mobile no\t\t:";
			cin  >> cmn;
			
			cout << "Enter a customer City\t\t\t:";
			cin  >> cc;
			
			cout << "Enter a customer simcard validity\t:";
			cin  >> csv;
		}
		
		static void header(){
			system("cls");
			cout <<"ID\tNAME\tAGE\tBRAND\tMO.NUMBER\tCITY\tSIMCARD VALIDITY\n======= ======= ======= ======= =============== ======= ================\n";
		}
		void outputdata(){
			
				cout  << cid << "\t"<< cname << "\t" 
			      << cage << "\t" <<  ctbn 
				  <<"\t" <<cmn << "\t" << cc
				   << "\t" << csv << endl;
		}
			
	};
	
	int main(){
		int i,n=5;
		Cust s[n];
		
		for(i=0;i<n;i++)
			s[i].inputdata(i+1,n);
			
		Cust::header();
		for(i=0;i<n;i++)
			s[i].outputdata();		
	}
