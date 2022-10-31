#include<iostream>

using namespace std;
class Second;
class First
{
	int a;
	public:
		First(int a)
		{
			this->a=a;
			//this->b=b;
		}
		friend void findMax(First &f,Second &s);
};

class Second
{
	int b;
	public:
		Second(int b)
		{
			this->b=b;
		}
		friend void findMax(First &f,Second &s);
};

void findMax(First &f,Second &s)
{
	if(f.a>s.b)
		//l.m=l.a;
		cout<<"Max value is :: "<<f.a<<endl;
	else
		//l.m=l.b;
	cout<<"Max Value is :: "<<s.b<<endl;
}

int main()
{
	First f1(8);
	Second s1(10);
	findMax(f1,s1);
	return 0;
}
