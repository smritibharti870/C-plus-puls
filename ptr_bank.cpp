#include<iostream>
using namespace std;

class Bank
{
	//private:
		string accountHolderName;
		int balance;
		static float rateOfIntrest;
	public:
		void setData(string accountHolderName,int balance)
		{
			this->accountHolderName=accountHolderName;
			this->balance=balance;
		}
		void display()
		{
			cout<<"\n--------------Account Details-----------\n";
			cout<<"Account Holder Name :: "<<accountHolderName<<"\n";
			cout<<"Balance In Account  :: "<<balance<<"\n";
			cout<<"Rate of Intrest     :: "<<rateOfIntrest<<"\n";
		}
		/*void display()
		{
			cout<<"\n-------------Deposit Details --------------\n";
			cout<<"Account Holder Name :: "<<accountHolderName<<"\n";
			cout<<"Balance In Account :: "<<balance<<"\n";
		}*/
		void withdraw(int amount)
		{
			if(balance>=amount)
			{
				balance=balance-amount;	
			}
			else
			{
				cout<<"Not sufficient balance to withdraw";
			}
		}
		void deposit(int amount);
};
float Bank :: rateOfIntrest=7.2;
void Bank :: deposit(int amount)
{
	balance=balance+amount;
}

int main()
{
	Bank b1,b2,b3;
	string name;
	int b;
	cout<<"Enter account holder name :: ";
	cin>>name;
	cout<<"Enter Amount :: ";
	cin>>b;
	b1.setData(name,b);
	b1.deposit(40000);
	b1.display();
	b1.withdraw(10000);
	b1.display();
	b2.setData("Smriti",50000);
	b2.deposit(40000);
	b2.display();
	b2.withdraw(10000);
	b2.display();
	b3.setData("Bharti",40000);
	b3.deposit(40000);
	b3.display();
	b3.withdraw(10000);
	b3.display();
	return 0;
}
