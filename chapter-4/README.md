***
> **CHAPTER - 4**

> **DATA ENCAPSULATION.**
***
> **4.1**
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
