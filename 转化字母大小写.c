#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	getchar();
	while(ch!='\n')
	{
		if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
		if(ch>='a'&&ch<='z'){
			printf("%c",ch-32);
	}
		
		if(ch>='A'&&ch<='Z'){
		printf("%c",ch+32); 
	}
}else{
	printf("%c",ch);
}
	scanf("%c",&ch);
}
	return 0;
}
