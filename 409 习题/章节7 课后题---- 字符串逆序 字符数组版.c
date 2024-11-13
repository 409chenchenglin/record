#include<stdio.h>
int main()
{
	char line[80];
	gets(line);
	int i;
	for(i=0;line[i]!='\0';i++);
	for(i=i-1;i>=0;i--)
	{
		printf("%c",line[i]);
	}
	return 0;
}
