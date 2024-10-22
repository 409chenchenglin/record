#include<stdio.h> 
int main()
{
	int speed,limit;
	scanf("%d %d",&limit,&speed);
	if(speed>=limit*1.1&&speed<limit*1.5){
		printf("罚款200元") ;
	}else if(speed>=limit*1.5){
		printf("吊销驾驶证");
	}else if(speed<limit*1.1){
		printf("未超速") ; 
	}
	return 0;
} 
