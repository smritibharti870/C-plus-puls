#include<stdio.h>
int c=670;
int check(int x, int y)
{
	if(c==x*y)
	{
		return 1;	
	}
	else
	{
		return 0;
	}
}

int main()
{
	int a,b;
	printf("enter the number ::");
	scanf("%d%d",&a,&b);
	printf("before::a:%d\n, b:%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after::a:%d\n, b:%d\n",a,b);
	printf("result::%d\n",check(a,b));
	return 0;
}
