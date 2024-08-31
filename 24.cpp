//to demonstrate dynamic constructor
#include<iostream>
using namespace std;
class Test
{
	private:
		const char* p;
	public:
	    Test()
	    {
	        p = new char[8];
	        p = "test :)";
	    }
	    void display() 
		{ 
			cout << p << endl; 
		}
};
int main()
{
    Test obj;
    obj.display();
}
