#include<stdio.h>
#include<math.h>
int reverse(int number);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",reverse(n));
	return 0;
}

int reverse(int number)
{
	int cnt=0,ret=0,i,temp;
	temp=number;
	do{
		cnt++;
		temp=temp/10;
	}while(temp>0);
	while(number>0){
		temp=number%10;
		ret=ret+temp*pow(10,cnt-1);
		cnt--;
		number=number/10;
	}
	return ret;
}
