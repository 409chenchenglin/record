#include<stdio.h>
int main()
{
	int x,a;
	printf("输入一个正整数: ");
	scanf("%d",&x);
	
	
	if(x<0){
		printf("错误");
	}
	
	
	if(x==0){
		printf("0");
	}
	
	while(x>0){
		a=x%10;
		printf("%d",a);
		x=x/10;
	}
	return 0;
	
	
}
