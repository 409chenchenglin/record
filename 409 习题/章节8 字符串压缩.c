#include<stdio.h>
int main()
{
	int i=0,n,cnt=1;
	char string[80];
	while((string[i]=getchar())!='\n')
	{
		i++;
	}
	string[i]='\0';
	printf("%d\n",i);
	for(n=1;n<=i;n++)
	{
		if(string[n]!=string[n-1])
		{
			if(cnt==1){
			printf("%c",string[n-1]);
			}else{
				printf("%d%c",cnt,string[n-1]);
			}
			cnt=1;
		}else{
			cnt++;
		}
		
	}
	return 0;
}
