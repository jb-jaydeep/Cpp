#include<iostream>
using namespace std;

int sum(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int mul(int a, int b)
{
	return a*b;
}

int div(int a, int b)
{
	return a/b;
}

int mod(int a, int b)
{
	return a%b;
}

int main()
{
	
	int a, b, n, ans;
	
	cout << endl << endl <<"1. Addition" << endl;
	cout <<"2. Subtraction" << endl;
	cout <<"3. Multiplication" << endl;
	cout <<"4. Division" << endl;
	cout <<"5. Moduls" << endl;
	cout <<"6. Exit " << endl;
	
	do {
	cout << endl <<"Enter The Any Choice :";
	cin  >> n;
	
	cout << "Enter The a :";
	cin  >> a;
	cout << "Enter The b :";
	cin  >> b;
	
	switch(n)
	{
		case 1: 
		    
		    ans = sum(a,b);
		    cout << endl << " Addition : " << ans << endl;
		    cout << "--------------------------" << endl;
		    break;
		
		case 2: 
		    
		    ans = sub(a,b);
		    cout << endl << "Subtraction : "<< ans << endl;
		    cout << "--------------------------" << endl;
		    break;
		    
		case 3: 
		    
		    ans = mul(a,b);
		    cout << endl << "Multiplication :" << ans << endl;
		    cout << "--------------------------" << endl;
		    break;
		    
		case 4: 
		    
		    ans = div(a,b);
		    cout << endl <<" Division : " << ans << endl;
		    cout << "--------------------------" << endl;
		    break; 
			
		case 5: 
		    
		    ans = mod(a,b);
		    cout << endl <<" Modulus : " << ans << endl;
		    cout << "--------------------------" << endl;
		    break;  
		    
		case 6:
			
			cout << "Quit calculator..." << endl;
			cout << "--------------------------" << endl;
			break;
		
		default :
			 
			 cout << "you enter invalid choice" << endl;
			 cout << "--------------------------" << endl;
			 
		    
	}
	
	n++;
	
  }while(n<=6);

}

