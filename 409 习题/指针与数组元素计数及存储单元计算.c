#include<stdio.h>
int main()
{
	double *p0,*p1;
	double test[2];
	p0=test;
	p1=&test[1];
	printf("%ld\n",p1-p0);
	printf("%ld\n",(p1-p0)*sizeof(test[0]));
	return 0;
}


