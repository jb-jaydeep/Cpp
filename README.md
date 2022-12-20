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
		
