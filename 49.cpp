#include<iostream>
using namespace std;
class Time
{
	private:
		int hr,min,sec;
	public:
		Time()
		{
			hr=min=sec+0;
		}
		Time(int a,int b,int c)
		{
			hr=a;
			min=b;
			sec=c;
		}
		void display()
		{
			cout<<hr<<":"<<min<<":"<<sec<<endl;
		}
		friend void operator +(Time t1,Time t2);
};
void operator +(Time t1,Time t2)
{
	Time temp;
	temp.sec=t1.sec+t2.sec;
	temp.min=t1.min+t2.min+temp.sec/60;
	temp.hr=t1.hr+t2.hr+temp.min/60;
	temp.min%=60;
	temp.sec%=60;
	temp.display();
}
int main()
{
	Time t1(1,50,90),t2(5,60,100);
	t1+t2;
}
