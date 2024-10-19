#include<stdio.h>
int main(){
	int i;
	double m,sum;
	scanf("%d",&i);
	while(i!=0){
		if(i==1){
			scanf("%lf",&m);
			sum=sum+m;
			printf("%.2lf\n",sum);
		}
		if(i==2){
			scanf("%lf",&m);
			sum=sum-m;
			printf("%.2lf\n",sum);
		}
		scanf("%d",&i);
	}
	return 0;
}
