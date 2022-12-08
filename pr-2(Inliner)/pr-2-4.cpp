#include<iostream>
using namespace std;

// WAP to illustrate the use of inline function by creating a function which prints a 
// multiplication table of given number.
inline int multip(int n, int i){
	cout<<n<<" * "<<i<<"\t"<<"= "<<n*i<<endl;
}
int main(){
	int n,i;
	cout<<"Enter number : ";
	cin>>n;
	
	for(i=1;i<=10;i++){
		
		multip(n,i);
	}
}
