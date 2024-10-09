#include<stdio.h>
#include<math.h>
int main(){
	int i=1;
	double n,item=1,pi=0;
 	double one=1;
	int denominator=1;
	scanf("%lf",&n);
	while(fabs(item)>=n){
		pi=pi+item; 
		one=-one;
		denominator=denominator+2;
		item=(one*1.0)/denominator;
		i++;
	}
	pi=pi+item;
	pi=pi*4;
	printf("%.4lf\n",pi);
	printf("%d",i);
} 
