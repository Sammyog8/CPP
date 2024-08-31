//to read radius and find area and circumference
#include<iostream>
using namespace std;
int main()
{
	double r,ar,cir;
	cout<<"Enter radius: ";
	cin>>r;
	ar=3.141*r*r;
	cir=2*3.141*r;
	cout<<"Area = "<<ar<<endl<<"Circumference = "<<cir<<endl;
}
