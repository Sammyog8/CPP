//to read two integer values m and n and to decide and print whether m is a multiple of n or not
#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter two numbers: ";
	cin>>m>>n;
	if(m%n==0)
		cout<<m<<" is a multple of "<<n;
	else
		cout<<m<<" is not a multple of "<<n;
}
