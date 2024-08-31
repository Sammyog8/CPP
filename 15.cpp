//to read two matrices of size m*n from the keyboard and then find sum and product of these two matrices. Use function to read, to find sum and to find product.
#include<iostream>
using namespace std;
void read(int r,int c,int a[5][5])
{
	cout<<"Enter elements of matrix: "<<endl;
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			cin>>a[i][j];
}
int sum(int r1,int c1,int a[5][5],int r2,int c2,int b[5][5])
{
	int temp[r1][c1];
	if(r1==r2 && c1==c2)
	{
		for(int i=0;i<r1;i++)
			for(int j=0;j<c1;j++)
				temp[i][j]=a[i][j]+b[i][j];
		cout<<"Sum is:"<<endl;
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c1;j++)
				cout<<temp[i][j]<<" ";
			cout<<endl;
		}
	}
	else
		cout<<"Addition not possible"<<endl;
}
int pro(int r1,int c1,int a[5][5],int r2,int c2,int b[5][5])
{
	int temp[r1][c2];
	if(c1==r2)
	{
		for(int i=0;i<r1;i++)
			for(int j=0;j<c2;j++)
				for(int k=0;k<r1;k++)
					temp[i][j]+=a[i][k]*b[k][j];
		cout<<"Product is:"<<endl;
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c1;j++)
				cout<<temp[i][j]<<" ";
			cout<<endl;
		}
	}
	else
		cout<<"Multiplication not possible"<<endl;
}
int main()
{
	int r1,c1,r2,c2;
	cout<<"Enter matrix 1 order: ";
	cin>>r1>>c1;
	cout<<"Enter matrix 2 order: ";
	cin>>r2>>c2;
	int a[5][5],b[5][5];
	read(r1,c1,a);
	read(r2,c2,b);
	sum(r1,c1,a,r2,c2,b);
	pro(r1,c1,a,r2,c2,b);
}
