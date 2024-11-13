#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	getchar();
	int i=0;
	char temp,line[80];
	while((temp=getchar())!='\n')
	{
		line[i]=temp;
		i++;
	}
	int j,index=-1;
	for(j=0;j<i;j++)
	{
		if(ch==line[j])
		{
			index=j;
		}
	}
	if(index==-1)
	{
		printf("Not Found");
	}else{
		printf("%d",index);
	}
	return 0;
}
