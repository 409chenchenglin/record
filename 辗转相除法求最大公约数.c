#include<stdio.h>
int main(){ 
	int a,b;
	int t;
	while(b>0){
		t=a%b;
		a=b;
		b=t
	}
//շת����������Լ�� ��ѭ������ b=0ʱ��a�������Լ�� 
	return 0
}
