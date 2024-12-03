#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int t=n; // 临时存储n 求mask 即最高位数 
	int mask=1;
	while(d>9){
		mask*=10;
		d=d/10;
	}// 一开始mask=1 只有n大于10时才进行循环 因为 个位数对应的就是1 十位数对于10，以此类推 
	do{
		int x=n/mask; //x 依次为最高位 
		n=n%mask; //去掉最高位 
		printf("%d",x); // 顺序打印 
		if(mask>0){ //用mask作为判断条件 避免中间有0的情况  求余直接没了 
			printf(" ");
		}
		mask/=10;
	}while(mask>0); //用mask作为判断条件 避免中间有0的情况  求余直接没了 
	return 0;
}
