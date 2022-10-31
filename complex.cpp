#include<iostream>
using namespace std;

class Complex
{
	float x,y;
	public:
		Complex()
		{
		
		}
		Complex(float x,float y)
		{
			this->x=x;
			this->y=y;
		}
		Complex operator+(Complex &c)
		{
			Complex temp;
			temp.x=x+c.x;
			temp.y=y+c.y;
			return temp;
		}
		void display()
		{
			cout<<"c="<<x<<"+";
			cout<<" "<<y<<"j"<<endl;;
		}
};

int main()
{
	Complex c1(4.5,6.7),c2(5.7,8.9),c3;
	c3=c1+c2;
	cout<<"c1 :: "<<endl;
	c1.display();
	cout<<"c2 :: "<<endl;
	c2.display();
	cout<<"c3 :: "<<endl;
	c3.display();
	return 0;
}
