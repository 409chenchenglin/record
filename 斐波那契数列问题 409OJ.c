#include<stdio.h>
int main() 
{
	int i,c=0,n;
	int f1,f2,fx;
	f1=1,f2=1,fx=1;
	scanf("%d",&n);
	if(n<=0){
		printf("Invalid.");
	}else{
	for(i=1;i<=n;i++){
		if(i>=3){
			fx=f1+f2;
			f1=f2;
			f2=fx;
		}
		printf("%d ",fx);
		c++;
		if(c==5){
			printf("\n");
			c=0;
		}
	}
	
 	}
	return 0;
}
