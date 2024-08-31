//34. Write a program in C++ that add two complex numbers by overloading binary operator +
#include<iostream>
using namespace std;
class Complex
{
	private:
		int real,img;
	public:
		Complex()
		{
			real=img=0;
		}
		Complex(int a,int b)
		{
			real=a;
			img=b;
		}
		void display()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}
		void operator +(Complex c)
		{
			Complex temp;
			temp.real=real+c.real;
			temp.img=img+c.img;
			temp.display();
		}
		void operator -(Complex c)
		{
			Complex temp;
			temp.real=real-c.real;
			temp.img=img-c.img;
			temp.display();
		}
		void operator *(Complex c)
		{
			Complex temp;
			temp.real=real*c.real;
			temp.img=img*c.img;
			temp.display();
		}
};
int main()
{
	Complex c1(6,9),c2(5,5);
	c1+c2;
	c1-c2;
	c1*c2;
}
