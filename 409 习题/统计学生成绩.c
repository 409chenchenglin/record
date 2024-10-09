#include<stdio.h>
int main(){
	int i,n,b;
	double t,sum,average;
	b=0;
	sum=0;
	average=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf",&t);
		sum=sum+t;
		if(t<60){
			b++;
		}
	}
	if(n>0){
		average=sum/n;
		printf("%.2lf %d",average,b);
	}else{
		printf("0.00 0");
	}
	return 0;
}
