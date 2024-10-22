#include<stdio.h>
int main()
{
	int n;
	char ch; 
	scanf("%d",&n);
	if(n>=90){
		ch='A';
	}else if(n>=80){
		ch='B';
	}else if(n>=70){
		ch='C';
	}else if(n>=60){
		ch='D';
	}else{
		ch='E';
	}
	printf("%c",ch);
	return 0;	
} 
