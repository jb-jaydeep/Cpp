 #include <iostream>
using namespace std;

/*  WAP to make Railway Reservation System.
 Requirements:
 (A) User Input Train Number , Train Name , Source , Destination , Train Time.
 (B) Display Record By Search Train Number.
 (C) Minimum 3 Input Train Record.   */
class Railway
{
public:
    int tn;
    string tname;
    string s;
    string d;
    string t;

    void header()
    {
        
        cout << "#################### Welcome Indian Railway Reservation System ####################" << endl;
        cout << "=-=-=-=-=-=-=-=-=-=- Enter your trains detail here =-=-=-=-=-=-=-=-=-=-" << endl;
          
    }
    void inputdata()
    {
         cout << "===========================================" << endl;
        cout << "Enter train Number       : ";
        cin  >> tn;
        cout << "Enter train's Name       : ";
        cin  >> tname;
        cout << "Enter train Source       : ";
        cin  >> s;
        cout << "Enter train Destination  : ";
        cin  >> d;
        cout << "Enter train's Time       : ";
        cin  >> t;
        
        cout << "===========================================" << endl;
    }

    void outputdata(int a, string name)
    {
        if(a == tn)
        {
            cout << endl << "Your train booking successfull.------" << endl;
            cout << " - - - - - - - This is train detail - - - - - - - " << endl;

            cout << "Name               : " << name << endl 
                 << "TRAIN NUMBER       : " << tn  << endl
                 << "TRAIN NAME         : " << tname << endl
                 << "TRAIN SOURCE       : " << s << endl
                 << "TRAIN DESTINATION  : " << d << endl
                 << "TRIN TIME          : " << t << endl << endl;
        }
       
    }
};

int main()
{

    Railway r[50];
    r[0].header();
    
    for(int i=0; i<3; i++)
    {
        r[i].inputdata();
    }

    int a;
    string name;

    cout << "Enter train number in which you want to travel : ";
    cin  >> a;
    cout << "Enter Your Name : ";
    cin  >> name;
    
    for(int i=0; i<3; i++)
    {
        r[i].outputdata(a,name);
    }
    
}

