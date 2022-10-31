#include<iostream>
using namespace std;

class Box
{
	private:
		int len,bre,hei;
	public:
		Box()
		{
			cout<<"Default Constructor.....!";
		}	
		Box(int len,int bre,int hei)
		{
			this->len-len;
			this->bre=bre;
			this->hei=hei;
		}
		int volume()
		{
			return(len*bre*hei);
		}
};

int main()
{
	Box b1(2,3,4);
	Box *boxPtr1,*boxPtr2,*boxPtr3;
	boxPtr1=&b1;
	cout<<"Volume is :: "<<boxPtr1->volume()<<"\n";
	boxPtr2=new Box(3,2,4);
	cout<<"Volume is :: "<<boxPtr2->volume()<<"\n";
	boxPtr3=new Box[2]{{1,2,3},{3,4,5}};
	cout<<"volume is :: "<<boxPtr3->volume()<<"\n";
	cout<<"volume is :: "<<(boxPtr3+1)->volume()<<"\n";
	return 0;
}
