#include<iostream>
using namespace std;
class Distance
{
	private:
		int m,cm;
	public:
		Distance()
		{
			m=cm=0;
		}
		Distance(int a, int b)
		{
			m=a;
			cm=b;
		}
		void compare(Distance d)
		{
			if(m!=d.m)
			{
				if(m>d.m)
					cout<<m<<"m "<<cm<<"cm is the larger distance"<<endl;
				else
					cout<<d.m<<"m "<<d.cm<<"cm is the larger distance"<<endl;
			}
			else
			{
				if(cm>d.cm)
					cout<<m<<"m "<<cm<<"cm is the larger distance"<<endl;
				else
					cout<<d.m<<"m "<<d.cm<<"cm is the larger distance"<<endl;
			}
		}
};
int main()
{
	Distance d1(10,5);
	Distance d2(8,99);
	d1.compare(d2);
}
