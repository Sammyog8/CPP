//prints prime numbers from 300 to 500
#include<iostream>
using namespace std;
int main()
{
	for(int i=300;i<=500;i++)
	{		
		int f=0;
		for(int j=1;j<=i;j++)
			if(i%j==0)
				f++;
		if(f==2)
			cout<<i<<" ";
	}	
}
