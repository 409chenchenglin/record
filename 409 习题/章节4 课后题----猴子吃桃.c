#include<stdio.h>
int main()
{
	int i,n,sum=1;
//	����˼ά ���һ����ǰ�� ���һ����1���� �Ѿ����ȥ��
//	����iҪ��2��ʼѭ�� 
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		sum=(sum+1)*2;
	} 
	printf("%d",sum);
	return 0;
}
