#include<iostream>
using namespace std;

class Student
{
	string name;
	int age;
	static int count;
	public:
		void setData(string name, int age)
		{
			this->name=name;
			this->age=age;
		}
		static void counter()
		{
			count++;
		}
		void display()
		{
			cout<<"---------Student details-------\n";
			cout<<"Name 			 :: "<<name<<"\n";
			cout<<"Age                       :: "<<age<<"\n";
			cout<<"Total count of student is :: "<<count<<"\n";
		}
};
int Student :: count=0;
int main()
{
	Student s1,s2,s3;
	s1.setData("Smriti",24);
	Student::counter();
	s1.display();
	s2.setData("Bharti",23);
	Student::counter();
	s2.display();
	s3.setData("Modi",25);
	Student::counter();
	s3.display();
	return 0;
}
