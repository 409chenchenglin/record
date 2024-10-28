#include<stdio.h>
#include<string.h> 
int main()
{
	const char *colour[]={"red","yellow","blue","black","green"};
	char ch;
	int i,c=0;
	scanf("%c",&ch);
	for(i=0;i<5;i++)
	{
//		当想比较 单给字符和字符串首字母 即第一个字符时 两种表达都行 这里 写书上的表达 
//		if(ch==colour[i][0])
		if(ch==*colour[i])
		{
			printf("%s\n",colour[i]);
			c++;
		}
	}
	if(c==0)
	{
		printf("Not Found");
	}
	return 0;
}
