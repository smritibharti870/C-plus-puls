#include<iostream>
using namespace std;

class Employee
{
	int empId;
	string empName;
	public:
		Employee()
		{	
			
		}
		Employee(int empId,string empName)
		{
			this->empId=empId;
			this->empName=empName;
		}
		void setData(int empId,string empName)
		{
			this->empId=empId;
			this->empName=empName;
		}
		void displayEmpDetails()
		{
			cout<<"------------employee details ----------------\n";
			cout<<"Employee Id :: "<<empId<<endl;
			cout<<"Employee Name :: "<<empName<<endl;
		}
};

int main()
{
	int i;
	Employee E[5];
	string S[]={"Daggubati","Raju","Pravali","Bhavana","Sapna"};
	cout<<"--------------------Employee Information----------------\n";
	for(i=0;i<5;i++)
	{
		E[i].setData(i+1,S[i]);
		E[i].displayEmpDetails();
	}
	Employee E1[]={Employee(101,"Chowdary"),Employee(102,"Jhar"),Employee(103,"Kayala"),Employee(104,"Ravi"),Employee(105,"siva")};
	for(i=0;i<5;i++)
	{
		E1[i].displayEmpDetails();
	}
	return 0;
}
