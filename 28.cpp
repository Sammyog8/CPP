//Create a class Box with fields width, height and depth. Add methods getArea () and getVolume
//(). Use suitable constructors. From main () function create an object of Box class and find its
//area as volume.
#include<iostream>
using namespace std;
class Room
{
	private:
		int l,b;
	public:
		class MyRoom
		{
			private:
				int h;
			public:
				MyRoom()
				{
					h=0;
				}
				MyRoom(int z)
				{
					h=z;
				}
				int height()
				{
					return h;
				}
		};
		Room()
		{
			l=b=0;
		}
		Room(int x,int y)
		{
			l=x;
			b=y;
		}
		void getArea()
		{
			cout<<"Area = "<<l*b<<endl;
		}
		void getVolume(MyRoom &h)
		{
			cout<<"Volume = "<<l*b*h.height()<<endl;
		}
};
int main()
{
	Room b(3,4);
	Room::MyRoom r(5);
	b.getArea();
	b.getVolume(r);
}
