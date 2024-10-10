#include<stdio.h>
double fact(int n);
int main()
{
	int i,n;
	int result;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		result=fact(i);
		printf("%d! = %d\n",i,result);
	}
	
	return 0;
} 

double fact(int n){
	int i;
	double result=1;
	for(i=1;i<=n;i++){
		result=result*i;
	}
	return result;
}
