#include<stdio.h>
int main()
{
	int n;
//	从m米高空落下 反弹n次 
	int i; 
	double m,heigh_sum,x;
	scanf("%lf %d",&m,&n);
	heigh_sum=m;
// 在反弹前有一个下落 先把下落的距离加上
// 然后再另算 反弹的 距离 
// 然后1个反弹有上下两个过程 每个为上一次 反弹前高度一半 合起来就是反弹前的高度 
//所以先加上次的高度后 再将高度除以2 
	for(i=1;i<=n;i++){
		heigh_sum=heigh_sum+m;
		m=m/2;
	}
	printf("%.1lf %.1lf",heigh_sum,m);
} 
