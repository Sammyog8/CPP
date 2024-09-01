#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("61.txt");
	string str="Hi this is CPP file handling";
	fout<<str;
	fout.close();
	cout<<"Data Written.";
}
