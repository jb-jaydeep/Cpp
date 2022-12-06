#include<iostream>
using namespace std;

// WAP to find leap years from 2000 to 3000.
int main()
{
	cout << endl << "\t Leap Years From 2000 To 3000." << endl;
	
	for(int i=2000; i<=3000; i++)
	{
	    if(i%4 == 0)
		{
			cout << " \tLeap Year :" << i;
		}	
	}	
}
