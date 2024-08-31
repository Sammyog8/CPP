//reads a number and then check whether is prime or composite
#include<iostream>
using namespace std;
int main()
{
	int n,f=0;
	cout<<"Enter a number: ";
	cin>>n;
	for(int i=1;i<=n;i++)
		if(n%i==0)
			f++;
	if(f==2)
		cout<<n<<" is a prime number";
	else
		cout<<n<<" is a composite number";
}
