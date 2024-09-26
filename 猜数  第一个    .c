#include<stdio.h>
int main()
{
	int x,i;
	int a=665;
	scanf("%d",&x);
	for(i=1;x!=a;i++){
		if(x>a){
			printf("猜大了\n");
		}else {
			printf("猜小了\n");
	}
	scanf("%d",&x); 
	}
	printf("right\n");
	printf("次数为%d",i);
	return 0;
} 
