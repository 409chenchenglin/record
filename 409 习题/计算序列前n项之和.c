#include<stdio.h>
int main()
{
	int fenmu=1;
	double fenzi=1.0,item,sum;
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		item=fenzi/fenmu;
		sum=sum+item;
		fenmu++;
	} 
	printf("%.2lf",sum);
	return 0;
}
