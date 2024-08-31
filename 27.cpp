//Create a class Box with fields width, height and depth. Add methods getArea () and getVolume
//(). Use suitable constructors. From main () function create an object of Box class and find its
//area as volume.
#include<iostream>
using namespace std;
class Box
{
	private:
		int w,h,d;
	public:
		Box()
		{
			w=h=d=0;
		}
		Box(int a,int b,int c)
		{
			w=a;
			h=b;
			d=c;
		}
		void getArea()
		{
			cout<<"Area = "<<w*h<<endl;
		}
		void getVolume()
		{
			cout<<"Volume = "<<w*h*d<<endl;
		}
};
int main()
{
	Box b(3,4,5);
	b.getArea();
	b.getVolume();
}
