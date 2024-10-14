#include<stdio.h>
#include<math.h>
int prime (int m );
int main()
{
	int i,m,n;
	int cnt=0,sum=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++){
		if(prime(i)){
			cnt++;
			sum=sum+i;
		}
	}
	printf("%d %d",cnt,sum);
	return 0;
}


int prime (int m )
{
	int isprime=1,i;
	if(m<=1){
		isprime=0;
	}
	for(i=2;i<sqrt(m)+1;i++){
		if(m%i==0&&m!=2){
			isprime=0;
			break;
		}
	}

	 return isprime; 
}
