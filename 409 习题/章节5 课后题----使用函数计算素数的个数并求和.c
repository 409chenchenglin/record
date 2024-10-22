#include<stdio.h>
int prime(int n);

int main()
{
	int i,m,n;
// 题目已经规定m n 均要大于0 
	int cnt=0,sum=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
			if(prime(i)){
				cnt++;
				sum=sum+i;
			}
	}
	printf("%d %d\n",cnt,sum);
}

int prime(int n)
{
	int isprime=1;
	int i;
	for(i=2;i<n;i++){
		if(n%i==0){
			isprime=0;
		}
	} 
	return isprime;
}
