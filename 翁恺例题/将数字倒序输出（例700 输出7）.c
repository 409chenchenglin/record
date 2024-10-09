#include<stdio.h>
int main()
{
	int x,a,output;
	output=0;
	printf("输入一个正整数 ");
	scanf("%d",&x);
	
	if(x==0){
		printf("0");
	}
	
	if(x<0){
		printf("错误");
	}
	
	while(x>=1){
		a=x%10;
		output=output*10+a;
		x=x/10;
	}
	printf("%d",output);
	return 0;
}
