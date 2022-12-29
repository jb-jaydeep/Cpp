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

	| **TOPIC**       |      **C**      |      **C++**      |
	| :---         |     :---:      |          ---: |
	| **FILE EXTENSION**   | .C     | .CPP    |
	| **RETURN TYPE**    | void       | int      |
	| **OUTPUT**    | printf       | cout     |
	| **INPUT**    | scanf       | cin     |

- **BASIC PROGRAM STRUCTURE OF C++ IN DEV-C++.**

	  #include<iostream>
	  using namespace std;

         int main()
      	 {
            cout << "Hello World";
      	 }

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
> **CHAPTER - 4**

> **DATA ENCAPSULATION.**
***
> **4.1**
***
- **WHAT IS DATA ENCAPSULATION?**

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
> **4.2**
***
- **ARRAY OF OBJECTS.**
- **WHAT IS STATIC MEMBER?**

	Common member for all objects which takes the single memory allocation.
	
	For all the objects, static member will common and only one.

 - **TYPES OF STATIC MEMBER.**
 
  	- **STATIC DATA MEMBER.**
	- **STATIC MEMBER FUNCTION.**
	
	  We can only use static data members in static function, any other attributes won't be allowed. 
	
- **STATIC KEYWORD.**
- **SCOPE RESOLUTION OPERATOR.**

    **::** - scope resolution operator.

        program to know 4.2

       #include<iostream>
       using namespace std;
       ostream &t(ostream & output){
       return output << "\t";
       }
       class Hotel {
	
		private :
		int id;
		string type;
		string rating;
		string year;
		int staff;
		int room;
		// Static member declaration.
		static string name;
		static string location;
		public :
		void input(int i, int a) {
			system("cls");
			cout << endl << endl << "enter a hotel data "<< i << " of "<< a << endl;
			cout << "Enter a hotel Id\t: ";
			cin  >> id;
			cout << "Enter a hotel type (like hotel or motel)\t: ";
			cin  >> type;
			cout << "Enter a hotel rating (like 1 Star, 2 Start, ..., 7 Star)\t: ";
			cin  >> rating;
			cout << "Enter a hotel establish year\t: ";
			cin  >> year;
			cout << "Enter a hotel staff quantity\t: ";
			cin  >> staff;
			cout << "Enter a hotel room quantity\t: ";
			cin  >> room; 
		}
		
		void output(){
				cout << id << t  << type << t  << rating << t
			         << year << t  <<staff << t 
			     << room <<t << location << endl;
			    
		}
		
		// static member function
		static void header(){
				system("cls");
				cout << t<<t<<name << endl;
				cout << "Id\tType\tRating\tYear\tStaff\tRooms\tlocation\n"
				      <<"=======\t=======\t=======\t=======\t=======\t=======\t=======\n";
   		}
		
           };

                string Hotel::name = "The Grand Bhagvati- TGB"; //Assign value of static member 
                string Hotel::location = "Surat";               //Assign value of static member 
		
                int main() {
	
	        int a;
	
	        cout << "Enter the number of hotel : ";
	        cin  >> a;
	
	        Hotel H[a];  //Array of object.

	
	        for(int i=0; i<a; i++) 	H[i].input(i+1,a);
	
	        Hotel::header(); // static function calling.
	
	        for(int i=0; i<a; i++) 	H[i].output();

           }

***
> **4.3**
***
- **WHAT IS FRIEND FUNCTION?**

	It is mainly used to access private attributes.
	We have to declare friend function in class's body.
	It must be defined ( crack body) in global area.
	
		Syntex :
		
		class fooclass {
			public : 
			   .
			   .
			   .
			   //only declaration in class 
			   friend void foo();
		  };
		  
		  // defination in global area
		  void foo () {
		       //body
		       
		    }
		}
	- **TYPE OF FRIEND FUNCTION :**
		- Default.
		- Parameterized.
		
- **FRIEND KEYWORD.**
- **IMPLEMENT: FRIEND FUNCTION FOR ONE AND TWO CLASSES.**

		program to learn friend function......
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
		
