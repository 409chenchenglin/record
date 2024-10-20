#include<stdio.h>
#include<math.h>
int main() 
{
	int i=0,cnt=0,n,m;
	scanf("%d",&n);
	if(n==1||n==2||n%4==0){
	printf("1");
	}else{
		for(i=1;pow(2,i)<n;i++){
			cnt++;
			m=n-pow(2,i);
		}
		printf("%d",2*m+1);
	}
	return 0;
}
