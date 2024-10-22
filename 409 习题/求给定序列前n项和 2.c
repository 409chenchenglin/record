#include<stdio.h>
int main()
{
	int fenmu=1,zhengfu=1;
	double fenzi=1.0,item,sum;
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		item=zhengfu*fenzi/fenmu;
		sum=sum+item;
		zhengfu=-zhengfu;
		fenmu+=3;
	} 
	printf("%.2lf",sum);
	return 0;
}
