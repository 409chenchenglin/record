#include<stdio.h>
#include<string.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	char str[n][80];
	char min[80];
	for(i=0;i<n;i++)
	{
		scanf("%79s",str[i]);
//		printf("%s\n",str[i]);
		if(i==0)
		{
			strcpy(min,str[0]);
		}else if(strcmp(str[i],min)<0){
			strcpy(min,str[i]);
		}
	}
	printf("min is %s",min);
	return 0;
} 
