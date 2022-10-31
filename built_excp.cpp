#include<iostream>
using namespace std;
//built in exception
int main()
{
	try
	{
		while(true)
		{
			new int[100000000000000ul];
		}
	}
	catch(const bad_alloc &e)
	{
		cout<<"Allocation failed "<<e.what()<<endl;
	}
	return 0;
}
