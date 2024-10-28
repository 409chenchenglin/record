#include<stdio.h>
#include<string.h>
char* match(char *s,char ch);
int main()
{
	char ch;
	char string[80];
	scanf("%s80",string);
	scanf(" %c",&ch);	
	if(match(string,ch)==NULL)
	{
		printf("Not Found");
	}else{
		printf("%s",match(string,ch));
	}
	return 0;
}

char* match(char *s,char ch)
{
	char *p=strchr(s,ch);
	return p;
}
