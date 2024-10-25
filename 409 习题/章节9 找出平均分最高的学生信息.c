#include<stdio.h>
struct information{
	int number;
	char name[10];
	int math;
	int english;
	int pc;
	double average;
}i1,i2;
int main()
{
	int i,n;
	double average,temp;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %s %d %d %d",&i1.number,&i1.name,&i1.math,&i1.english,&i1.pc);
		i1.average=(i1.english+i1.math+i1.pc)/3.0;
		if(i==1)
		{
			i2=i1;
		}else if(i1.average>i2.average)
		{
			i2=i1;
		}
	}
	printf("num:%d, name:%s, average:%.2lf",i2.number,i2.name,i2.average);
	return 0;
} 
