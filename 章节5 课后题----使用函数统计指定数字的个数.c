#include<stdio.h>
int countdigit(int number,int digit);
int main()
{
	int number,digit;
	scanf("%d %d",&number,&digit);
	printf("%d",countdigit(number,digit));	
	return 0;
} 

int countdigit(int number,int digit)
{
	int cnt=0,temp;
	if(number<0){
		number=-number;
	}
//	Ϊ�˴��� 0 0����� ����д�� 18 19 20 21 �Ĵ��� 
	if(number==digit)
	{
		cnt++;
	}else{
		while(number>0)
		{
			temp=number%10;
			if(temp==digit)
			{
				cnt++;
			}
			number=number/10;
		}
	}
	return cnt;
}
