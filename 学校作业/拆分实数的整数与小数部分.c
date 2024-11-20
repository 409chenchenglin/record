#include<stdio.h>
void splitloat(float x,int* intpart,float*fracpart);
int main()
{
	float x;
	scanf("%f",&x);
	int*intpart;
	float*fracpart;
	splitloat(x,intpart,fracpart);
	return 0;
}

void splitloat(float x,int* intpart,float*fracpart)
{
	int temp=x*1;
	intpart=&temp;
	float test;
	test=x-temp;
	fracpart=&test;
	printf("The intpart is :%d\n",*intpart);
	printf("The fracpart is :%f\n",*fracpart);
}
