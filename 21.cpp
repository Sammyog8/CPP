#include<iostream>
#define N 3 //change to 100 acc to question?
using namespace std;
class Employee
{
	private:
		string name;
		long int n;
	public:
		void getData()
		{
			cout<<"Enter e num & name : ";
			cin>>n>>name;
		}
		void putData()
		{
			cout<<endl<<"E Num: "<<n<<endl;
			cout<<"Name: "<<name;
		}
};
int main()
{
	Employee e[N];
	cout<<"Enter info of "<<N<<" employees:"<<endl;
	for(int i=0;i<N;i++)
		e[i].getData();
	cout<<"Employee Info: ";
	for(int i=0;i<N;i++)
		e[i].putData();
}
