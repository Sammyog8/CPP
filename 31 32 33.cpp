//31 32 33
#include<iostream>
using namespace std;
class Distance
{
	private:
		int x,y;
	public:
		Distance()
		{
			x=y=0;
		}
		Distance(int a,int b)
		{
			x=a;
			y=b;
		}
		void display()
		{
			cout<<"("<<x<<","<<y<<")"<<endl;
		}
		void operator ++()
		{
			x++;
			y++;
			display();
		}
		void operator --()
		{
			x--;
			y--;
			display();
		}
		void operator -()
		{
			x=-x;
			y=-y;
			display();
		}
};
int main()
{
	Distance d(6,9);
	++d;
	--d;
	-d;
}
