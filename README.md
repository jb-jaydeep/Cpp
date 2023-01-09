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

				 //Illustrate the use of implicit and explicit copy constructor.

				 class Hotel {
						private : 
					    int id;
						string name;
						public :
						Hotel () {
						cout << "Welcome to the TGB"<< endl;

					    }

						Hotel (int id, string name) {

								this -> id = id;
								this -> name = name;

								cout << "Your id is :" << id << endl
								      << "Name :" << name << endl;
						}


						//Explicit copy constructor...
						Hotel (Hotel &h) {

								id = h.id;
								name = h.name;

								cout << "Your id is :" << id << endl
								     << "Name :" << name << endl;
						}
						};

							int main() {

							Hotel h;
							Hotel h1(101,"Jaydeep");
							Hotel h2(102,"Jay");
							Hotel h3(103,"Deep");
							Hotel h4 = h1; // Implicit copy constructor.
							Hotel h5(h2); // Explicit copy constructor.
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

- **OPERATOR OVERLOADING.**

	It is a concept in which we can perform mathamatical or logical operations between objects of same class.

- **TYPES OF OPERATOR OVERLOADING.**
	- **UNARY OPERATOR OVERLOADING.**
	- **BINARY OPERATOR OVERLOADING.**
	
- **Example of unary operator overloading.**

			#include<iostream>
			using namespace std;

			//WAP for unary increment (++) and decrement (--) operator overloading.

			class Math{

				int a,tmpa;

				public:

					void setdata(){

						cout << "enter a : ";
						cin  >> a;
						tmpa = a;
					}

					void getdata(){

						cout <<"A : " << a << endl;
					}

					Math operator++(){

						Math tmp;
						cout << "A after increment....."<< endl;
						tmp.a = ++a;
					}
						Math operator--(){

						Math tmpex;
						cout << "A after decrement....."<< endl;
						tmpex.tmpa = --tmpa;
				}
			};

			int main(){
				Math m1,m2,m3;
				m1.setdata();
				m1.getdata();
				m2 = ++m1;
				m2.getdata();
				m3 = --m1;
				m3.getdata();
			}
	
- **Example of binary operator overloading.**

			#include<iostream>
			using namespace std;

			//WAP to add two objects using binary plus (+) operator overloading.

			class Math {

				int a;

				public : 
				void setdata(){

					cout << "Enter a : ";
					cin  >> a;
				}

				Math operator+(Math m2){

					Math tmp;

					tmp.a = this->a + m2.a;

					cout << "Addition of both objects's a : " << tmp.a << endl;
				}
			};

			int main(){

				Math m1,m2,m3;
				m1.setdata();
				m2.setdata();
				m3 = m1 + m2;

			}

***
> **Chapter -7**  

> **DATA ABSTRACTION.**
***

> **7.1**

 -**WHAT IS DATA ABSTRACTION?**
 
 Abstraction means hiding.
	
 Hide logic from user.

 Introducer from attributes.
	
 Abstraction is a combination of 2 Latin word.
	
1. Abs  Means   Draw.

2. Trehere  means away.

- **TYPE OF DATA ABSTRACTION.**

	1. Use access modifier.
	2. Abstract Class.
		- Pure virtual function.

1. **Access modifier.**
- Private
- Protected
- Public

- **EXAMPLE.**
		
		#include<iostream>
		using namespace std;
		/*WAP to abstract some attributes of class Admin to
		prevent them to be inherited by its child classes.
		- Class Admin -> Class Manager
		- Class Manager -> Class Employee
		- Class Admin has following members:
		- company_name
		- manager_salary
		- employee_salary
		- total_staff
		- total_annual_revenue
		- can_terminate
		- use all attributes accessibility in parent class and
		child class properly.
		- override a method myAccess() in both child
		classes to display all parent class’s members value
		accordingly.*/

		class Admin {

		    protected : 
			string company_name;
		    long long int manager_salary;
		    long long int employee_salary;
		    int total_staff;
		    double total_annual_revenue;
		    string can_terminate;


			Admin(){

				company_name = "Tata_Motors_Pvt_Ltd.";
				manager_salary = 50000;
				employee_salary = 15000;
				total_staff = 121;
				total_annual_revenue = 200.5;
				can_terminate = "Manager&Employee";
				}
			public :	
			void myAccess(){

					cout <<"Admin can Access this All Attributes......" << endl
						 <<"------------------------------------------" << endl
						 <<"Company name                : " << company_name << endl
					     <<"Manager salary              : " << manager_salary << endl
					     <<"Empoyee salary              : " << employee_salary << endl
					     <<"Total staff in company      : " << total_staff << endl
					     <<"Total Annual Revenue in Cr  : " << total_annual_revenue << endl
						 <<"Can terminate               : "<< can_terminate << endl
						 <<"------------------------------------------" << endl << endl;
				}	
		};

		class Manager : public Admin {

				public :

				void myAccess(){
					string can_terminate ="Employee";

				    cout <<"Manager can Access this All Attributes......" << endl
						 <<"------------------------------------------" << endl
						 <<"Company name           : " << company_name << endl
					     <<"Manager salary         : " << manager_salary << endl
					     <<"Empoyee salary         : " << employee_salary << endl
					     <<"Total staff in company : " << total_staff << endl
						 <<"Can terminate          : "<< can_terminate << endl
						 <<"------------------------------------------" << endl << endl;	

				}	

		};

		class Employee : public Manager{

			public :
			void myAccess(){

			cout <<"Employee can Access this All Attributes......" << endl
				 <<"------------------------------------------" << endl	
				 <<"Company name   : " << company_name << endl
				 <<"Empoyee salary : " << employee_salary << endl 
				 <<"------------------------------------------" << endl << endl;
			}
		};

		int main(){
		Employee e1;
		e1.myAccess();
		e1.Manager::myAccess();
		e1.Admin::myAccess();

		}

> **7.2**

- **Pointer object.**

	An object which stores an address of another object.
	
	Pointer objects can be create of the same class's object only.
	
	It can be also created for derived class when derived class and base class both have the overridden virtual function.
	
	-E.x 
	
	Demo d1;
	
	Demo *d2;
	
	d2 = &d1;

	All the methods or attributes  of a pointer object can be accessed by '->' arrow instead of '.'
	
- **Virtual Function.**

	It indicates the Single existence of any method to the whole program.
	
	It can be used to remove ambiguity permanently.
	
	Abstract class (using pure virtual function).

 	A class which cannot be instantiated.
	
	Can not create object of the class.
	
 	All the methods or  functionality of abstract class cannot be used directly.

 	In C++, Abstract class can be created using.
	
- **pure virtual function.**

	Virtual function with initial value zero.
	
 	It doesn't have body.
	
  	Pure virtual function is only a declaration.
	
 	If we want to use methods or attributes of Yet abstract class the pure virtual method of class must be reincarnated in child class with the same signature of method.

  	It must have the same name, Same parameters and same  Return data type as parent class's pure virtual function.

- **EXAMPLE.**

		#include<iostream>
		using namespace std;

		/*
		WAP to perform some basic mathematical operations
		using Abstract class such like:
		- area of circle
		- area of triangle
		- area of rectangle
		- use one single pure virtual function named
		calculate() to perform all above operations*/

		class Operation {
			protected :
			double circle,tri,rec;
			protected :

				virtual void calculate(int a,int b ,double c) = 0;

				void area_circle(double r){

					circle = 3.14 * r*r;
					cout << "Area of Circle with radius " << r << " : " << circle << endl;	
				}
				void area_triangle(double h , double b){

					tri = (h*b)/2;
					cout << "Area of Triangle with height " << h << " & base " << b << " : " << tri << endl;	
				}
				double area_rectangle(double w, double l){

					rec = w*l;
					cout << "Area of recangle with length " << l << " & width " << w << " : " << rec << endl;
				}
		};

		class User : protected Operation{
				int a;
			public :

				void calculate(int x,int b ,double c){

					cout << "Enter 1 for Area of Circle"<<endl
						 << "Enter 2 for Area of Triangle"<<endl 
						 << "Enter 3 for Area of rectangle"<<endl;
					cin  >> a;
					switch(a)
					{
						double r;
						case 1:

								cout << "Enter a Radius of circle : ";
								cin  >> r;

								area_circle(r);
								break;
						case 2:
							double h,b;
								cout << "Enter a height of triangle : ";
								cin  >> h;
								cout << "Enter a base of triangle : ";
								cin  >> b;

								area_triangle(h,b);
								break;
						case 3:
							double w,l;
								cout << "Enter a width of rectangle : ";
								cin  >> w;
								cout << "Enter a length of recangle : ";
								cin  >> l;

							area_rectangle( w,l);
							break;

					}

				}
		};

		int main(){
			User u1;
			u1.calculate(1,1,3.14);
		}

***
 > **CHAPTER - 8.**
 
 > **EXCEPTION HANDLING.**
 ***
- **WHAT IS EXCEPTION?**

	It's also a kind of error which occurs by logical mistake.
 
 	Exceptions can be called one type of system timeout or restriction to use some method.
 
 	It occurs on compiling time and breaks the executing flow of the compiler.

- **DIFFERENCE BETWEEN ERROR AND EXCEPTION.**

	Error == compile time == syntax mistake.
	
	Exception == run time == logical mistake.
	
 	Error only occurs by developer.
	
 	Exception occurred by developer and user.

- **WHAT IS EXCEPTION HANDLING?**

		#include<iostream>
		using namespace std;
		#include<string.h>
		
		/*WAP to implement exception handling mechanism for
		different types of scenarios:
		- a number cannot be divide by zero
		- a person cannot be able to vote if his/her age is less
		than 18
		- a password cannot be validate if it doesn’t contains
		an uppercase letter*/

		class Operation {
			public :
			int i,count=0;
			string negativem = "Your password doesn't contains uppercase letter";
			string a;
			int length;
			char pass[100];
			string positivem = "You entered correct password" ;
			public :
			//division- logic
			void div(double a, double b){

				if(b==0){

					throw b;	
				}else{

					cout <<" Answer : " << a/b << endl;
				}
			}
			//voting-logic
			double allowvoter(double age){

				if(age <18.0){

					throw age;
				}
				else{

					cout <<" you are alligible for vating...." << endl; 
				}
			}
			//password-logic
			void passcheck(){

					cout <<" Enter Email : ";
					cin  >> a; 

					cout <<" Enter Password : ";
					cin  >> pass; 

					length = strlen(pass);

					for( i=0 ; i < length ; i++)
				{
				if(pass[i]>= 65 && pass[i]<=90) {

				    count++;
				}
			   }

			    if(count >= 1) {
			      cout << endl <<positivem << endl;   
			   }
			   else {
			       throw count;
			   }
			}	
		};

		class Division : public Operation {
			double a,b;

			public :
				Division(){
					cout <<" Welcome to calculater...." << endl;
				}

				void setdata(){

					cout <<" Enter A : ";
					cin  >> a; 

					cout <<" Enter B : ";
					cin  >> b; 
				}

				void getdivision(){
					try {
						div(a,b);
					}

				catch(double b){

						cout << " " << b <<" Can not divided by Zero" << endl;
					}	
				}		
			};

		class Vote : public Operation {
			double age;

			public :
			 Vote(){

					cout <<" Welcome to check eligibility for voting...." << endl;
				}

				void setdatavote(){

					cout <<" Enter your Age : ";
					cin  >> age; 
							}

				void geteligibility(){


					try {
					allowvoter( age);

					}

					catch(double age){

						cout << " " << age <<" Can not eligible for vote..." << endl;
					}
						catch(string age){

						cout << " " << age <<" Can not eligible for vote..." << endl;
					}			
				}

			};

		class Password : public Operation{

			public :


				void getpassword(){
					try {
						passcheck();
					}

				catch(int count){	
						cout << negativem << endl;
					}

				}
		};

		int main(){

			Division d;
			d.setdata();
			d.getdivision();

			Vote v;
			v.setdatavote();
			v.geteligibility();

			Password p;
			p.getpassword();
		}
