#include<iostream>
using namespace std;

class Student
{
	int id;
	string name;
	public:
		Student();	//default constructor
		Student(int id, string name);	//parameterized constructor
};

Student :: Student()
{
	cout<<"Default constructor invoked........\n";
}

Student :: Student(int id, string name)
{
	this->id=id;
	this->name=name;
	cout<<"Parameterized constructor invoked.......\n";
}
/*
void Student :: getDisplay()
{
	cout<<"id::"<<id<<"\n";
	cout<<"name::"<<name<<"\n";	
}
*/
int main()
{
	Student s;
	Student s1(101,"Daggubati");
	return 0;
}
