#include<stdio.h>
int main()
{
	int i,n;
	long sum=0;
	scanf("%d",&n); 
	int number[n];
	for(i=0;i<n;i++){
		scanf("%d",&number[i]);
		sum=sum+number[i];
	}
	printf("calculated by array, sum = %ld\n",sum);
	sum=0;
	int *p=number;
	for(i=0;i<n;i++){
		sum=sum+*p++;
	}
	printf("calculated by pointer, sum = %ld\n",sum);
	return 0;
}
