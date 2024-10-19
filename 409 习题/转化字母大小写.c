#include<stdio.h>
int main()
{
	char ch;
	ch=getchar();
	while(ch!='\n'){
	if(ch>='a'&&ch<='z'){
	   ch=ch-32;
	}else if(ch>='A'&&ch<='Z'){
		ch=ch+32; 
	}
	putchar(ch);
	ch=getchar();
	}

	return 0;
}
