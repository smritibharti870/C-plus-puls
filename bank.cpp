#include<iostream>
using namespace std;

class Bank
{
	//private:
		string accountHolderName;
		int balance;
	public:
		void setData(string name,int b)
		{
			accountHolderName=name;
			balance=b;
		}
		void display1()
		{
			cout<<"\n--------------Withdraw Details-----------\n";
			cout<<"Account Holder Name :: "<<accountHolderName<<"\n";
			cout<<"Balance In Account :: "<<balance<<"\n";
		}
		void display()
		{
			cout<<"\n-------------Deposit Details --------------\n";
			cout<<"Account Holder Name :: "<<accountHolderName<<"\n";
			cout<<"Balance In Account :: "<<balance<<"\n";
		}
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
		void deposit(int amount)	
		{
			balance=balance+amount;
		}
};

int main()
{
	Bank b1;
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
	b1.display1();
	return 0;
}
