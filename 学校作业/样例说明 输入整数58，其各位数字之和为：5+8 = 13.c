#include<stdio.h>
//��Ŀ�涨����0��999֮��ķǸ����� 
int sum(int x);
int main()
{
	int x;
	scanf("%d",&x);
	printf("%d",sum(x));
	return 0;
}

int sum(int x)
{
	int ret=0,temp;
	while(x>0)
	{
		temp=x%10;
		ret=ret+temp;
		x=x/10;
	}
	return ret;
}
