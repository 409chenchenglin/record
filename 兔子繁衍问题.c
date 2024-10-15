#include<stdio.h>
int main()
{
	int f1,f2;
	f1=1,f2=2;
	int n,sum,cnt;
	scanf("%d",&n);
	if(n==1){
		cnt=1;
	}else{
		cnt=3;
		for(sum=2;sum<n;cnt++){
			sum=f1+f2;
			f1=f2;
			f2=sum;
		}
	}
	printf("%d",cnt);
	return 0;	
}
