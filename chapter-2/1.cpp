#include<iostream>
using namespace std;

inline int fact(int a)
{
	int j=1,k=a;
	if(a<=1)
	{
		cout <<" factorial of"<<a<<":"<< j << endl;
	}
	else
	{
		b:
			j=j*a;
			a--;
			if(a>1){
				goto b;
			}
			else{
					cout <<" factorial of"<<k<<":"<< j << endl;	
			}
	}
}
int main()
{
	int n;
	
	cout << "Enter the length of Array :";
	cin  >> n;
	
	int a[n],i;
	cout << "Enter the Element :"<<endl;
	for(i=0; i<n; i++)
	{
		cout << "a["<<i<<"]:";
		cin  >> a[i];
	}
	for(i=0; i<n; i++)
	{	
		fact(a[i]);
	}	
}


