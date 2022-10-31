#include<iostream>

using namespace std;

class Space
{
	int x,y,z;
	public:
		Space(int x, int y, int z)
		{
			this->x=x;
			this->y=y;
			this->z=z;
		}
		void display()
		{
			cout<<"x :: "<<x<<endl;
			cout<<"y :: "<<y<<endl;
			cout<<"z :: "<<z<<endl;
		}
		void operator-();
};

void Space::operator-()
{
	x=-x;
	y=-y;
	z=-z;
}

int main()
{
	Space s(10,20,30);
	s.display();
	-s;
	s.display();
	return 0;
}
