#include<iostream>
using namespace std;
class USMoney
{
	private:
		int dollars,cents;
	public:
		USMoney()
		{
			dollars=cents=0;
		}
		USMoney(int d,int c)
		{
			dollars=d+c/100;
			cents=c%100;
		}
		void plus(USMoney y)
		{
			USMoney temp;
			temp.dollars=dollars+y.dollars;
			temp.cents=cents+y.cents;
			temp.dollars+=temp.cents/100;
			temp.cents=temp.cents%100;
			temp.display();
		}
		void display()
		{
			cout<<dollars<<"$ "<<cents<<"cents"<<endl;
		}
};
int main()
{
	USMoney u1(5,80),u2(1,90);
	u1.plus(u2);
	
}
