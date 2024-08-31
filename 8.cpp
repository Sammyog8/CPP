//read that finds cube of a number using inline function
#include<iostream>
using namespace std;
inline int cube(int a)
{
	return a*a*a;
}
int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"Cube = "<<cube(n);
}
