//C++to compute the area of circle and area of triangle by overloading the area () function
#include<iostream>
#define pi 3.141
using namespace std;
void area(int r)
{
	cout<<"Area of circle = "<<pi*r*r<<endl;
}
void area(int b,int h)
{
	cout<<"Area of triangle = "<<0.5*b*h<<endl;
}
int main()
{
	area(7);
	area(10,5);
}

