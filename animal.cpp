#include<iostream>
using namespace std;

class Animal
{
	private:
		string specification;
		int noOfLegs;
	public:
		void setSpecification(string s);
		void setNoOfLegs(int l);
		string getSpecification();
		int getNoOfLegs();
		void display();
};

void Animal :: setSpecification(string s)
{
	specification=s;
}

void Animal :: setNoOfLegs(int l)
{
	noOfLegs=l;
}

string Animal :: getSpecification()
{
	return specification;
}
int Animal :: getNoOfLegs()
{
	return noOfLegs;
}

void Animal :: display()
{
	cout<<"Welcome to Zoo park::"<<endl;
	cout<<"specification :: "<<specification<<"\n";
	cout<<"Number of legs :: "<<noOfLegs<<endl;
}

int main()
{
	Animal dog;
	dog.setSpecification("Mammal");
	//dog.getSpecification();
	dog.setNoOfLegs(4);
	//dog.getNoOfLegs();
	dog.display();
	return 0;
}
