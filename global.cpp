#include<iostream>
using namespace std;
int m=20;
int main()
{
	int m=10;
	cout<<"local :: "<<m<<"\n";
	cout<<"global :: "<<::m<<"\n";
}
