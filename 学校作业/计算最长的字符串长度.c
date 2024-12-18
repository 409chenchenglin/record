#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int max_len(char *s[],int n);
int main()
{
	int n,i;
	scanf("%d",&n);
	char*str[n];
	for(i=0;i<n;i++){
		str[i]=(char*)malloc(sizeof(char)*20);
		scanf("%s",str[i]);
	}
	int ret=max_len(str,n);
	printf("%d",ret);
	return 0;
}
int max_len(char *s[],int n){
	int i;
	int index=0;
	for(i=0;i<n;i++){
		if(strlen(s[i])>strlen(s[index])){
			index=i;
		}
	}
	int ret=strlen(s[index]);
	return ret;
}

	

