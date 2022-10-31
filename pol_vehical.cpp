#include<iostream>

using namespace std;

class Vehical
{
	public:
		virtual void display()
		{
			cout<<"Vehical is Running "<<endl;
		}
		void show()
		{
			cout<<"Parent class function"<<endl;
		}
};

class Bike:public Vehical
{
	public:
		void display()
		{
			cout<<"Bike is running "<<endl;
		}
		void show()
		{
			cout<<"Child class function "<<endl;
		}	
};

int main()
{
	Vehical *bptr;
	Bike b;
	bptr=&b;
	bptr->display();
	bptr->show();	
//	b.display();
//	b.getMessage();
	return 0;
}
