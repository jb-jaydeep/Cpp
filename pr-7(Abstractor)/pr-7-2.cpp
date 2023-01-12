

/*  Create hybrid inheritance and remove ambiguity permanently.  */

#include<iostream>
using namespace std;

class A {
public :
    int a;

    public :

      virtual  void setA() {

            cout << "Enter A : ";
            cin  >> a;
        }

        virtual void getA() {

            cout << endl << " A : " << a << endl;
        }
};

class B : virtual public A {

    

    public :
		int b;
       virtual void setB() {

            cout << "Enter B : ";
            cin  >> b;
        }

       virtual void getB() {

            cout << endl << " B : " << b << endl;
        }
};

class C : virtual public A {

   

    public :
 		int c;
       virtual void setC() {

            cout << "Enter C : ";
            cin  >> c;
        }

        virtual void getC() {

            cout << endl << " C : " << c << endl;
        }
};

class D : public B , public C {

    int d;

    public :

        void setD() {

            cout << "Enter D : ";
            cin  >> d;
        }

         void getD() {

            cout << endl << " D : " << d << endl;
            cout << "Sum : " << a+b+c+d << endl;
        }
};

int main() {

    D d1;

    d1.setA();
    d1.setB();
    d1.setC();
    d1.setD();

    d1.getA();
    d1.getB();
    d1.getC();
    d1.getD();

}

