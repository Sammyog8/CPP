//Write a C++ program that reads lines of text from file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	string str;
	fin.open("61.txt");
	while(getline(fin,str))
		cout<<str;
	fin.close();
}
