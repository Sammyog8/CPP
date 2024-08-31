//Create two classes DM and DB which store the value of distances. DM stores distances in meters
//and centimeters and DB in feet and inches. Write a program that can read values for the class
//objects and add one object of DM with another object of DM. Use friend function to carry out
//the addition operation. The object that stores the results may be a DM object or DB object,
//depending on the units in which the results are required. The display should in the format of
//feet and inches or meters and centimeters depending on the object on display.
#include<iostream>
using namespace std;
class DM
{
	private:
	public:
		int m,cm;
		DM()
		{
			m=cm=0;
		}
		DM(int a,int b)
		{
			m=a;
			cm=b;
		}
        void display() 
		{
            cout <<m<<" m "<<cm<<" cm "<< endl;
        }
		friend DM add(DM d1, DM d2);
};
class DB
{
	private:
		double ft,in;
	public:
		DB()
		{
			ft=in=0;
		}
		DB(int a,int b)
		{
			ft=a;
			in=b;
		}
		DB convert(DM d)
		{
			double total = (d.m * 100 + d.cm) / 2.54;
            ft = (int)total / 12;
            in = total - (ft * 12);
		}
		void display() 
		{
            cout <<ft<<" ft "<<in<<" in "<< endl;
        }
};
DM add(DM d1, DM d2) 
{
    DM temp;
    temp.m = d1.m + d2.m;
    temp.cm = d1.cm + d2.cm;
    if(temp.cm >= 100) 
	{
        temp.m += temp.cm / 100;
        temp.cm = temp.cm % 100;
    }
    return temp;
}
int main() 
{
    DM d1(3, 50),d2(2, 75);
    DM d3 = add(d1, d2);
    d3.display();
    DB d4;
    d4.convert(d3);
    d4.display();
}