***
> **4.4**
***
- **WHAT IS CONSTRUCTOR?**

	Constructor is a block of code which is automatically invoked when class is instantiated.
	
	- **RULES TO CREATE CONSTRUCTOR.**
		- It's name must be same as class's name.
		- It must not have any return data type.(void,int,char.)
		- It must not return any value.
		
- **TYPE OF CONSTRUCTOR.**

	-**DEFAULT**
		
		//program.....
		#include<iostream>
		using namespace std;
		
		class Hotel {
		private : 
			int id;
		public :
		//Default Constructor..
		Hotel () {
			cout << "Welcome to the TGB"<< endl 
			cout << "Enter your ID NO. : ";
			cin  << id;
		
			cout << "Your id is :" << id << endl;
		}
		};
		int main() {
			Hotel h;
		}
		
	-**PARAMETERIZED**
		
		//program.....
		#include<iostream>
		using namespace std;
		
		class Hotel {
		private : 
			int id;
			string name;
		public :
		// Parameterized Constructor..
		Hotel (int id, string name) {
		
			this -> id = id;
			this -> name = name;
		
		cout << "Your id is :" << id << endl
		     << "Name :" << name << endl;
		}
		};
		int main() {
		Hotel h(101,"Jaydeep");
		}
	
	
	-**COPY**
		
	-**IMPLICIT(DIRECTLY)**
		
				//program.....
				#include<iostream>
				using namespace std;
				private :
				int id;
				string name;

				public :

				Hotel () {
				cout << "Welcome to the TGB"<< endl;
				cout << "Enter your ID NO. : ";
				cin  << id;
				cout << "Your id is :" << id << endl;

				}

				Hotel (int id, string name) {
				this -> id = id;
				this -> name = name;

				cout << "Your id is :" << id << endl
				     << "Name :" << name << endl;
				}
				};

				int main() {

				Hotel h(101,"Jaydeep");
				Hotel h1(102,"Jay")
				Hotel h2(103,"Deep")
				Hotel h3 = h1; // Implicit copy constructor.

			  }
			  
	-**EXPLICIT(FORCEFULLY)**

				//program.....
				#include<iostream>
				using namespace std;
				class Hotel {
				private : 
				int id;
				string name;
				public :
				Hotel () {
				cout << "Welcome to the TGB"<< endl 
				cout << "Enter your ID NO. : ";
				cin  << id;
				cout << "Your id is :" << id << endl;
			    }

				Hotel (int id, string name) {

						this -> id = id;
						this -> name = name;

						cout << "Your id is :" << id << endl
						      << "Name :" << name << endl;
				}
				//Explicit copy constructor...
				Hotel (Hotel &h) {

						h.id = id;
						h.name = name;

						cout << "Your id is :" << id << endl
						     << "Name :" << name << endl;
				}
				};

					int main() {

					Hotel h;
					Hotel h1(101,"Jaydeep");
					Hotel h2(102,"Jay")
					Hotel h3(103,"Deep")
					Hotel h4 = h1; // Implicit copy constructor.
					Hotel hs(h2); // Explicit copy constructor.
				}
																				
		
- **WHAT IS DESTRUCTOR?**

	A block of code which is automatically invoked when object is destroyed or deleted.
	
	- **RULES TO CREATE DISTRUCTOR.**
	
		- It's name must be same as class's name & start with tild operator(~).
		- It must not have any return data type.(void,int,char.)
		- It must not return any value.
		- Destructor can't have any parameters.
		
- **PROGRAM FOR DESTRUCTOR.**
		
		#include<iostream>
		using namespace std;
		/*   WAP to demonstrate example of destructors.  */

		class JB {
		public :
		~JB() {
			cout << "--------------------------------" << endl
			     << " Thank you for visit............" << endl
			     << "--------------------------------" << endl; 	
		}
		};

		int main() {
		JB j;
		}
		
***
> **CHAPTER - 5**

> **INHERITANCE.**
***
> **5.1**
> **5.2**
***
- **WHAT IS HERITANCE?**
	- Share attributes and methods from one class to another class.
