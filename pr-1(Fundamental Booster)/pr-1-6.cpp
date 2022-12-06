#include<iostream>
using namespace std;

// WAP to generate cube of given 5 numbers and make an array of that generated cubes.
int main()
{
	int i;
	int a[5];
	int b[5];
	
	for(i=0; i<5; i++)
	{
		cout << "Enter The Element :";
		cin  >> a[i];
		
		b[i] = a[i] * a[i] * a[i];
	}

	for(int i=0; i<5; i++)
	{
	
		cout << "a["<<i<<"]:" << b[i]<<endl;
	}	
}
