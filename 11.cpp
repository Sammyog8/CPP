//to find sum of digits of a number using recursive function
#include<iostream>
using namespace std;
int sum(int n)
{
	if(n>9)
		return(n%10+sum(n/10));
	else
		return n;
}
int main()
{
	int n;
	cout<<"Enter an number: ";
	cin>>n;
	cout<<"Sum of digits = "<<sum(n);
}
