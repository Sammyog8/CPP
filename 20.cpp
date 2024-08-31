#include<iostream>
using namespace std;
class Number
{
	private:
		int x,y;
	public:
		Number(int a, int b)
		{
			x=a;
			y=b;
		}
		int getMax()
		{
			if(x>y)
				return x;
			else
				return y;
		}
};
int main()
{
	Number n(10,20);
	int lar=n.getMax();
	cout<<"Larger Number = "<<lar;
	return 0;
}
