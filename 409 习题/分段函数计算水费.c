#include<stdio.h>
int main()
{
	double x,y;
	scanf("%lf",&x);
	if(x<0){
		y=0.00;
		printf("f(%.2lf) = %.2lf",x,y);
	}else if(x<=15){
		y=(4.0*x)/3.0;
		printf("f(%.2lf) = %.2lf",x,y);
	}else{
		y=2.5*x-10.5;
		printf("f(%.2lf) = %.2lf",x,y);
	}
	return 0;
}
