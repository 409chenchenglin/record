#include<stdio.h>
int main()
{
	int i,n,s;
	int t;
	scanf("%d",&t);
	for(i=4;i>0;i--){
		for(n=4;n-i>0;n--){
			printf(" ");
		}
		for(s=i;s>0;s--){
			printf("*");
			if(s>1){
				printf(" ");
			}else{
				printf("\n");
			}
		}
	}
	return 0;
}
