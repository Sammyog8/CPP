#include<iostream>
using namespace std;
class Box
{
	private:
		int l,b,h;
	public:
		class BoxWeight
		{
			private:
				int w;
			public:
				class Shipment
				{
					private:
						int cost;
					public:
						Shipment()
						{
							cost=0;
						}
						Shipment(int z)
						{
							cost=z;
						}
						int getCost()
						{
							return cost;
						}
				};
				BoxWeight()
				{
					w=0;
				}
				BoxWeight(int z)
				{
					w=z;
				}
				int getWeight()
				{
					return w;
				}
		};
		Box()
		{
			l=b=h=0;
		}
		Box(int x,int y,int z)
		{
			l=x;
			b=y;
			h=z;
		}
		void getVolume(BoxWeight &w,BoxWeight::Shipment &s)
		{
			cout<<"Volume = "<<l*b*h<<endl;
			cout<<"Weight = "<<w.getWeight()<<endl;
			cout<<"Cost = "<<s.getCost()<<endl;
		}
};
int main()
{
	Box b(3,4,5);
	Box::BoxWeight w(80);
	Box::BoxWeight::Shipment s(1000);
	b.getVolume(w,s);
}
