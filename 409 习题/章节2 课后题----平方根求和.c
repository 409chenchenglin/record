#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	double item,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		item=sqrt(i);
		sum=sum+item;
	}	
	printf("%.2lf",sum);
	return 0;
} 
