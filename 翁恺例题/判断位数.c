#include<stdio.h>
int main()
{
	int n,x,a;
	n=1;
	printf("����һ��������");
	scanf("%d",&x);
	 a=x;
	while(a>9){
		a=a/10;
		n++;
	}
	printf("%d��%dλ��",x,n);
	return 0;
}
