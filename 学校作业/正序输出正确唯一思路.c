#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int t=n; // ��ʱ�洢n ��mask �����λ�� 
	int mask=1;
	while(d>9){
		mask*=10;
		d=d/10;
	}// һ��ʼmask=1 ֻ��n����10ʱ�Ž���ѭ�� ��Ϊ ��λ����Ӧ�ľ���1 ʮλ������10���Դ����� 
	do{
		int x=n/mask; //x ����Ϊ���λ 
		n=n%mask; //ȥ�����λ 
		printf("%d",x); // ˳���ӡ 
		if(mask>0){ //��mask��Ϊ�ж����� �����м���0�����  ����ֱ��û�� 
			printf(" ");
		}
		mask/=10;
	}while(mask>0); //��mask��Ϊ�ж����� �����м���0�����  ����ֱ��û�� 
	return 0;
}
