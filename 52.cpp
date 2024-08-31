#include<iostream>
#include<math.h>
using namespace std;
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
		double getAngle()
		{
			return theta;
		}
		double getRadius()
		{
			return rad;
		}
};
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
		Rect(Polar p)
		{
			x=p.getRadius()*cos(p.getAngle());
			y=p.getRadius()*sin(p.getAngle());
		}
		void display()
		{
			cout<<"("<<x<<","<<y<<")"<<endl;
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
