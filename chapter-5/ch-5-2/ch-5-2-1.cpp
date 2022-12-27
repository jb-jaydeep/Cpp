#include<iostream>
using namespace std;

class RBI {
	
	protected :
		
		double rate;
	
	public :
		
		void inputdataRBI() {
			
			cout << "=============================================" << endl;
			cout << " WELCOME TO RESERVE BANK OF INDIA" << endl;
			cout << "=============================================" << endl;
			cout << " Enter a bank Rate(%) : ";
			cin  >> rate;
			cout << "=============================================" << endl;
		}
};

class SBI : public RBI {
	
	private :
		
		double investAmount;
		double interest;
		
	public :
		
		void inputdataSBI() {
		
			cout << "=============================================" << endl;
			cout << endl << " WELCOME TO STATE BANK OF INDIA " << endl;
			cout << "=============================================" << endl;	
			cout << "Enter invest Amount : ";
			cin  >> investAmount;
			cout << "=============================================" << endl;
		}
		
		void outputdataSBI() {
			
			interest = investAmount * rate / 100;
			
			cout << "=============================================================================" << endl;
			cout << endl << " \t\t\tSTATE BANK OF INDIA " << endl; 
			cout << "=============================================================================" << endl;
			cout << endl << " Your Bank Invest Amount : " << investAmount << " & " << "Rate of Interest : " << rate << endl;
			cout << "=============================================================================" << endl;
			cout << endl << " Return on investment of STATE BANK OF INDIA : " << interest << endl;
			cout << "=============================================================================" << endl;
		}
};


class BOB : public RBI {
	
	private :
		
		double investAmount;
		double interest;
		
	public :
		
		void inputdataBOB() {
		
			cout << "=============================================" << endl;	
			cout << endl << "WELCOME TO BANK OD BARODA " << endl << endl;
			cout << "=============================================" << endl;	
			cout << "Enter The Your Bank Invest Amount : ";
			cin  >> investAmount;
			cout << "=============================================" << endl;
		}
		
		void outputdataBOB() {
			
			interest = investAmount * rate / 100;
			cout << "=============================================================================" << endl;	
			cout << endl << " \t\t\tBANK OF BARODA " << endl; 
			cout << "=============================================================================" << endl;
			cout << endl << " Your Bank Invest Amount : " << investAmount << " & " << "Rate of Interest : " << rate << endl;
			cout << "=============================================================================" << endl;
			cout << endl << " Return on investment of Bank Of Baroda : " << interest << endl;
			cout << "=============================================================================" << endl;
		}
};

class ICICI : public RBI {
	
	private :
		
		double investAmount;
		double interest;
		
	public :
		
		void inputdataICICI() {
			cout << "=============================================================================" << endl;
			cout << endl << " WELCOME TO  INDUSTRIAL CREDIT INVESTMENT CORPORATION  OF INDIA " << endl;
			cout << "=============================================================================" << endl;	
			cout << " Enter Your Bank Invest Amount : ";
			cin  >> investAmount;
			cout << "=============================================================================" << endl;
			system("cls");
		}
		
		void outputdataICICI() {
			
		interest = investAmount * rate / 100;
		
			cout << "=====================================================================================" << endl;
			cout << endl << "\t INDUSTRIAL CREDIT INVESTMENT CORPORATION OF INDIA " << endl; 
			cout << "=====================================================================================" << endl;
			cout << endl << " Your Bank Invest Amount : " << investAmount << " & " << "Rate of Interest : " << rate << endl;
			cout << "=====================================================================================" << endl;
			cout << endl << " Return on investment of INDUSTRIAL CREDIT INVESTMENT CORPORATION  OF INDIA : " << interest << endl;
			cout << "=====================================================================================" << endl;
		}
};

int main() {
	
	SBI s;
	BOB b;
	ICICI i;
	 
	s.inputdataRBI();
	s.inputdataSBI();
	
	
	b.inputdataRBI();
	b.inputdataBOB();

	
	i.inputdataRBI();
	i.inputdataICICI();
	
	
	s.outputdataSBI();
	b.outputdataBOB();
	i.outputdataICICI();
}
