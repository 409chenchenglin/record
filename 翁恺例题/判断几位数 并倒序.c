#include<stdio.h>
int main() 
{
	int x;
	int a,t,n;
	printf("非负整数:");
	scanf("%d",&x);
	a=x;
	n=0;
	do{
		t=a%10;
		a=a/10;
		n++;
		printf("%d ",t);	
	}while(a>0);
	printf("\n");
	printf("%d是%d位数",x,n);
	return 0;
}
