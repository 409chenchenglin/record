#include<stdio.h>
int main()
{
	int i,x;
	int isprime=1;
	printf("����һ��������:");
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
