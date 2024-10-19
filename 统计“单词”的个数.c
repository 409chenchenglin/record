#include<stdio.h>
int main()
{
	char ch;
	int word,cnt;
	word=cnt=0;
	while((ch=getchar())!='\n'){
		if(ch==' '){
		word=0;
		}else if(word==0){
		word=1;
		cnt++;
		}
	}
	printf("%d\n",cnt);
	return 0;
}
