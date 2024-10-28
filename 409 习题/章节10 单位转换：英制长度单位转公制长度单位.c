#include<stdio.h>
#define Miles__meter 1609
#define Feet__cm 30.48
#define Inches__cm 2.54
int main()
{
	double miles,feet,inches;
	scanf("%lf %lf %lf",&miles,&feet,&inches);
	printf("%.6lf\n",miles*Miles__meter);
	printf("%.6lf\n",feet*Feet__cm);
	printf("%.6lf\n",inches*Inches__cm);
	return 0;
} 
