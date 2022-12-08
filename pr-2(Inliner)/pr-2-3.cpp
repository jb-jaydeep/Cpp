#include<iostream>
using namespace std;
int fact(int);
//WAP to find factorial using recursion.
int main(){
	int n,f;
	cout<<"Enter number :";
	cin>>n;
	f = fact(n);
	cout<<"factorial of "<<n<<":"<<f<<endl;
}
int fact(int n){
	if(n<=1){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}
