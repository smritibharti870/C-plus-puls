#include<iostream>
using namespace std;
class Test
{
//private:
	int a,b;
public:
	void setData(int x, int y);
	void getData();
//protected:
};

void Test :: setData(int x, int y)
{
	a=x;
	b=y;
}

void Test ::  getData()
{
	cout<<"a : "<<a<<"\nb : "<<b<<"\n";
}

int main()
{
	Test t1,t2;
	t1.setData(20,40);
	t1.getData();
	t2.setData(10,20);
	t2.getData();
}
