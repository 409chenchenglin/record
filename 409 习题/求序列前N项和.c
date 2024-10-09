#include<stdio.h>
int main()
{
	int i,n;
	double denominator,numerator;
	double intermediate;
	denominator=1;
	numerator=2;
	double item,sum; 
	sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		item=1.0*numerator/denominator;
		intermediate=denominator+numerator;
		denominator=numerator;
		numerator=intermediate;
		sum=sum+item;
	}
	printf("%.2lf",sum);
	return 0;
 } 
