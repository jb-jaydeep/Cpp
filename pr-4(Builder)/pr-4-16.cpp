/* WAP to make Bank Management System. (like shown in below images)  */

#include <iostream>
using namespace std;

class Bank
{
public:
    string name, email;
    long long int account, number;
    char n;
    char a;
    int x;
    long def = 900000;
    long dep,with;
    void page1()
    {
        cout << endl << endl << "\t\t\t\t\t -: BANK MANAGEMENY SYSTEM   :-" << endl;
        cout << "\t\t\t-----------------------------------------------------------";

        cout << endl << endl << "\t\t\t\t\t -: Designed and Programed by:-" << endl;
        cout << "\t\t\t-----------------------------------------------------------";
        cout << endl << endl << "\t\t\t\t\t -:     Jaydeep Borda    :-" << endl;

        cout << endl << endl << "\t\t\t\t\t    -:    Trainer   :-" << endl;
        cout << "\t\t\t-----------------------------------------------------------";
        cout << endl << "\t\t\t\t\t -:     Jay Gondaliya    :-" << endl;

        cout << endl << endl << "\t\t\t\t\tPress Any Key & Enter To Continue... " << endl;
        cout << "\t\t\t\t\t";
        cin >> n;
       
		system("cls");
        if (n >= 97 && n <= 122 || n >= 65 && n <= 90 || n >= 9 && n <= 96 || n >= 123 && n <= 126)
        {
            cout << "\t\t---------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\t\t ==> Press A & Enter To Login As Administrator..." << endl
			     << "\t\t\t\t ==> Press S & enter To Login As Staff..........." << endl;
            cout << "\t\t---------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\t\t\t";
             cin >> a;
            page2();
        }
    }

    void page2()
    {
       system("cls");
        switch (a)
        {
        case 'A':
            cout << endl << endl << "\t\t---------------------------------------------------------------------------------------------" << endl;
            cout << endl << "\t\t\t\t -: Welcome As a Administrator :-";
            cout << endl << endl << "\t\t---------------------------------------------------------------------------------------------" << endl;;
            page3a();
            page4();
            page5();
            break;

        case 'S':
            cout << endl << endl << "\t\t---------------------------------------------------------------------------------------------" << endl;
            cout << endl << endl << "\t\t\t\t\t\t -: Welcome As a Staff :-";
            cout << endl << endl << "\t\t---------------------------------------------------------------------------------------------" << endl;
            page3s();
            page4();
            page5();
            break;

        default:
            cout << endl << endl << "\t\t---------------------------------------------------------------------------------------------" << endl;
            cout << endl << endl << "\t\t\t\t\t\t -: Enter Valid Input :-";
            cout << endl << endl << "\t\t---------------------------------------------------------------------------------------------" << endl;
           
        }
       
    }
	
    void page3a()
    {
    	
    	cout << endl << endl << "\t\t---------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\tEnter The Name Of Administrator           :- ";
        cin >> name;
        cout << "\t\t\tEnter The Account Number Of Administrator :- ";
        cin >> account;
        cout << "\t\t\tEnter The Phone Number Of Administrator   :- ";
        cin >> number;
        cout << "\t\t\tEnter The Email Address Of Administrator  :- ";
        cin >> email;
        cout << endl << endl << "\t\t---------------------------------------------------------------------------------------------" << endl;
        system("cls"); 
    }

    void page3s()
    {
    	cout << endl << endl << "\t\t---------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\tEnter The Name Of Staff           :- ";
        cin >> name;
        cout << "\t\t\tEnter The Account Number Of Staff :- ";
        cin >> account;
        cout << "\t\t\tEnter The Phone Number Of Staff   :- ";
        cin >> number;
        cout << "\t\t\tEnter The Email Address Of Staff  :- ";
        cin >> email;
        cout << endl << endl;
       	cout << endl << endl << "\t\t---------------------------------------------------------------------------------------------" << endl;
    	system("cls");
	}

    void page4()
    {
    	//system("cls");
	
    	cout << "\t\t\t\tYour Account Details :";
        cout << endl << endl << "---------------------------------------------------------------------------------------------" << endl;
        cout << "\tName                :- " << name << endl;
        cout << "\tAccount No          :- " << account << endl;
        cout << "\tPhone No            :- " << number << endl;
        cout << "\tEmail               :- " << email << endl;
        cout << "\tAccount Balance     :- " << def << endl;
    	cout << endl << endl << "---------------------------------------------------------------------------------------------" << endl;
    }

    void page5()
    {
        cout << "\t\t\t\tPress [1] To Deposite Money :- " << endl;
        cout << "\t\t\t\tPress [2] To Transfer Money :- " << endl;
        cout << "\t\t\t\tPress [3] To Withdraw Money :- " << endl;
        cout << "\t\t\t\t\t";
        
        cin >> x;
        
          switch (x)
        {
        	system("cls");
        case 1:
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\tEnter Deposite Value    : ";
            cin  >> dep;
            system("cls");
            cout << endl << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << endl << " Deposite The Money :"<< dep << endl;
            cout << endl << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\tYour Actual Amount is  : " << def << endl;
            cout << "\t\t\tYour Deposite Transaction successful." << endl;
            cout << "\t\t\tYour Account Balance is : " << def + dep << endl;
            break;

        case 2:
            cout << endl << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\tEnter Transfer Value    :- ";
            cin  >> with;
            system("cls");
             cout << endl << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << endl << " Transfer The Money :"<< dep << endl;
            cout << endl << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\tYour Actual Amount is   :- " << def << endl;

            if (with <= 900000)
            {
            	cout << "\t\t\tYour Transfer Transaction successful." << endl;
                cout << "\t\t\tYour Account Balence is :- "<< def - with << endl;
            }
            else
            {
                cout << "\t\t\tInsufficient Balence In Your Account!!";
            }
            break;

        case 3:
            cout << endl << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\tEnter Withdraw Value    :- ";
            cin  >> with;
            system("cls");
           cout << endl << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << endl << " Withdraw The Money :"<< dep << endl;
            cout << endl << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\tYour Actual Balance is  :- " << def << endl;

            if (with <= 900000)
            {
            	cout << "\t\t\tYour withdrawal Transaction successful." << endl;
                cout << "\t\t\tYour Account Balence is :- " << def - with << endl;
            }
            else
            {
                 cout << "\t\t\tInsufficient Balence In Your Account!!";
            }

            default :
            cout << "\t\t\tPlease Enter Valid Input ";
        }
    }
    
       

};

int main()
{
    Bank b1;
    b1.page1();
}
