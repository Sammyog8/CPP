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
		friend void operator +(Complex c1,Complex c2);
		friend void operator -(Complex c1,Complex c2);
		friend void operator *(Complex c1,Complex c2);
};
void operator +(Complex c1,Complex c2)
{
	Complex temp;
	temp.real=c1.real+c2.real;
	temp.img=c1.img+c2.img;
	temp.display();
}
void operator -(Complex c1,Complex c2)
{
	Complex temp;
	temp.real=c1.real-c2.real;
	temp.img=c1.img-c2.img;
	temp.display();
}
void operator *(Complex c1,Complex c2)
{
	Complex temp;
	temp.real=c1.real*c2.real;
	temp.img=c1.img*c2.img;
	temp.display();
}
int main()
{
	Complex c1(6,9),c2(5,5);
	c1+c2;
	c1-c2;
	c1*c2;
}
