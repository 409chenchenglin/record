#include<stdio.h>
double fact(int n);
int main()
{
	int i,n;
	double sum; 
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		sum=fact(i);	
		printf("%.0lf\n",sum);
	}
		return 0;
}
double fact(int n)	{
	int i;
	double sum=1;
	for(i=1;i<=n;i++){
		sum=sum*i;
	}
	return sum;
}


