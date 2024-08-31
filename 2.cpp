#include<iostream>
using namespace std;
int main()
{
	int n,rev=0,temp;
	cout<<"Enter a number: "<<endl;
	cin>>n;
	while(n!=0)
	{
		temp=n%10;
		rev=rev*10+temp;
		n=n/10;
	}
	cout<<"Reverse = "<<rev;
}
