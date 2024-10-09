#include<stdio.h>
int main()
{
	int c;
	char ch;
	c=0;
	ch=getchar();
	while(ch!='\n'){
		if(ch!=' '){
			ch=getchar();
		}else{
		ch=getchar();
		if(ch!=' '){
			c++;
		} 
	}
}
	printf("%d",c+1);
	return 0;
}
