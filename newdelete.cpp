#include<iostream>
using namespace std;

int main()
{
	int *p=NULL;
	p=new int;
	*p=25;
	cout<<"Integer Value is :: "<<*p<<endl;
	float *f=new float(35.79);
	cout<<"Float Value is   :: "<<*f<<endl;
	int *ptr=new int[5];
	for(int i;i<5;i++)
	{
		ptr[i]=10+i;
	}
	for(int i=0;i<5;i++)
	{
		cout<<ptr[i]<<"\t";
	}
	cout<<endl;
	p=NULL;
	delete p;
	delete f;
	delete[] ptr;
	return 0;
}
