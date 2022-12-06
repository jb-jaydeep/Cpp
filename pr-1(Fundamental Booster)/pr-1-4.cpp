#include<iostream>
using namespace std;

// WAP to check if a given character is vowel or consonant.

int main()
{
	char a;
	
	cout << "Enter Any Character :";
	cin  >> a;
	
	if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U' || a=='a' || a=='e' || a=='i'|| a=='o' || a=='u')
	{
		cout << "Character Is Vowel...";
	}
	else if(a>='0' && a<='9')
	{
		cout << "you enter a Digit..";
	}
	else
	{
		cout << "Character is Consonant...";
	}
}
