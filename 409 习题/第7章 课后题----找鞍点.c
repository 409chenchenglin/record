#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	int k,l;
	int cnt;
	int is_found=0;
	int hang_max;
	int hang=0,lie=0;
	if(n==1){
		printf("0 0");
	}else{
			for(i=0;i<n;i++)
			{
				cnt=0;
				hang_max=a[i][0]; 
				for(j=0;j<n;j++)
				{
					if(a[i][j]>hang_max)
					{
						hang_max=a[i][j]; 
						hang=i;
						lie=j;
					}	
				}
				
				for(l=0;l<n;l++)
				{
					if(hang_max>a[l][lie])
					{
						break;
					}else{
						cnt++;
					}
					
					if(cnt==n)
					{
						is_found=1;
						i=j=l=n;
						break;
					}
					
				}
				
			}
		}
	if (is_found==1)
	{
		printf("%d %d",hang,lie);
	}else if(n!=1){
		printf("NO");
	}
	return 0;
}
