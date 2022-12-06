#include<iostream>
#include<string.h>
using namespace std;

// WAP to check given string is numeric or not.

int main()
{
	char str[50];
	int n;
	
	cout << "Enter any word or Name :";
	cin  >> str;
	
	n = strlen(str);
	
	for(int i=0; i<n; i++)
	{
	    if(str[i]>='0' && str[i]<='9')
		{
			cout << "You enter number in your word or name..." << endl;
		}
		else
		{
			cout<<"your word or name doesn't contain number..."<< endl;
		}
	}
}
