#include<iostream>
using namespace std;
template<class T>
class Calculator
{
	private:
		T n1,n2;
	public:
		Calculator(T num1, T num2)
		{
			n1=num1 ; n2=num2;
		}
		void show()
		{
			cout<<"Addition       of Two numbers :: "<<addition(n1,n2)<<endl;
			cout<<"Subtraction    of Two numbers :: "<<subtraction(n1,n2)<<endl;
			cout<<"Multiplication of Two numbers :: "<<multiplication(n1,n2)<<endl;
			cout<<"Division       of Two numbers :: "<<division(n1,n2)<<endl;
		}
		T addition(T n1,T n2)
		{
			return(n1+n2);
		}
		T subtraction(T n1,T n2)
		{
			return(n1-n2);
		}
		T multiplication(T n1,T n2)
		{
			return(n1*n2);
		}
		T division(T n1,T n2)
		{
			return(n1/n2);
		}
};

int main()
{
	Calculator<int>c1(50,20);
	Calculator<float>c2(10.5f,6.51f);
	cout<<"Integer Result is  :: "<<endl;
	c1.show();
	cout<<"Floating Result is :: "<<endl;
	c2.show();
	return 0;
}
		