- **TYPES OF HERITANCE.**
	- Single level.
	- Multi level.
	- Multiple.
	- Hierarchical.
	- Hybrid.
	
  - **Diagram of single level heritance.**
  
  	Here A & B is a class.
	
     ```mermaid
     graph TB;
   	 A-->B;
     ```
     Minimum no. of class required : 2
     
     Maximum no. of class required : 2
     
 - **Diagram of multi level heritance.**
 
 	Here A, B & C is a class.
	
     ```mermaid
     graph TB;
   	 A-->B;
	 B-->C;
     ```
     Minimum no. of class required : 3
     
     Maximum no. of class required : n
     
- **Diagram of multiple heritance.**

	Here A, B & C is a class.
	
     ```mermaid
     graph TB;
   	 A-->C;
	 B-->C;
     ```
     Minimum no. of parent class required : 2
     
     maximum no. of child class required : 1
     
- **Diagram of hierarchical heritance.**

	Here A, B & C is a class.
	
     ```mermaid
     graph TB;
   	 A-->B;
	 A-->C;
     ```
     Maximum no. of parent class required : 1
     
     minimum no. of child class required : 2
     
- **Diagram of hybrid heritance.**

	Here A, B, C, D & E is a class.
	
	- **Diagram-1**
	
     ```mermaid
     graph TD;
   	 A-->B;
	 A-->C;
	 B-->D;
	 C-->D;
     ```
     
     - **Diagram-2**
	
     ```mermaid
     graph TD;
   	 A-->B;
	 A-->D;
	 B-->c;
     ```
     
 	- **Diagram-3**
	
     ```mermaid
     graph TD;
   	 A-->B;
	 A-->E;
	 B-->C;
	 B-->D;
     ```
     
     Maximum no. of parent class required : n
     
     maximum no. of child class required : n
     
> **Program to know  simple level heritance.**

		#include<iostream>
		using namespace std;

		class X {
	
			protected :
			
			int a;
			int b;
			int c;
			int sum=0;
		};

		class Y : public X{

			public:
			
			void inputdata(){
			
			cout << " Enter a :";
			cin  >> a;
			cout << " Enter b :";
			cin  >> b;
			cout << " Enter c :";
			cin  >> c;
			sum = (a*a*a) + (b*b*b) + (c*c*c);
		}
		
			void outputdata(){
			
			cout << "===================================="<< endl;
			cout << "cube of A : "<< a*a*a << endl;
			cout << "cube of B : "<< b*b*b << endl;
			cout << "cube of C : "<< c*c*c << endl;
			cout << "===================================="<< endl;
			cout << " sum of cube of A,B,C : " << sum << endl;
			cout << "===================================="<< endl;
			
		}
		};

		int main(){
		
		Y y1;
		y1.inputdata();
		y1.outputdata();
		}
		
> **Program to know  multi level heritance.**

		
		#include<iostream>
		using namespace std;

		class X {
	
			protected :
			
			int a;
			
			public :
			void setdataZ(){
				cout << "Enter a:";
				cin  << a;
			}
			void getdataZ(){
				cout << "A : " << a << endl;
			}
			
		};

		class Y : public X{

			protected :
			
			int b;
			
			public :
			void setdataY(){
				cout << "Enter b:";
				cin  << b;
			}
			void getdataY(){
				cout << "B : " << b << endl;
			}
		};
		
		class Z : public Y{

			protected :
			
			int c;
			
			public :
			void setdataZ(){
				cout << "Enter c:";
				cin  << c;
			}
			void getdataZ(){
				cout << "C : " << c << endl;
			}
		};

		int main(){
		
		Z z1;
		z1.setdataX();
		z1.setdataY();
		z1.setdataZ();
		
		z1.getdataX();
		z1.getdataY();
		z1.getdataZ();
		}
		
