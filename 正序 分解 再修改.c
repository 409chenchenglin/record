 #include<stdio.h>
int main()
{
	
	int n,x,a;
	n=1;
	printf("输入一个正整数");
	scanf("%d",&x);
	 a=x;


 	while(a>9){
		a=a/10;
		n=n*10;
	}

	
	while(n>0){
		a=x/n;
		x=x%n;
		n=n/10;
		printf("%d",a);
		if(n>0){
			printf(" ");
		}
		
	
	}

	printf("\n");
	return 0;

}
