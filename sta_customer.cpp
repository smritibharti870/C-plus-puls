#include<iostream>
using namespace std;

class Customer
{
private:
	string customerId,customerName,address;
	long contactNumber;
	double totalCost;
	float billPay;
	static float deliveryCharges;
	public:
		void setData(string customerId,string customerName,string address,long contactNumber,double totalCost)
		{
			this->customerId=customerId;
			this->customerName=customerName;
			this->address=address;
			this->contactNumber=contactNumber;
			this->totalCost=totalCost;
		}
		static void billpay(float billPay)
		{
			billPay=totalCost+deliveryCharges;
		}
		void display()
		{
			cout<<"---------Customer details-------\n";
			cout<<"Customer Id             :: "<<customerId<<"\n";
			cout<<"Customer Name           :: "<<customerName<<"\n";
			cout<<"Customer Address        :: "<<address<<"\n";
			cout<<"Customer contact Number :: "<<contactNumber<<"\n";
			cout<<"Product of the cost     :: "<<totalCost<<"\n";
			cout<<"Delivery Charges        :: "<<deliveryCharges<<"\n";
			cout<<"Total Billpay           :: "<<billPay<<"\n";
		}
};
int Customer :: deliveryCharges=27.75;
int main()
{
	Customer c1,c2,c3;
	c1.setData("95757","krishn","rajpalya",9134567890,450.98);
	Customer::billPay();
	c1.display();
	c2.setData("47647","neha","hoodi",9876543210,650.87);
	Customer::billPay();
	c2.display();
	c3.setData("86868","rita","esi",9897657432,100.76);
	Customer::billPay();
	c3.display();
	return 0;
}
