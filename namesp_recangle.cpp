#include<iostream>
using namespace std;
struct Rectangle
{
	int w,h;
	Rectangle(int w, int h)
	{
		this->w=w;
		this->h=h;
	}
	void areaOfRectangle()
	{
		cout<<"Area of Rectangle is :: "<<(w*h)<<endl;
	}
};

int main()
{
	struct Rectangle r(10,20);
	r.areaOfRectangle();
	r.w=20;
	r.h=40;
	r.areaOfRectangle();
	return 0;
}
