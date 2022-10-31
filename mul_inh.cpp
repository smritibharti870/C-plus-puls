#include<iostream>
using namespace std;
class M
{
	protected:
		int m;
	public:
		void setM(int m)
		{
			this->m=m;
		}
};
class N
{
	protected:
		int n;
	public:
		void setN(int n)
		{
			this->n=n;
		}
};
class MN:public M,public N
{
	public:
		void display()
		{
			cout<<"M :: "<<m<<endl;
			cout<<"N :: "<<n<<endl;
			cout<<"Product of M and N :: "<<m*n<<endl;
		}
};
int main()
{
	MN mn;
	mn.setM(30);
	mn.setN(10);
	mn.display();
	return 0;
}
