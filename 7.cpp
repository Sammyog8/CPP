//computer simple interest using default arguments function
#include<iostream>
using namespace std;
double SI(int p=100000,int t=1,int r=10)
{
	return (p*t*r)/100;
}
int main()
{
	int s;
	s=SI(250000,3);
	cout<<"Simple Interest = "<<s;
}
