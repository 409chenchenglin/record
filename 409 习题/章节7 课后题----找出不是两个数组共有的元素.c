#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]); 
	}
	
	scanf("%d",&m);
	int b[m];
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]); 
	}

	int j,is_dengyu;

		for(i=0;i<n;i++)
		{
			is_dengyu=0;
			for(j=0;j<m;j++)
			{
				if(a[i]==b[j])
				{
					is_dengyu=1;
					break;
				}
			}
			if(is_dengyu==0)
			{
				printf("%d ",a[i]);
			}
		}
		
		for(i=0;i<m;i++)
		{
			is_dengyu=0;
			for(j=0;j<n;j++)
			{
				if(b[i]==a[j])
				{
					is_dengyu=1;
					break;
				}
			}
			if(is_dengyu==0)
			{
				printf("%d ",b[i]);
			}
		}
	return 0;
}
