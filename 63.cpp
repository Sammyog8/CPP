//Write a C++ program that copies content of one file to another file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	ofstream fout;
	string str;
	fin.open("61.txt");
	fout.open("63.txt");
	while(getline(fin,str))
		fout<<str;
	fout.close();
	fin.close();
	cout<<"Data Written.";
}
