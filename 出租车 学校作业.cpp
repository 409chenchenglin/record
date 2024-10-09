#include<stdio.h>
int main()
{
	int n,t,m;
	scanf("%d%d",&n,&t);
	if(n<=3){
	m=10;
	}
	if(n>3&&n<13){
	m=10+(n-3)*2;
	}
	if(n>13){
			m=30+(n-13)*3;
	}
	t=t/5;;
	m=m+t*2;
	printf("%.0d",m);
	return 0;
 } 
