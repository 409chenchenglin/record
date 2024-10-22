#include<stdio.h>
int main()
{
	int a,b,c;
	int temp;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		temp=b;
		b=a;
		a=temp;
	}
	if(a>c)
	{
		temp=c;
		c=a;
		a=temp;
	}
	if(b>c)
	{
		temp=b;
		b=c;
		c=temp;
	}
	printf("%d %d %d\n",a,b,c);
	return 0;
}
