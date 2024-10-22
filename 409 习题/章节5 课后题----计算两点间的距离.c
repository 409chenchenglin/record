#include<stdio.h>
#include<math.h>
double distance( int a,int b,int c, int d);
int main()
{
	int x1,y1,x2,y2;
	double result;
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	result=distance(x1,y1,x2,y2);
	printf("%.2lf\n",result);
	return 0;
}

double distance( int a,int b,int c, int d)
{
	double temp,ret;
	temp=pow(a-c,2)+pow(b-d,2);
	ret=sqrt(temp);
	return ret;
}
