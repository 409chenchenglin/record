#include<stdio.h>
int main()
{
	char line[80];
	gets(line);
	char*p=line;
	char *q=p;
	int n;
	while(*p!='\0'){
		n=1;
		while(*p==*(p+n)){
			n++;
		}
		if(n>=10){
			*q++=(n/10)+'0';
			*q++=(n%10)+'0'; 
		}else if(n>=2){
			*q++=n+'0';
		}
		*q++=*(p+n-1);
		p=p+n;
		puts(line);
		printf("\n");
	} 
	*q='\0';
	puts(line);
}
