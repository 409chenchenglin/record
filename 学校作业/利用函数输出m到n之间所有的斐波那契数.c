#include<stdio.h>
int fib(int n);
int main()
{
	int i,m,n;
	scanf("%d %d",&m,&n);
	
	for(i=1;fib(i)<=n;i++){
		if(fib(i)>=m&&fib(i)<=n){
		printf("%d ",fib(i));
		}
	}
	return 0;
}

int fib(int n)
{
	int i,f1=1,f2=1,fx=1;
	if(n>=3){
		for(i=3;i<=n;i++){
			fx=f1+f2;
			f1=f2;
			f2=fx;
		}
	}
	return fx;
}
