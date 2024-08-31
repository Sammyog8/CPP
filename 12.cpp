//to read three numbers and print sum, average, smallest and largest
#include<iostream>
using namespace std;
int sum(int a,int b,int c)
{
	return (a+b+c);
}
int avg(int a,int b,int c)
{
	return (a+b+c)/3;
}
int lar(int a,int b,int c)
{
	if(a>b && a>c)
		return a;
	else if(b>c)
		return b;
	else
		return c;
}
int sma(int a,int b,int c)
{
	if(a<b && a<c)
		return a;
	else if(b<c)
		return b;
	else
		return c;
}
int main()
{
	int a,b,c;
	cout<<"Enter 3 numers: ";
	cin>>a>>b>>c;
	cout<<"Sum = "<<sum(a,b,c)<<endl;
	cout<<"Average = "<<avg(a,b,c)<<endl;
	cout<<"Largest = "<<lar(a,b,c)<<endl;
	cout<<"Smallest = "<<sma(a,b,c);
}
