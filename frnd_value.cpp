#include<iostream>
using namespace std;
class A
{
	int x=10;
	friend class B;
};
class B
{
	public:
		void show(A &a)
		{
			cout<<"Value of x :: "<<a.x<<endl;
		}
};
int main()
{
	A a1;
	B b1;
	b1.show(a1);
	return 0;
}
