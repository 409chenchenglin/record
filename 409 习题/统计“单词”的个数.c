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
	if(c!=0){
		printf("%d",c+1);
	}else{
		printf("%d",c);
	}
	return 0;
}
