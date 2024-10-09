#include<stdio.h>
int main()
{
	int dividend,divisor;
	int i,x,a;
	scanf("%d/%d",&dividend,&divisor);
	a=dividend;
	if(dividend>divisor){
		a=divisor;
	}	
	for(i=1;i<=a;i++){
	if(dividend%i==0&&divisor%i==0){
		x=i;
	}	
	}
	printf("%d/%d",dividend/x,divisor/x);
	
	return 0;
 } 
