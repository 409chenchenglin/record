#include<stdio.h>
	struct time{
		int hour;
		int minute;
		int second;
	}t1;
int main()
{
//	��Ŀ�涨nҪС����ʮ  nΪ���ϵ����� 
	int n;
	scanf("%d:%d:%d",&t1.hour,&t1.minute,&t1.second);
	scanf("%d",&n);
	if(t1.second+n>=60){
		t1.second=t1.second+n-60;
		t1.minute+=1;
	}
	if(t1.minute>=60){
		t1.minute=t1.minute-60;
		t1.hour+=1;
	}
	if(t1.hour>=24){
		t1.hour-=24;
	}
	printf("%d:%d:%d",t1.hour,t1.minute,t1.second);
	return 0;
 } 
