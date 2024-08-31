//reads two numbers n1 and n2 and then print all prime numbers between n1 and n2 
#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cout<<"enter 2 numbers: ";
	cin>>n1>>n2;
	if(n1>n2)
	{
		int temp=n1;
		n1=n2;
		n2=temp;
	}
	for(int i=n1;i<=n2;i++)
	{		
		int f=0;
		for(int j=1;j<=i;j++)
			if(i%j==0)
				f++;
		if(f==2)
			cout<<i<<" ";
	}	
}
