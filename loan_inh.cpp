#include<iostream>

using namespace std;

class Loan
{
	protected:
		string accountNumber;
		int tenure;
		double principal;
		float interestRate;
	public:
		void setData(string accountNumber,int tenure,double principal,float interestRate)
		{
			this->accountNumber=accountNumber;
			this->tenure=tenure;
			this->principal=principal;
			this->interestRate=interestRate;	
		}
		double calculateEMI()
		{
			double simpleInterest=(principal*interestRate*tenure)/100;
			double emi=(principal+simpleInterest)/tenure;
			cout<<"EMI is :: "<<emi<<endl;
		}
};

class HomeLoan:public Loan
{
	
	public:
		void display()
		{
			calculateEMI();
		}
};

int main()
{
	HomeLoan l;
	l.setData("Accd543219",100,20000,2);
	l.display();
	return 0;
}
