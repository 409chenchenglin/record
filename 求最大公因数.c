#include<stdio.h>
int main()
{
	int x,y,a,t,n;
	printf("输入两个正整数");
	scanf("%d%d",&x,&y); 
	
	if(x>y){
		t=y;
	}else{
		t=x;
	} 
	
	for(n=1;n<=t;n++){
		if(x%n==0&&y%n==0){
			a=n;
		}
	}
	
	
	printf ("%d",a);
	return 0;
	
}
