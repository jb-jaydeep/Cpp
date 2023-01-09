#include <iostream>
using namespace std;
/*Write a "Garage" class that has a "Car" that is having troubles with its "Motor". 
Use a function-level try block in the "Garage" class constructor to catch an exception 
(thrown from the "Motor" class) when its "Car" object is initialized.
 Throw a different exception from the body of the "Garage" constructor s handler and catch it in main( ).
*/
class Garage{
public:
  Garage() {
    try {
    	
    } catch (string A) {
      throw A ;
    }
  }
 
};
class Motor :public Garage{
	string pro = "your car have a manufacturing defect...";
public:
  Motor() {
    throw  pro;
    Garage();
  }
};


int main() {
	
  try{
  	Motor Car;
  } 
  catch (string A) {
    cout << A  << endl << "please put your car in our service centre to sort out problem... " << endl;
  }

  return 0;
}

