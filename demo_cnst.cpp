#include<iostream>
using namespace std;

class Demo
{
	mutable int x;
	public:
		void setData(int x)	//non constant member function
		{
			this->x=x;
		}
		int getData() const	//constant member function
		{
			x++;
			return x;
		}
};

int main()
{
	Demo d;
	d.setData(10);
	cout<<"x :: "<<d.getData()<<endl;
	return 0;
}
