#include<iostream>
using namespace std;
template<class T>
class Array
{
	T*ptr;
	int size;
	public:
		Array(T arr[],int s);
		void print();
};
template<class T>
Array<T>::Array(T arr[],int s)
{
	ptr=new T[s];
	size=s;
	for(int i=0;i<size;i++)
	{
		ptr[i]=arr[i];
	}
}
template<class T>
void Array<T>::print()
{
	for(int i=0;i<size;i++)
	{
		cout<<ptr[i]<<"  "<<endl;
	}
}
int main()
{
	int a[]={13,78,45,23,21};
	Array<int>a1(a,5);
	a1.print();
	return 0;	
}
