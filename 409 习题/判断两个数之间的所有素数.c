#include<stdio.h>
int main()
{
	int t,i,m,n;
	int isprime;
	t=0;
	scanf("%d %d",&m,&n);
	for(;m<=n;m++){
	isprime=0;
	if(m<2){
		isprime=1;
	}
		for(i=2;i<m;i++){
			 isprime=0;
				if(m%i==0){
			isprime=1;
			break;
		}
		}
			if(isprime==0){
				t=t+1;
				printf("%d  ",m); 
				if(t==10){
					printf("\n");
					t=0;
				}
			}
	}
			
			
	 return 0; 
}
