#include<iostream>
using namespace std;
namespace First
{
	void messageBox()
	{
		cout<<"Hello to everyone"<<endl;
	}
}

namespace Second
{
	void messageBox()
	{
		cout<<"Goodmorning to evereyone"<<endl;
	}
}

int main()
{
	First::messageBox();
	Second::messageBox();
	return 0;
}
