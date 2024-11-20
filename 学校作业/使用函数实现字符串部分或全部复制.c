#include<stdio.h>
void strmepy(char*s,char*t,int m);
int main()
{
	char ch,t[70],s[70];
	int i=0;
	while((ch=getchar())!='\n')
	{
		t[i]=ch;
		i++;
	}
	t[i]='\0';
	int m;
	scanf("%d",&m);
	strmepy(s,t,m);
	return 0;
 } 
 
void strmepy(char*s,char*t,int m)
{
	int i=m-1;
	int cnt=0;
	while(t[i]!='\0')
	{
		s[cnt]=t[i];
		printf("%c",s[cnt]);
		cnt++;
		i++;
	}
	s[cnt]='\0';
}
