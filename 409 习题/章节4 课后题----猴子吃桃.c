#include<stdio.h>
int main()
{
	int i,n,sum=1;
//	逆向思维 最后一天往前推 最后一天是1个桃 已经算进去了
//	所以i要从2开始循环 
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		sum=(sum+1)*2;
	} 
	printf("%d",sum);
	return 0;
}
