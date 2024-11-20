#include<stdio.h>
void splitloat(float x,int* intpart,float*fracpart);
int main()
{
	float x;
	scanf("%f",&x);
	int intpart;
	float fracpart;
	splitloat(x,&intpart,&fracpart);
	return 0;
}

void splitloat(float x,int* intpart,float*fracpart)
{
	*intpart=x;
	*fracpart=x-*intpart; 
	printf("The intpart is :%d\n",*intpart);
	printf("AI");
	printf("The fracpart is :%f\n",*fracpart);
}
