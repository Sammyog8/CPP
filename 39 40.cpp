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
		void operator +(Distance d)
		{
			Distance temp;
			temp.in=in+d.in;
			temp.ft=ft+d.ft+temp.in/12;
			temp.in%=12;
			temp.display();
		}
		void operator -(Distance d)
		{
			Distance temp;
			int a=ft*12+in;
			int b=d.ft*12+d.in;
			if(a>b)
			{
				temp.ft=ft-d.ft;
				temp.in=in-d.in;
			}
			else
			{
				temp.ft=d.ft-ft;
				temp.in=d.in-in;
			}
			temp.display();
		}
};
int main()
{
	Distance c1(5,5),c2(6,9);
	c1+c2;
	c1-c2;
}
