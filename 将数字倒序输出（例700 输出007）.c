#include<stdio.h>
int main()
{
	int x,a;
	printf("����һ��������: ");
	scanf("%d",&x);
	
	
	if(x<0){
		printf("����");
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
