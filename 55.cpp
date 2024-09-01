//this pointer
#include<iostream>
using namespace std;
class Test
{
private:
	int x;
public:
	Test()
	{
		this->x = 0;
	}
	Test(int x)
	{
		this->x = x;
	}
	void print() 
	{ 
		cout << "x = " << x << endl; 
	}
};
int main()
{
	Test obj1(20);
	obj1.print();
}
