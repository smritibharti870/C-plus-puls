#include<iostream>
using namespace std;

int mmrLeak()
{
	int *ptr=new int[10];
	delete[] ptr;
	return 0;
}
int main()
{
	cout<<mmrLeak()<<endl;
	return 0;
}
