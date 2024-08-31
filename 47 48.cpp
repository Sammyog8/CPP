#include<iostream>
using namespace std;
class Distance
{
	private:
		int ft,in;
	public:
		Distance()
		{
			ft=in=0;
		}
		Distance(int a,int b)
		{
			ft=a;
			in=b;
		}
		void display()
		{
			cout<<ft<<"ft "<<in<<"in"<<endl;
		}
		friend void operator +(Distance d1,Distance d2);
		friend void operator -(Distance d1,Distance d2);
};
void operator +(Distance d1,Distance d2)
{
	Distance temp;
	temp.in=d1.in+d2.in;
	temp.ft=d1.ft+d2.ft+temp.in/12;
	temp.in%=12;
	temp.display();
}
void operator -(Distance d1,Distance d2)
{
	Distance temp;
	int a=d1.ft*12+d1.in;
	int b=d2.ft*12+d2.in;
	if(a>b)
	{
		temp.ft=d1.ft-d2.ft;
		temp.in=d1.in-d2.in;
	}
	else
	{
		temp.ft=d2.ft-d1.ft;
		temp.in=d2.in-d1.in;
	}
	temp.display();
}
int main()
{
	Distance d1(5,5),d2(6,9);
	d1+d2;
	d1-d2;
}