> **Program to know  multiple heritance.**

		
		#include<iostream>
		using namespace std;

		class X {
	
			protected :
			
			int a;
			
			public :
			void setdataZ(){
				cout << "Enter a:";
				cin  << a;
			}
			void getdataZ(){
				cout << "A : " << a << endl;
			}
			
		};

		class Y {

			protected :
			
			int b;
			
			public :
			void setdataY(){
				cout << "Enter b:";
				cin  << b;
			}
			void getdataY(){
				cout << "B : " << b << endl;
			}
		};
		
		class Z : public X, public Y{

			protected :
			
			int c;
			
			public :
			void setdataZ(){
				cout << "Enter c:";
				cin  << c;
			}
			void getdataZ(){
				cout << "C : " << c << endl;
			}
		};

		int main(){
		
		Z z1;
		z1.setdataX();
		z1.setdataY();
		z1.setdataZ();
		
		z1.getdataX();
		z1.getdataY();
		z1.getdataZ();
		}

> **Program to know  Hierarchical heritance.**

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

> **Program to know  multiple heritance**

		#include<iostream>
		using namespace std;

		class Personaldetail {
	
		protected :
		
		string name;
		double age;
		string email;
		long long int contact;
	
		public : 
	
		Personaldetail() {
		
			cout << "Enter your name              :";
			cin  >> name;
			cout << "Enter your Age               :";
			cin  >> age;
			cout << "Enter your Email             :";
			cin  >> email;
			cout << "Enter your Contact No.       :";
			cin  >> contact;
		}
		};
		class Companydetail {
	
		protected :
		
		double experience;
		string role;
		double salary;
		string cname;
		
		public : 
	
		Companydetail() {
		
			cout << "Enter your Experience        :";
			cin  >>  experience;
			cout << "Enter your Role              :";
			cin  >> role;
			cout << "Enter your Salary            :";
			cin  >> salary;
			cout << "Enter your Company Name      :";
			cin  >> cname;
		}
	
		};

		class Emp :public Personaldetail , public Companydetail {

		public :
		Emp():Companydetail(),Personaldetail()
		{
			cout << "Comapny Name" << "\t"
				 << "Name" << "\t"
				 << "Role" << "\t"
				 << "Salary" << "\t"
				 << "Exp" << "\t"
				 << "Age" << "\t"
				 << "Cont.No" << "\t\t"
				 << "Email" << "\t"
				 << endl
				 << "============"<< "\t"
				 << "=======" << "\t"
				 << "=======" << "\t"
				 << "=======" << "\t"
				 << "=======" << "\t"
				 << "=======" << "\t"
				 << "=======" << "\t\t"
				 << "=======" << "\t"
				 << endl;
			    cout << cname << "\t\t" 
				 << name  << "\t"
				 << role  << "\t"
				 << salary  << "\t"
				 << experience  << "\t"
				 << age  << "\t"
				 << contact  << "\t"
				 << email  << "\t"
				 << endl;
		}
		};

		int main(){

		Emp e;
		}

- **AMBIGUITY**

	It occurs when we tries to access same data from different sources which are not directly connected each other.
	
	It mainly occurs in multiple and hierarchical inheritance.
	
	There are two differnce ways to resolve the ambiquity.
	
	- **Temporary solution.**
		
		-Using scope resolution operator.
		
	- **Permenant solution.**
		- Using virtual function.
		
	Functions or attributes which are being acceseed from multiple sources are called ambigous.

> **Program to know hybrid heritance.**

> **using also Temporary solution method for solve a ambiguity.**

		#include<iostream>
		using namespace std;

		class Temp {
			protected:
				double c;

			public :

				void setTemp(){
					cout<<"Enter celcius";
					cin >> c;
				}
		};

		class Feh : public Temp {
			protected : 
			     double f;

			public :
				void getFeh(){

					f = (c*(9/5)) + 32;
					cout << c << "celcius" << f << "frs" << endl;

				}
		};

		class Kel : public Temp{
			protected :
			double k;

			public :
				void getKel(){

					k = c + 273.15;
					cout << c << "celcius" << k << "kelvin" << endl;
				}
		};

		class Weather : public Feh, public Kel{

			public :
				void getWeather(){
					cout << "celcius" << Feh :: c << endl;
					cout << "feh"     << Feh :: f << endl;
					cout << "kelvin"  << Kel :: k << endl;
			};

		};

		int main(){
			Weather w;
			w.Feh :: setTemp();
			w.Kel :: setTemp();
			w.getFeh();
			w.getKel();
			w.getWeather();
		}

