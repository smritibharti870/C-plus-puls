#include<iostream>
using namespace std;
template<class T>
void bubbleSort(T a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

int main()
{
	int a[]={3,8,1,6,10,2,23};
	int n=8;
	bubbleSort<int>(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<"bubble sort :: "<<a[i]<<endl;
	}
	return 0;
}
