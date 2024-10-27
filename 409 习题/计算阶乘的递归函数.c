#include<stdio.h>
double fact(int n);
int main()
{
	int n;
	double sum;
	scanf("%d",&n);
	sum=fact(n);
	printf("%lf",sum);
	return 0;
}

double fact(int n)
{
	double result;
	if(n==0||n==1){
		result=1;	
	}else{
		result=n*fact(n-1); 
	}
	return result;
}
