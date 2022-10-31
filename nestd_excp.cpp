#include<iostream>
using namespace std;
int main()
{
	try
	{
		cout<<"Inside outer try block\n";
		try
		{
			cout<<"Inside inner try break\n";
			throw 20;
		}
		catch(int x)
		{
			cout<<"Inner try caught\n";
			throw 'e';
		}
		}
		catch(char x)
		{
			cout<<"outer try caught\n";
		}	
	//return 0;
	return 0;
}
