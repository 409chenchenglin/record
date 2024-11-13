#include<stdio.h>
int main()
{
	char line[80];
	char ch;
	int i;
	i=0;
	while((ch=getchar())!='\n')
	{
		line[i]=ch;
		i++;
	}
	for(i=i-1;i>=0;i--)
	{
		printf("%c",line[i]);
	}
	return 0;
 } 
