#include<stdio.h>
int main()
{
	double a,b;
	double c,d;
	scanf("%lf %lf",&a,&b);
	scanf("%lf %lf",&c,&d);
	printf("%.2lf+%.2lfi\n",a+c,b+d);
	printf("%.2lf+%.2lfi",a*c-b*d,a*d+b*c);
	return 0;
}
