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
		void operator +(Time t)
		{
			Time temp;
			temp.sec=sec+t.sec;
			temp.min=min+t.min+temp.sec/60;
			temp.hr=hr+t.hr+temp.min/60;
			temp.min%=60;
			temp.sec%=60;
			temp.display();
		}
};
int main()
{
	Time t1(1,50,90),t2(5,60,100);
	t1+t2;
}
