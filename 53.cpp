//to demonstrate function overriding
#include<iostream>
using namespace std;
class A
{
	private:
		string name;
		int age;
	public:
		void read()
		{
			cout<<"Enter name and age: ";
			cin>>name>>age;
		}
		void display()
		{
			cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl;
		}
};
class B:public A
{
	private:
		string job;
	public:
		void read()
		{
			A::read();
			cout<<"Enter job: ";
			cin>>job;
		}
		void display()
		{
			A::display();
			cout<<"Job: "<<job<<endl;
		}	
};
int main()
{
	B b;
	b.read();
	b.display();
}
