#include<iostream>
#include<math.h>
using namespace std;
class Rect
{
	private:
		double x,y;
	public:
		Rect()
		{
			x=y=0;
		}
		Rect(double a,double b)
		{
			x=a;
			y=b;
		}
		void display()
		{
			cout<<"("<<x<<","<<y<<")"<<endl;
		}
};
class Polar
{
	private:
		double rad,theta;
	public:
		Polar()
		{
			rad=theta=0;
		}
		Polar(double r,double t)
		{
			rad=r;
			theta=t;
		}
		void display()
		{
			cout<<"("<<rad<<","<<theta<<")"<<endl;
		}
		operator Rect()
		{
			double x,y;
			x=rad*cos(theta);
			y=rad*sin(theta);
			Rect temp(x,y);
			return temp;
		}
};
int main()
{
	Polar p(10,0.78);
	Rect r;
	r=p;
	r.display();
	p.display();
}
