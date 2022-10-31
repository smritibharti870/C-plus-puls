#include<iostream>

using namespace std;

class Student
{
	protected:
		int rollNum;
	public:
		void setRollNum(int rollNum)
		{
			this->rollNum=rollNum;
		}
};

class Result:public Student
{
	protected:
		float sub1,sub2;
	public:
		void setSubjectMarks(float sub1,float sub2)
		{
			this->sub1=sub1;
			this->sub2=sub2;
		}
		void display();
};

class Result:public Test
{

	float total;
	public:
		void calculateTotal()
		{
			total=sub1+sub2;
		} 
		void display();
};

void Result::display()
{
	cout<<"----------------Student details-------------"<<endl;
	cout<<"Roll Num :: "<<rollNum<<endl;
	cout<<"Student Mark1 :: "<<sub1<<endl;
	cout<<"Student Mark2 :: "<<sub2<<endl;
	cout<<"Total Marks :: "<<total<<endl;
}
int main()
{
	Result r;
	r.setRollNum(31);
	r.setSubjectMarks(78,79);
	r.calculateTotal();
	r.display();
	return 0;
}
