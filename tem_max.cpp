#include<iostream>
using namespace std;
template <class T> 
T  myMax(T a, T b)
{
	if(a>b)
		return a;
	else
		return b;
}
int main()
{
	cout<<"max value is ::"<<myMax<int>(2,8)<<endl;
	return 0;
}
