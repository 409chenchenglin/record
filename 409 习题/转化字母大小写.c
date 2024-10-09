#include<stdio.h>
int main()
{
	char ch;
	int j;
	scanf("%c",&ch);
	while(ch!='\n'){
	j=1;
	if(ch>='a'&&ch<='z'){
	   printf("%c",ch-32);
	   j=0;
	}else if(ch>='A'&&ch<='Z'){
		printf("%c",ch+32); 
		j=0;
	}

    if(j==1){
	printf("%c",ch);
	}

	scanf("%c",&ch);
	}
	return 0;
}

