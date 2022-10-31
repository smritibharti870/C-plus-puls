#include<iostream>
using namespace std;

int area(int s)
{
	return(s*s);
}

int area(int l,int b)
{
	return(l*b);
}

float area(float b,float h)
{
	return(0.5*b*h);
}

int main()
{
	cout<<"Area of Square :: "<<area(10)<<"\n";
	cout<<"Area of Rectangle :: "<<area(5,10)<<"\n";
	cout<<"Area of Triangle :: "<<area(4.9f,7.3f)<<"\n";
	return 0;
}
