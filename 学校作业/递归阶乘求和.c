//�ݹ���׳˺ͣ�����һ������n(n > 0��n �� 10)����1!+2!+3!+��+n!��
//���岢���ú���fact(n)����n!������������ double���Ա�д��Ӧ����
#include<stdio.h>
double fact(int n);
int main()
{
	int i,n;
	double total=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		total+=fact(i);
	}
	printf("%.2lf",total);
	return 0;
}

double fact(int n)
{
	double f;
	if(n==1||n==0){
		f=1;
	}else{
		f=n*fact(n-1); 
	}
	return f;
}
