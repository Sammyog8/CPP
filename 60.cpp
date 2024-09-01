#include<iostream>
#define N 5
using namespace std;
template<class T>
class Stack
{
	private:
		T stk[N];
		int top;
	public:
		Stack()
		{
			top=-1;
		}
		void push(T e1)
		{
			if(top==N-1)
				cout<< "Stack full."<<endl;
			else
			{
				stk[++top]=e1;
				cout<<"Item inserted"<<endl;
			}
		}
		T pop()
		{
			T temp;
			if(top==-1)
				cout<<"Stack empty."<<endl;
			else
			{
				temp=stk[top];
				stk[top--]=0;
				cout<<"Item removed"<<endl;
				return temp;
			}
		}
		void print()
		{
			cout<<endl;
			for(int i=top;i>=0;i--)
				cout<<stk[i]<<endl;
		}
};
int main()
{
	Stack <int>s;
	s.push(10);
	s.push(20);
	s.pop();
	Stack <char>s1;
	s1.push('l');
	s1.push('p');
	s.print();
	s1.print(); 
}
