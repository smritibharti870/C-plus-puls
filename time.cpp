#include<iostream>

using namespace std;

class Time
{
	//protected:
		int hrs, mins;
	public:
		void setData(int hrs, int mins)
		{
			this->hrs=hrs;
			this->mins=mins;
		}
		void display()
		{
			cout<<" "<<hrs<<" hrs"<<" "<<mins<<" min"<<endl;

		}
		Time operator+(Time & t);
		
		void normalize()
		{
			hrs = hrs+mins / 60;
			mins = mins % 60;
		}
};		
Time  Time:: operator+(Time &t)
{
        Time temp;
	temp.hrs=hrs+t.hrs;
       // temp.mins=mins+t.mins;
	temp.mins=mins+t.mins;
	temp.normalize();
        return(temp);
}		
int main()
{
	Time t1,t2,t3;
	cout<<"Enter the time T1 : ";
	t1.setData(11,56);
	t1.display();
	cout<<"Enter the time T2 : ";	
	t2.setData(3,6);
	t2.display();
	cout<<"After Addition T3 : ";
	t3=t1+t2;  //t3=t1.operator+(t2)
	t3.display();
	return 0;
}