***
> **CHAPTER - 6**

> **POLYMORPHISM.**
***
> **6.1**

- **WHAT IS POLYMORPHISM?**

	Polymorphism is a method where we can create multiplt formation or structure of single method.
	
	Polymorphism is a combination of two greek words poly & morphs.
	
	Poly means multiple.
	
	Morphs means structure,behaviour,forms.
		
- **TYPES OF POLYMORPHISM.**

	- **Run time.**
		- **Method overriding.**
		- **Virtual function.**
		
	- **Compile time**
		- **Method overloading.**
		- **Operator overloading.**
		
- **METHOD OVERLOADING.**

	When we create same method with multiple parameters in same class, it's called method overloading.
	
	- **Rules of method overloading.**
	
		1). Class must be same.
		
		2). Name must be same of all methods.
		
		3). Parameters must be different of all methods.
		
	- **Example of method overloading.**
	
			#include<iostream>
			using namespace std;
			class Mathamatics {

				public :

					void calculate(int a, int b) {

						cout << "=================================="<<endl;
						cout << "Division of A & B             : " << a / b << endl; 
					}

					void calculate(int a, int b, int c) {

						cout << "Subtraction of A, B, & C      : " << a - b - c << endl; 
					}

					void calculate(int a, int b, int c, int d) {


						cout << "Multiplication of A, B, C & D : " << a * b * c * d << endl; 
					}

					void calculate(int a, int b, int c, int d, int e) {

						cout << "Addition of A, B, C, D & E    : " << a + b + c + d + e << endl; 
						cout << "=================================="<<endl;

					}

			};


			int main() {


				int a,b,c,d,e;

				Mathamatics m1;

				    cout << "Enter a A : ";
				    cin  >> a;
				    cout << "Enter a B : ";
				    cin  >> b;
				    cout << "Enter a C : ";
				    cin  >> c;
				    cout << "Entre a D : ";
				    cin  >> d;
				    cout << "Enter a E : ";
				    cin  >> e;


			    m1.calculate(a,b);

			    m1.calculate(a,b,c);

			    m1.calculate(a,b,c,d);

			    m1.calculate(a,b,c,d,e);

			}
	
- **METHOD OVERRIDING.**

	When we recreate the same method in derived(child) class with same parameters, it's called method overriding.
	
	- **Rules of method overriding.**
	
		1). Class must be derived(child).
		
		2). Name must be same of all methods.
		
		3). Parameters must be same of all methods.
		
	- **Example for method overriding.**
	
			#include<iostream>
			using namespace std;
			class Mathamatics {

				public :

					void calculate(int a, int b) {

						cout << "=================================="<< endl;
						cout << "Division of A & B             : " << a / b << endl; 
					}
			};
			
			class Mathamaticsnew : public Mathamatics {
			
				public :
				
				void calculate() {
				
					cout << "=================================="<< endl;
					cout << "Division of" << A << " & " << B << " : " << a / b << endl; 
					cout << "=================================="<< endl;
				}
			};
			
			int main() {
			
				Mathamaticsnew m;
				m.calculate(20,4); //calling of child class method.
				m.Mathamatics :: calculate(20,4); //calling of parent class method.
			}

- **DIFFERENCE BETWEEN METHOD OVERRIDING & METHOD OVERLOADING.**

	|     **METHOD**    |      **CLASS NAME**      |      **METHOD NAME**      |      **PARAMETERS POSITION**      |
	| :---:        |     :---:     |         :---: |      :---:     |
	| **METHOD OVERLOADING**   |     SAME     |    SAME    |      DIFFERENT      |
	| **METHOD OVERRIDING**   |    DERIVED    |    SAME    |      SAME      |
	
