#include<iostream>

using namespace std;

class base
{
	public:
		base()
		{
			cout<<"Constructor base class"<<endl;
		}
		virtual~base()
		{
			cout<<"Base class Destructor"<<endl;
		}
};

class derived:public base
{
	public:
		derived()
		{
			cout<<"Constructor derived class"<<endl;
		}
		~derived()
		{
			cout<<"Derived class Destructor"<<endl;
		}
};

int main()
{
	derived *d=new derived();
	base *b=d;
	delete d;
	delete b;
	return 0;
}
