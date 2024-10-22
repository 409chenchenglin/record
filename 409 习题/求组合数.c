#include<stdio.h>
double fact(int x);
int main()
{
	int n,m;
	double  result; 
	scanf("%d%d",&m,&n);
	result=fact(n)/(fact(m)*fact(n-m));
	printf("%.0lf\n",result);
	return 0;
}
double fact(int x)
{
	int i;
	double factor=1;
	for(i=1;i<=x;i++)
	{
		factor=factor*i;
	}
	return factor;
}
