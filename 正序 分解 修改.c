 #include<stdio.h>
#include<math.h>
int main()
{
	
	int n,x,a,t;
	n=1;
	printf("输入一个正整数");
	scanf("%d",&x);
	 a=x;
	 if(x==0){
	printf("%d",x);
	}else{
 	while(a>9){
		a=a/10;
		n++;
	}
}
	
	while(n>0){
		t=pow(10,n-1);
		a=x/t;
		x=x%t;
		n=n-1;
		printf("%d",a);
		if(n>0){
			printf(" ");
		}
		
	
	}
//	if(n>0){
//		printf(" ");
//	}
//	while(n>0){
//		printf("0");
//		n--;
//		if(n>0){
//			printf(" ");
//		}
//	}
	printf("\n");
	return 0;

}
