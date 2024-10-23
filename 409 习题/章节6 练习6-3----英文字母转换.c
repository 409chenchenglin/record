#include<stdio.h>
int main()
{
	char ch;
	while((ch=getchar())!=EOF)
	{
		if(ch>='a'&&ch<='z')
		{
			if(ch=='z'){
				ch='A';
			}else{
			ch=ch-32+1;
			}
			printf("%c",ch);
		}else if(ch>='A'&&ch<='Z')
		{
			if(ch=='Z'){
				ch='a';
			}else{
			ch=ch+32+1;
			}
			printf("%c",ch);
		}else{
			printf("%c",ch);
		}
	}
	return 0;
}
