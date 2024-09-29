#include<stdio.h>
int main(){
	int n,i;
	int t,x;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
//		t=i; 可简化 
		x=1;
//		while(t>=1) 可简化  利用x=1，从一到i 判断循环次数 
		while(x<=i){
			printf("%d*%d=%d",x,i,x*i);
			if(x*i>9){
				printf("  ");
			}else{
				printf("   ");
			}
			t--;
			x++;
//			if(t==0){  
//				printf("\n"); 可简化 利用循环结束 输出换行 
//			}
			
		}
			printf("\n");
	}
	return 0;
}
