#include<stdio.h> 
int main()
{
	int speed,limit;
	scanf("%d %d",&limit,&speed);
	if(speed>=limit*1.1&&speed<limit*1.5){
		printf("����200Ԫ") ;
	}else if(speed>=limit*1.5){
		printf("������ʻ֤");
	}else if(speed<limit*1.1){
		printf("δ����") ; 
	}
	return 0;
} 
