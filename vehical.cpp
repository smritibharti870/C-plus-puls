#include<iostream>

using namespace std;

class Vehical
{
	//private:
	protected:
		int speed;
	public:
		void setSpeed(int speed)
		{
			this->speed=speed;
		}
	/*	int getSpeed()
		{
			return speed;
		}*/
		void display()
		{
			cout<<"Speed of vehical is : "<<speed<<endl;
		}
};

class Car:public Vehical
{
	public:
		void show()
		{
			setSpeed(121);
			//cout<<getSpeed()<<endl;
			cout<<speed<<endl;
			display();
		}	
};

int main()
{
	Car c;
	//c.setSpeed(121);
	//c.display();
	c.show();
	return 0;
}
