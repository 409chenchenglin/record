#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sum=0,i,n;
	scanf("%d",&n);
	int *t=(int*)malloc(n*sizeof(n+1));
	for(i=0;i<n;i++){
		scanf("%d",&t[i]);
		sum=sum+t[i];
	}
	free(t);
	printf("The sum is %d",sum);
	return 0;
} 
