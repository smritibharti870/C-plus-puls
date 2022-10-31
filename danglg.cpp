#include<iostream>
using namespace std;

int main()
{
	int *p=new int;
	*p=30;
	delete p;
	int *q;
	return 0;	
}
