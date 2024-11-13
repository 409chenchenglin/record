#include<stdio.h>
int main()
{
	int m,n;
	int i,j,total;
	scanf("%d",&m);
	scanf("%d",&n);
	int a[m][n];
	for(i=0;i<m;i++)
	{
		total=0;
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			total+=a[i][j];
		}
		printf("%d\n",total);
	}
	
	return 0;
 } 
