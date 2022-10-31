#include<iostream>
using namespace std;

void swap(int &x,int &y)
{
	int c=x;
	x=y;
	y=c;
}

int main()
{
	int a=10,b=20;
	cout<<"before exchange : a:: "<<a<<"\n"<<"b :: "<<b<<endl;
	swap(a,b);
	cout<<"after exchange : a:: "<<a<<"\n"<<"b :: "<<b<<endl;
	return 0;
}
