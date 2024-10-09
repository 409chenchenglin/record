#include<stdio.h>
int main(){
	int i,n;
	double item,sum=0;
	int one=1;
	int denominator=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		item=(one*1.0)/denominator;
		sum=sum+item; 
		one=-one;
		denominator=denominator+2;
	}
	printf("%.6lf",sum);
} 
