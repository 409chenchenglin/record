#include<stdio.h>
int main()
{
	int a[10]={61,70,64,88,12,65,-76,100,-45,13};
	int i,j,temp;
	for(i=0;i<10-1;i++)
	{
//¼ÇµÃÊÇ-1-i 
		for(j=0;j<10-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp; 
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
