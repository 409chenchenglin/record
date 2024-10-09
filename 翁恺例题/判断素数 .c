#include<stdio.h>
int main()
{
	int i,x;
	int isprime=1;
	printf("输入一个正整数:");
	scanf("%d",&x);
	if(x<=1){
		isprime=0;
	}
	for(i=2;i<x;i++){
		if(x%i==0){
			isprime=0;
			break;
		}
		}
			if(isprime==0){
				printf("N0!"); 
			}else{
				printf("YES");
			
			} 
	 return 0; 
}
