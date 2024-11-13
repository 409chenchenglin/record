#include<stdio.h>
int main()
{
	int cnt=0;
	char ch;
	while((ch=getchar())!='\n')
	{
		if(ch>='A'&&ch<='Z'&&ch!='A'&&ch!='E'&&ch!='I'&&ch!='O'&&ch!='U')
		{
			cnt++;
		 } 
	}
	printf("%d",cnt);
	return 0;
 } 
