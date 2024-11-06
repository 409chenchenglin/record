#include<stdio.h>
int panduan(int n);
int main()
{
	int i,n;
	int sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%10==0){
			sum=sum+i;
		}else if(panduan(i)){
			sum=sum+i;
		}
	}
	printf("%d",sum);
	return 0;
}
 
int panduan(int n)
{
	int temp,i=0;
	do{
		temp=n%10;
		if(temp==2||temp==1||temp==9){
			i=1;
			break; 
		}
		n=n/10;
	}while(n>0);
	return i;
 } 
