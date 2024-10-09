#include<stdio.h>
int main()
{
	int n,x,a;
	n=1;
	printf("输入一个正整数");
	scanf("%d",&x);
	 a=x;
	while(a>9){
		a=a/10;
		n++;
	}
	printf("%d是%d位数",x,n);
	return 0;
}
