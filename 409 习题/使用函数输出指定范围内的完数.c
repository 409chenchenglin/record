#include<stdio.h>
int factorsum(int number);
int main()
{
	int x,i,m,n;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++){;
		if(i==factorsum(i)){
			printf("%d ",i);
		}
	}
	return 0;
}

int factorsum(int number)
{
	int sum=0,i;
	
		for(i=1;i<number;i++)
		{
			if(number%i==0){
				sum=sum+i;
			}
		}
	return sum;
}
