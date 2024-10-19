#include<stdio.h>
#include<math.h>
double area (double x,double y,double z);
int main()
 {
 	double sum;
 	double a1,a2,a3,a4,a5,a6,a7;
 	scanf("%lf %lf %lf %lf %lf %lf %lf",&a1,&a2,&a3,&a4,&a5,&a6,&a7);
 	sum=area(a1,a5,a6)+area(a4,a7,a6)+area(a2,a3,a7);
 	printf("%.2lf",sum);
 	return 0;
 }
 
 double area (double x,double y,double z)
 {
 	double temp,c,ret;
 	c=x+y+z;
 	temp=c/2;
 	ret=sqrt(temp*(temp-x)*(temp-y)*(temp-z));
 	return ret;
 }
