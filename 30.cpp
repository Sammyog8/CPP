#include<iostream>
using namespace std;
class Time
{
	private:
		int hr,min,sec;
	public:
		Time()
		{
			hr=min=sec=0;
		}
		Time(int h,int m,int s)
		{
			hr=h;
			min=m;
			sec=s;
		}
		void display()
		{
			cout<<hr<<":"<<min<<":"<<sec<<endl;
		}
		Time sum(Time t)
		{
			Time temp;
			temp.sec=sec+t.sec;
			temp.min=min+t.min+temp.sec/60;
			temp.hr=hr+t.hr+temp.min/60;
			temp.min=temp.min%60;
			temp.sec=temp.sec%60;
			return temp;
		}
};
int main()
{
	Time t1(1,40,50),t2(2,40,50),t3;
	t3=t1.sum(t2);
	t3.display();
}
