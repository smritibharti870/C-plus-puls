#include<iostream>
using namespace std;

void display(char ch='#', int count=5)
{
	for(int i=1;i<=count;i++)
	{
		cout<<ch;
	}	
}
int main()
{
	display('*',10);
	cout<<endl;
	display('$');
	cout<<endl;
	display();
	cout<<"\n";
	
	return 0;
}
