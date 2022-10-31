#include <iostream>

using namespace std;

class Time
{
    private:
        int hrs,mins;
    public:
        Time(int hrs,int mins)
        {
            this->hrs=hrs;
            this->mins=mins;
        }
        void display()
        {
            cout<<" "<<hrs<<" hrs"<<" "<<mins<<" mins"<<endl;
        }
        void operator--();
        void operator++();
};

void Time::operator--()
{
    hrs=--hrs;
    mins=--mins;
}

void Time::operator++()
{
    hrs=++hrs;
    mins=++mins;
}

int main()
{
    Time t1(5,56);
    cout<<"Enter the time : "<<endl;
    t1.display();
    ++t1;  
    cout<<"After increment : "<<endl;
    t1.display();
    --t1;
    --t1;
    	cout<<"After decrement : "<<endl;
    	t1.display();
	//--t1;
	//cout<<"After decremnent : "<<endl;
	//t1.display();
    return 0;
}
