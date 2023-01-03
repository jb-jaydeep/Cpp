#include<iostream>
using namespace std;
/*1) Create following marksheet using Unary Operator Overloading and Binary Operator Overloading

class                -> Result
attributes        -> sub
setter               -> sci

objects            -> math, sci, eng, guj, ss, com

Ex. : 
input :
                            sci : 85
output :
                            sci  : 85
                            math : 82
                            eng  : 84
                            guj  : 86
                            ss   : 83
                            com  : 87
                            total   : [according your marks]
                            per     : [according total and num of subjects]
                            grade : [according per]*/
                            
class Result{
	
	double sci,tempsci,persci, math, eng, guj, ss, com, total, per;
	
	public :
	void setdata(){
		
		cout << "Enter Sci Marks :";
		cin  >> sci;
	    system("cls");
	}
		
	void getdata(){
	
			cout <<" Science marks        : " << sci << endl;
			tempsci = persci = sci;
	}
	

			Result operator++(){
			 Result tmp;
		 	tmp.math= --sci;
			tmp.math= --sci;
			tmp.math= --sci;
			
			cout <<" maths marks          : " << tmp.math << endl;
			
			tmp.eng = --tempsci;
			
			cout <<" English marks        : " << tmp.eng << endl;
			
            tmp.guj = ++tempsci;
            tmp.guj = ++tempsci;
            
        	cout <<" Gujarati marks       : " << tmp.guj << endl;
        	
            tmp.ss = --tempsci;
            tmp.ss = --tempsci;
            tmp.ss = --tempsci;
            
       	    cout <<" Social Sci marks     : " << tmp.ss << endl;
       	    
            tmp.com = ++tempsci;
            tmp.com = ++tempsci;
		    tmp.com = ++tempsci;
		    tmp.com = ++tempsci;
		    
		    cout <<" Computer marks       : " << tmp.com << endl;
		    
			total = persci +tmp.math + tmp.eng + tmp.guj + tmp.ss + tmp.com;
			
            per = total / 6;
			
			cout <<"========================================"<<endl;
			cout <<" Total marks          :" << total << endl;
			cout <<" Percentage           :" << per << endl;
			cout <<"========================================"<<endl;
			
			 if(per>90 && per<=100) {

            	cout << " Grade                : A+" << endl;
               
            }else if(per>80 && per<=90) {

                cout << " Grade                : A" << endl;
                
            }else if(per>70 && per<=80) {

                cout << " Grade                : B" << endl;
                
            } else if(per>60 && per<=70) {

                cout << " Grade                : C" << endl;
                
            } else if(per>50 && per<=60) {

                cout << " Grade                : D" << endl;
                
            } else if(per>33.33 && per<=50) {

                cout << " Grade                : E" << endl;
                
            }else{
            	  
            	 cout << " Sorry You Are Failed...." << endl;
			}
		
	}	
};

int main(){
	Result sci,com;
	sci.setdata();
	sci.getdata();

	com = ++sci;
}
