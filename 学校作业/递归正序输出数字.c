#include<stdio.h>
void shuxu(int n,int i);
int main()
{
	int n;
	scanf("%d",&n);
	int t=n;
	int i=1;
	while(t>9){
		i=i*10;
		t/=10;
	}
	shuxu(n,i);
	return 0;
}
void shuxu(int n,int i)
{
	if(i<10){  // 这里也要用 i 即位数来表示  不然中间有零 一取余又白给 
		printf("%d",n);
	}else{
		printf("%d ",n/i);
		shuxu(n%i,i/10);
	}
}
