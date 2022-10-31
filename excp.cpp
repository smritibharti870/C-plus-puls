#include<iostream>
using namespace std;
int main()
{
	int a=20,b=0;
	int c;
	try{
		if(b==0)
			throw 10;
		else
		{
			c=a/b;
			cout<<"After division :: "<<c;
		}
		
	}
	/*catch(char const *x)
	{
		cout<<x;
	}catch(int y)
	{
		cout<<"\nException caught in line number "<<y;
	}*/catch(...)
	{
		cout<<"\nException caught :: ";
	}
	cout<<"\nProgram executed successfully"<<endl;
	return 0;
}
