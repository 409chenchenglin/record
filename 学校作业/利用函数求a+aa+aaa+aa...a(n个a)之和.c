#include<stdio.h>
#include<math.h>
int fn(int a,int n);
int main()
{
	int i,a,n,sum;
	sum=0;
	scanf("%d %d",&a,&n);
	for(i=1;i<=n;i++){
		sum=sum+fn(a,i);
	}
	printf("%d\n",sum);
	return 0;
}

int fn(int a,int n){
	int i,t,sum=0;
	for(i=1;i<=n;i++){
		t=a*pow(10,i-1);
		sum=sum+t;
	}
	return sum;
}
