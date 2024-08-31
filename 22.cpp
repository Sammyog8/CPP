//to read records of three students and then display that information on monitor
#include<iostream>
using namespace std;
class Student
{
	private:
		int roll,marks;
		string name;
	public:
		void read()
		{
			cout<<"Enter roll no, name & marks : ";
			cin>>roll>>name>>marks;
		}
		void show()
		{
			cout<<roll<<"\t"<<name<<"\t"<<marks<<endl;
		}
};
int main()
{
	Student s1,s2,s3;
	s1.read();
	s2.read();
	s3.read();
	cout<<"Roll \tName \tMarks"<<endl;
	s1.show();
	s2.show();
	s3.show();
}
