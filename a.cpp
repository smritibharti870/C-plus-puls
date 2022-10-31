#include<iostream>

using namespace std;

class A
{
	protected:
		int i;
	public:
		A(int i)
		{
			this->i=i;
			cout<<"Default constructo Parent class Invoked"<<endl;
		}
};
class B
{
	protected:
		int j;
	public:
		B(int j)
		{
			this->j=j;
			cout<<"Default Constructor chil class Invoked"<<endl;
		}
	/*void display()
	{
		cout<<"i :: "<<i<<endl;
		cout<<"j :: "<<j<<endl;
	}*/
};
class C:public A,public B
{
	int k;
	public:
		C(int i,int j,int k):A(i),B(j)
		{
			this->k=k;
			cout<<"Constructor of Final Class invoked"<<endl;
		}	
		void display()
		{
			cout<<"i :: "<<i<<"\n"<<"j :: "<<j<<"\n"<<"k :: "<<k<<"\n";
		}
};
int main()
{
	C c(10,20,30);
	c.display();
	return 0;
}
