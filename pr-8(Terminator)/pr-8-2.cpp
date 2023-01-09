#include<iostream>
using namespace std;

class Division {
	double a,b;
	public :
		
		void div(){
		
		if(b==0){
			
			throw b;
				
		}else{
			
			cout <<" Answer : " << a/b << endl;
		}
	}
		void setdata(){
			
			cout <<" Enter A : ";
			cin  >> a; 
			
			cout <<" Enter B : ";
			cin  >> b; 
		}
		
		void getdivision(){
			try {
				div();
			}
					
		catch(int b){
				
				cout <<" Can not divided by " <<(double) b << endl;
			}	
		
		catch(...){
			
				cout <<" Can not divided by charcter,or special symbols..." << endl;
		}
	}
};

int main(){
	
	Division d;
	d.setdata();
	d.getdivision();
}
