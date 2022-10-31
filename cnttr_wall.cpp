#include<iostream>
using namespace std;

class Wall
{
	double length;
	double height;
	public:
		Wall()
		{
			cout<<"Default constructor"<<endl;
		}
		Wall(double length,double height)
		{
			this->length=length;
			this->height=height;	
		}
		Wall(Wall &w);	//copy constructor
	/*	Wall()
		{
			cout<<"Destructor invoked"<<endl;
		}*/	
		double calculateArea()
		{
			return(length*height);
		}
};
Wall :: Wall(Wall &w)
{
	this->length=w.length;	
	this->height=w.height;
}

int main()
{
	Wall w1(20.56,10.50);	
	cout<<"Area of Wall :: "<<w1.calculateArea()<<endl;
	Wall w2=w1;
	cout<<"Area of Wall :: "<<w2.calculateArea()<<endl;
/*	{
		Wall w3;
	}*/
	return 0;
}
