//to add two complex objects by using suitable constructors
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
		Complex(int r,int i)
		{
			real=r;
			img=i;
		}
		void display()
		{
			cout<<real<<"+"<<img<<"i";
		}
		void sum(Complex c)
		{
			Complex temp;
			temp.real=real+c.real;
			temp.img=img+c.img;
			temp.display();
		}
};
int main()
{
	Complex c1(3,2);
	Complex c2(6,9);
	c1.sum(c2);
}
