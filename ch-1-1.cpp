#include<iostream>
using namespace std;

int main()
{
	int n;

	cout << "Enter The Size Of Array :";
	cin  >> n;
	int arr[n];
	
	for(int i=0; i<n; i++)
	{
		cout << "Enter a Array element :";
		cin  >> arr[i];
	}
	
	for(int i=0; i<n; i++)
	{
		if(arr[i]%2==0)
		{
			cout << "Even Element : " << arr[i] << endl;
		}
	}
}

