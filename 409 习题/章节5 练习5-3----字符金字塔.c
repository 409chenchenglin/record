#include<stdio.h>
int main()
{
	int i,n;
	int j,k,max;   
	char ch;
	scanf("%d %c",&n,&ch);
	max=2*n-1;
	for(i=1;i<=max;i=i+2)
	{
		for(j=1;j<=(max-i)/2;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("%c",ch);
		}
		printf("\n");
	}
	return 0;
}
