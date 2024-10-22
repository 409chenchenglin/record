#include<stdio.h>
int main()
{
	int i,n;
	int j,k;
	scanf("%d",&n);
//	   题目要求空格和菱形都要
//	   由观察可知 每一行第一个菱形前的空格数加上这一行的菱形数即为输入的n值
//	   所以可以编写代码 分两次 一次从1到n 一次从n到一
//	   先循环输出空格 输完后输菱形 然后判断是否为这一行最后一个菱形 是就换行 不是就空格
	    
	for(i=1;i<=n;i=i+2){
		for(j=n-i;j>0;j--){
			printf(" ");
		}
		for(k=i;k>0;k--){
			printf("*");
			if(k==1){
				printf("\n");
			}else{
				printf(" ");
			}
		}
	}
	
	for(i=n-2;i>0;i=i-2){
		for(j=n-i;j>0;j--){
			printf(" ");
		}
		for(k=i;k>0;k--){
			printf("*");
			if(k==1){
				printf("\n");
			}else{
				printf(" ");
			}
		}
	}
	
	return 0;
}
