#include<stdio.h>
int fact(int n);
int main()
{
	int i,n;
	int sum=0; 
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+fact(i);	
		}
		printf("%d",sum);
		return 0;
}
int fact(int n)	{
	int i;
	int sum=1;
	for(i=1;i<=n;i++){
		sum=sum*i;
	}
	return sum;
}


