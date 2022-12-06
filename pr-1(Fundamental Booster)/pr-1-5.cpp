#include<iostream>
using namespace std;

// WAP to find square root of given numbers from array elements.
int main()
{
	int n;
	
	cout << "Enter The Size Of Array :";
	cin  >> n;
	
	int a[n];
	
	cout << endl;
	for(int i=0; i<n; i++)
	{
		cout << "Enter The Element :";
		cin  >> a[i];
		
		for(int j=0; j<=a[i]; j++)
		{
			if(j*j==a[i])
			{
				cout << "Array Squre :" << j << endl;
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	
}
