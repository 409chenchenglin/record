#include<stdio.h>
int main() 
{
	int x;
	int a,n;
	scanf("%d",&x);
	if(x<0){
		x=-x;
	}
	a=x;
	n=0;
	do{
		a=a/10;
		n++;
	}while(a>0);
	
	printf("%d",n);
	return 0;
}
