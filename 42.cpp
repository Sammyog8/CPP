//to concatenate two string by overloading binary operator ‘+’ using friend func
#include<iostream>
#include<string.h>
using namespace std;
class concat
{
	private:
		char *str;
	public:
		concat(char *s)
		{
			str=new char (strlen(s)+1);
			strcpy(str,s);
		}
		void display()
		{
			cout<<str<<endl;
		}
		void operator +(concat s)
		{
			strcat(str,s.str);
			display();
		}
};
int main()
{
	concat c1("Samyog "),c2("Lamichhane");
	c1+c2;
}
