#include<stdio.h>
#include<math.h>
double mypow(int n);
double reverse(int n);
int main()
{
	int n;
	scanf("%d",&n);
	if(n<0)
	{
		n=-n;
	}
	printf("%.0lf\n",mypow(n));
	printf("%.0lf",reverse(n));
	return 0;
}

double mypow(int n)
{
	double result;
	if(n==0){
		result=1;
	}else{
		result=10*mypow(n-1);
	}
	return result;
}

double reverse(int n)
{
	double result;
	if(n==1){
		result=1;
	}else if(n==0){
		result=0;
	}else{
		result=n*mypow(n-1)+reverse(n-1);
	}
	return result;
}
