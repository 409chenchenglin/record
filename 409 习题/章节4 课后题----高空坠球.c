#include<stdio.h>
int main()
{
	int n;
//	��m�׸߿����� ����n�� 
	int i; 
	double m,heigh_sum,x;
	scanf("%lf %d",&m,&n);
	heigh_sum=m;
// �ڷ���ǰ��һ������ �Ȱ�����ľ������
// Ȼ�������� ������ ���� 
// Ȼ��1�������������������� ÿ��Ϊ��һ�� ����ǰ�߶�һ�� ���������Ƿ���ǰ�ĸ߶� 
//�����ȼ��ϴεĸ߶Ⱥ� �ٽ��߶ȳ���2 
	for(i=1;i<=n;i++){
		heigh_sum=heigh_sum+m;
		m=m/2;
	}
	printf("%.1lf %.1lf",heigh_sum,m);
} 
