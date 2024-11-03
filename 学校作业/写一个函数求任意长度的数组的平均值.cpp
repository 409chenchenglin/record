#include<stdio.h>
float average(float a[],int n);
int main()
{
//	int i;
	float a[10]={68,64,78,66,84,91,54,89,76,77};
//	for(i=0;i<10;i++)
//	{
//		scanf("%f",&a[i]);
//	}
	printf("average=%.1f\n",average(a,10));
	return 0;
}

float average(float a[],int n)
{
	int i;
	float sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	sum=sum/n;
	return sum;
}
