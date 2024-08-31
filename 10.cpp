//to find product of two numbers using recursive function
#include<iostream>
using namespace std;
int mult(int a, int b)
{
	if(a==0||b==0)
		return 0;
	else
		return (a+mult(a,b-1));
	
}
int main()
{
	int a,b;
	cout<<"Enter numbers to multiply: ";
	cin>>a>>b;
	cout<<"Product = "<<mult(a,b);
}
