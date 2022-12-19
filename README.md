# <Center> **C++** </center>
***
> **CHAPTER - 1**

> **INTRODUCTION TO C++.**
***
- **HISTORY OF C++.**

    **POP -** Procedurel Oriented Programming.

    **OOP -** Object Oriented Programming.

    Bjarne Stroustrup - P.H.D. in OOP.

   In 1980 - C with objects.

    In 1980 - C++.

- **DIFFERENCE BETWEEN C & C++.**

        #include<iostream>
        using namespace std;

        int main()
        {
            cout << "Hello World";
        }

- **BASIC PROGRAM STRUCTURE OF C++ IN DEV-C++.**

- **USING NAMESPACE STD.**
- **COUT & CIN OBJECTS.**
***
> **CHAPTER - 2**

> **EXPRESSION AND FUNCTIOS.**
***
- **SPECIAL ASSIGNMENT EXPRESSIONS.**

  **TYPE OF SPECIAL ASSIGNMENT EXPRESSIONS.**
   
   **1. Chained expressions.**
            
            #include<iostream>
            using namespace std;
            int main(){
               //chained.
                int a,b,c; 
                a=b=c=15;
                cout << "a :"<< endl
                     << "b :"<< endl
                     << "c :"<< endl;
            }
   **2. Embeded expressions.**

          #include<iostream>
            using namespace std;
            int main(){
               //Embeded.
                int a=10,b,c,d; 
                d=a+(b=5)+(c+15);
                cout << "d :"<< endl
            }
   **3. Compound assign expressions.**

   It's means combined or assignments operator.(+= , -= , *= , /= , %=) 
      
- **REFERENCE VARIABLES.**
    
    Upgraded Pointer.
    Using address of operator(&).
    Reference variable must be initilized.

- **FUNCTION PROTOTYPING.**

   It's means pre declaration.
   
- **INLINE KEYWORD.**

    It boosts performance speed by exchanging function's body while calling.
***
> **CHAPTER - 3**

> **OOP CONCEPTS.**
***
- **WHAT IS OOP ?**

   It is a concept in ehich code becomes well structurized, well organized and increase it's reusability.

   Every process will be done using object.

   The complete code will be depends on object.

   All the logic must be write in class.

   In main function only calling of class.

- **4 PRINCIPLES OF OOP.**

    **1. Encapsulation.**

     To combine all data members and data member method in calss it's calld a encapulation.

     Setter.

     Getter.

     Constructor.

     Destructor.

     static attributes and methods.

    **2. Inheritance.**

    Share data from one class to another class it's called a inheritance.

     - **Type of inheritance.**

       **1. simple.**
       
       **2. Multiple.**
       
       **3. Multilevel.**
       
       **4. Hierarchical.**
       
       **5. Hybrid.**
       
       **6. Ambiguity.**

    **3. Polymorphism.**

     To use of function in multiple way.

     - **Type of polymorphism.**

       **1. Compile time.**
               
         - Method overloading.
         - Operator overloading.
         
       **2. Run time.**
       
         - Method overriding.
         - Virtual function.

    **4. Data abstraction.**

     To ristrict.


 - **Access modifier.** 
                
     - Public.
     - Private.
     - Protected.
     - Abstract class.

        - Pure virtual function.

 - **Class & Object.** 

    - **Class :**

        Combination of data members & data member functions.

        Blue print of any process.

        **Syntex :** 
             
             class ClassName {

                //access modifier :
                //data members;
                //data member function;
                //constructor;
                //distructor;
             };

     - **Object :**

        Variable / reference of class.
***
> **CHAPTER - 5**

> **DATA ENCAPSULATION.**
***
> **5.1**
***
- **WHAT IS DATA ENCAPSULATION.**

    To wrap the code into reusable methods of class, convert UDFs into data member function and convert variables into data members is called encapsulation.

    Wrap every logic into the class.

- **SETTER.**

    A method to take input of all or specific attributes.

- **GETTER.**

    A method to take output of all or specific attributes.

- **THIS KEYWORD.**

    It differenciate the class level variables from function level variables.

- **PRIVATE ATTRIBUTES.**

- **NESTED MEMBER FUNCTION.**

    Call a one function to another one function it's called a nested member function.
***
> **5.2**
***
- **ARRAY OF OBJECTS.**
- **WHAT IS STATIC MEMBER?**
- **STATIC KEYWORD.**
- **STATIC DATA MEMBER.**
- **STATIC MEMBER FUNCTION.**
- **SCOPE RESOLUTION OPERATOR.**

    **::** - scope resolution operator.

        **program to know 5.2**

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
            //SETTER

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
		
		static void header(){    // STATIC FUNCTION
			system("cls");
			cout <<"ID\tNAME\tAGE\tBRAND\tMO.NUMBER\tCITY\tSIMCARD VALIDITY\n"
			     <<"======= ======= ======= ======= =============== ======= ================\n";
		}
        //GETTER
		void outputdata(){
			
				cout  << cid << "\t"<< cname << "\t" 
			      << cage << "\t" <<  ctbn 
				  <<"\t" <<cmn << "\t" << cc
				   << "\t" << csv << endl;
		}
			
	    };
	
	    int main(){
		int i,n=5;
		Cust s[n];    //ARRAY OF OBJECT
		
		for(i=0;i<n;i++)
			s[i].inputdata(i+1,n);
			
		Cust::header();      // CALLING OF STATIC FUNCTION.
		for(i=0;i<n;i++)
			s[i].outputdata();		
	    }

