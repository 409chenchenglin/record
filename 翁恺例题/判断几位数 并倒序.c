#include<stdio.h>
int main() 
{
	int x;
	int a,t,n;
	printf("�Ǹ�����:");
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
	printf("%d��%dλ��",x,n);
	return 0;
}
