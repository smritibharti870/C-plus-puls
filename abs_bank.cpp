#include<iostream>

using namespace std;

class Bank	//abstract class
{
	public:
		//pure virtual function
		virtual float getRateOfInterest()=0;//abstract function
};	

class ICICI:public Bank
{
	public:
		float getRateOfInterest()
		{
			return 7.6;
		}
};

class SBI:public Bank
{
	public:
		float getRateOfInterest()
		{
			return 8.2;
		}
};

class HDFC:public Bank
{
	public:
		float getRateOfInterest()
		{
			return 7.8;
		}
};

int main()
{
	Bank *bptr1,*bptr2,*bptr3;
	SBI s;
	ICICI i;
	HDFC h;
	bptr1=&s;
	bptr2=&i;
	bptr3=&h;
	cout<<"Rate of Interest of SBI   :: "<<bptr1->getRateOfInterest()<<endl;
	cout<<"Rate of Interest of ICICI :: "<<bptr2->getRateOfInterest()<<endl;
	cout<<"Rate of Interest of HDFC  :: "<<bptr3->getRateOfInterest()<<endl;
	
	return 0;
}
