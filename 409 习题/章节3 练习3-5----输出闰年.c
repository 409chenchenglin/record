#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=2000;i<=n;i++){
		if((i%4==0&&i%100!=0)||i%400==0){
			printf("%d ",i);
		}
	}
	return 0;
}
