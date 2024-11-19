#include<stdio.h>
int main()
{
	int sn[10] = {1901,1902,1903,1904,1905,1906,1907,1908,1909,1910};
	int a[10] = {56,77,84,76,89,91,93,44,80,70};
	int i,count=0;
	for(i=0;i<10;i++)
	{
		if(a[i]<60)
		{
			printf("%d\n",sn[i]);
			count++;
		}
	}
	printf("count=%d",count);
	return 0;
}
